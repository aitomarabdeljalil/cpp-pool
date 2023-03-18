/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:12 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/17 17:52:42 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::invalid_argument("Error");
		std::string myText;
		std::ifstream MyReadFile(av[1]);
		while (std::getline (MyReadFile, myText)) {
			std::cout << myText << std::endl;
		}
		MyReadFile.close();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}







// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <map>
// #include <string>
// #include <iomanip>

// using namespace std;

// map<string, double> load_data(string filename) {
//     ifstream file(filename.c_str());
//     map<string, double> data;

//     if (file.is_open()) {
//         string line;

//         while (getline(file, line)) {
//             istringstream iss(line);
//             string date_str;
//             double price;

//             if (iss >> date_str >> price) {
//                 data[date_str] = price;
//             }
//         }

//         file.close();
//     } else {
//         cerr << "Error: Could not open file '" << filename << "'" << endl;
//         exit(1);
//     }

//     return data;
// }

// int main(int argc, char *argv[]) {
//     if (argc != 2) {
//         cerr << "Usage: " << argv[0] << " <datafile>" << endl;
//         return 1;
//     }

//     string datafile = argv[1];
//     map<string, double> data = load_data(datafile);

//     string input;
//     while (getline(cin, input)) {
//         istringstream iss(input);
//         string date_str;
//         double value;

//         if (iss >> date_str >> value) {
//             map<string, double>::const_iterator it = data.find(date_str);

//             if (it == data.end()) {
//                 cerr << "Error: Could not find data for date '" << date_str << "'" << endl;
//                 continue;
//             }

//             double price = it->second;
//             double total_value = price * value;

//             cout << "Total value on " << date_str << ": " << fixed << setprecision(2) << total_value << " USD" << endl;
//         }
//     }

//     return 0;
// }
