#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

class BitcoinExchange
{
    private:
		std::map<std::string, float> _rates;

		void	parseDates(std::string line);
		void	getDateAndPrint(std::string date, float val);

		bool	calculate(std::string infile);
		bool	readDataFile();
		bool	isValidDelim(std::string	line);
		bool	isValidDate(std::string	date);
		float	isValidValue(std::string	val);
		bool	isValidDMY(std::string year, std::string month, std::string day);

		std::string	lowerBound(std::string date);

    public:
        BitcoinExchange();
        BitcoinExchange(std::string	infile);
        BitcoinExchange(const BitcoinExchange &object);
        BitcoinExchange &operator=(const BitcoinExchange &rhs);
        ~BitcoinExchange();
};
