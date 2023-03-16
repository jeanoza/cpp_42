#include "BitcoinExchange.hpp"

bool verifyDateFormat(const std::string& dateStr) {
    std::istringstream iss(dateStr);
    int year, month, day;
    char dash1, dash2;

    if (iss >> year >> dash1 >> month >> dash2 >> day &&
        dash1 == '-' && dash2 == '-' &&
        year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= 31) {
        return true;
    }
    return false;
}

int printError (const std::string &msg) {
    std::cout << RED << msg << DFT << std::endl;
    return (-42);
}

std::string trim(const std::string& str) {
    std::string::size_type first = str.find_first_not_of(' ');
    if (first == std::string::npos) {
        return "";
    }
    std::string::size_type last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}


/**
 * function to find a near day from dateStr
 * Then return its rate
 */
double findRate(std::string dateStr, std::map<std::string, double> &dataMap) {
	while (dataMap.find(dateStr) == dataMap.end()) {
		int year, month, day;
		std::sscanf(dateStr.c_str(), "%d-%d-%d", &year, &month, &day);

		// Create tm structure with date values;
		std::tm date = {};
		date.tm_year = year - 1900; // years from 1900
		date.tm_mon = month - 1; // month from january
		date.tm_mday = day;

		// Convert tm structure to time from UNIX system time
		std::time_t time = std::mktime(&date);

		// Decrement 1 day
		time -= 24*60*60;

		// Convertir le temps en une structure tm
		date = *std::localtime(&time);

		// update dateStr with YYYY-MM-DD format
		char buffer[80];
		std::strftime(buffer, 80, "%Y-%m-%d", &date);
		dateStr = std::string(buffer);
	}
	return (dataMap[dateStr]);
}

bool validateValue(const std::string &value){
	for(int i = 0; i < static_cast<int>(value.length()); ++i) {
		if (!(isdigit(value[i]) || value[i] == '.' || value[i] == '-'))
			return false;

	}
	return true;
}

void printResult(std::ifstream &ifs, std::map<std::string, double> &dataMap) {
	std::string line;

	while (getline(ifs, line)){
		std::stringstream ss(line);
		std::string date;
		std::string value;

		getline(ss, date, '|');
		date = trim(date); // trim to delete space in date
		getline(ss, value);
		value = trim(value); // trim to delete space in date

		if (!date.length() || !value.length()) {
			printError("Error: bad input => " + line);
			continue;
		}
		if (date != "date"){
			 if(!verifyDateFormat(date) || !validateValue(value)) {
				printError("Error: bad input => " + line);
				continue;
			}
			double _value = std::atof(value.c_str());
			if (_value > 1000) {
				printError("Error: too large a number.");
				continue;
			}
			if (_value < 0) {
				printError("Error: not a positive number.");
				continue;
			}
			std::map<std::string, double>::iterator it = dataMap.find(date);
			double rate = (it != dataMap.end() ? dataMap[date] : findRate(date, dataMap));
			double res = _value * rate;

			std::cout << date << " => " << _value << " = " << res << std::endl;
		}
	}
	ifs.close();
}

void parseData(std::ifstream &ifs, std::map<std::string, double> &dataMap) {
	std::string line;

	while (getline(ifs, line)){
		std::stringstream ss(line);
		std::string date;
		std::string rate;

		getline(ss, date, ',');
		getline(ss, rate, ',');
		if (date != "date") dataMap[date] = std::atof(rate.c_str());
	}
	ifs.close();
}
