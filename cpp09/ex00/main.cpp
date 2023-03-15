#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	(void)ac;

	std::ifstream   textIfs(av[1]);
	std::ifstream   dataIfs("data.csv");

	if (textIfs.fail() || dataIfs.fail())  return printError("Error: could not open file");
	
	std::map<std::string, double> dataMap = std::map<std::string, double>();
	parseData(dataIfs, dataMap);
	printResult(textIfs, dataMap);

	return (0);
}

