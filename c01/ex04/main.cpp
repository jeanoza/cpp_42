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

# ifndef COLOR
#  define RED "\033[0;31m"
#  define DFT "\033[0m"
# endif

#include <iostream>
#include <fstream>

void replaceAll(std::ifstream &ifs, std::ofstream &ofs, std::string src, std::string dst) {
    std::string data;

    while (getline(ifs, data))
    {
        /* pos = (if match src in data) ? idx : string::npos */
        size_t pos = data.find(src);

        while (pos != std::string::npos) {
            data.erase(pos, src.length());
            data.insert(pos, dst);
            pos = data.find(src, pos + dst.length());
        }
        ofs << data;
        if (!ifs.eof()) ofs << std::endl;
    }
    ifs.close();
    ofs.close();
}

int printError (char const *msg) {
    std::cout << RED << msg << DFT << std::endl;
    return (-42);
}

int main(int ac, char *av[]) {

    if (ac == 4) {

        std::string     filename(av[1]);
        std::ifstream   ifs(filename);
        if (ifs.fail())  return printError("Error: fail to read file!");
        std::ofstream   ofs(filename + ".replace");
        if (ofs.fail())  return printError("Error: fail to create file!");
        std::string data;
        std::string src(av[2]);
        std::string dst(av[3]);
        replaceAll(ifs, ofs, src, dst);

    } else return printError("USAGE: ./replace <filename> <word_to_replace> <replaced_word>");
    
    return (0);
}
            