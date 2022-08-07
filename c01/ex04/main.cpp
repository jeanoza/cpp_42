/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:23:49 by kychoi            #+#    #+#             */
/*   Updated: 2022/08/07 11:34:29by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

/* Test find and its family functions
std::cout << "find          :" << data.find(av[2]) << std::endl;
std::cout << "first_of      :" << data.find_first_of(av[2]) << std::endl;
std::cout << "first_not_of  :" << data.find_first_not_of(av[2]) << std::endl; 
std::cout << "last_of       : " << data.find_last_of(av[2]) << std::endl;
std::cout << "last_not_of   : " << data.find_last_not_of(av[2]) << std::endl; 
*/
/*
    std::string test = "hello hello hello hello       f";

    std::cout << "length: " << test.length() << std::endl;

    int start = 0;
    int end = 0;
    while (start < test.length()) {

        start = test.find("hello", start);
        end = test.find_first_not_of("hello", start);

        if (end < 0)
            break ;

        std::cout << test.substr(start, end) << "\n(start: " << start << "end: " << end << ")" << std::endl;
        start = end;
    }

    std::cout << start << std::endl;
*/

                /* Ajust end_idx when start_idx is bigger than end_idx */
                // for (int i = 0; start_idx > end_idx; i++)
                //     end_idx = data.find_first_not_of(av[2], i);

int main(int ac, char *av[]) {

    if (ac == 4) {

        std::string     output = av[1];
        output += ".replace";

        std::ifstream   ifs(av[1]);
        std::ofstream   ofs(output);


        if (ifs.is_open()) {
            std::string data;
            std::string replaced_word = av[3];
            int         length = std::string(av[2]).length();

            while (getline(ifs, data))
            {
                std::string tmp = "";
                int         start_idx = 0;
                int         end_idx = 0;
                int         pivot = 0;

                while (1) {

                    start_idx = data.find(av[2], pivot);

                    // printf("1/start_idx:%d pivot:%d\n", start_idx, pivot);
                    tmp += data.substr(pivot, start_idx - pivot);
                    tmp += replaced_word;
                    pivot = data.find_first_not_of(av[2], start_idx);
                    printf("2/%s(start_idx:%d pivot:%d)\n", tmp.c_str(), start_idx, pivot);
                    if (pivot < 0) {
                        break;
                    }

                }
                std::cout << tmp << std::endl;

                ofs << tmp << std::endl;
            }

            ifs.close();
            ofs.close();

        }

    } else std::cout << "USAGE: ./replace <filename> <word_to_replace> <replaced_word>" << std::endl;
    return (0);
}

            
                    // if (start_idx < data.length()) {
                    //     std::string prev = data.substr(0, start_idx); 
                    //     std::string next = data.substr(end_idx);
                    // /* replaceAll */
                    //     for (int i = 0; i < replaced_word.length(); i++)
                    //         tmp += replaced_word[i];
                    //     tmp = prev + tmp + next;
                    // }
                    // start_idx = end_idx;
                    // printf("2start_idx:%d end_idx:%d\n", start_idx, end_idx);
