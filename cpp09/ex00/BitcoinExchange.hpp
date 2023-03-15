#pragma once
//e2r10p12
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <map>
#include <ctime>

# ifndef COLOR
#  define RED "\033[0;31m"
#  define GRN "\033[0;32m"
#  define YEL "\033[0;33m"
#  define BLU "\033[0;34m"
#  define MAG "\033[0;35m" //purple
#  define CYN "\033[0;36m" //emerald
#  define WHT "\033[0;37m"
#  define DFT "\033[0m"
# endif

int printError (const std::string &msg);

bool verifyDateFormat(const std::string& dateStr);
std::string trim(const std::string& str);
double findRate(std::string dateStr, std::map<std::string, double> &dataMap);

void parseData(std::ifstream &ifs, std::map<std::string, double> &dataMap);

void printResult(std::ifstream &ifs, std::map<std::string, double> &dataMap);
