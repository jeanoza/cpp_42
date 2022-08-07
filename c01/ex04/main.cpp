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

void replaceAll(std::ifstream &ifs, std::ofstream &ofs, std::string src, std::string dst) {
    std::string data;

    while (getline(ifs, data))
    {
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

int main(int ac, char *av[]) {

    if (ac == 4) {

        std::string     filename(av[1]);
        std::ifstream   ifs(filename);
        if (ifs.fail()) {
            std::cout << "Error: fail to read file!" << std::endl;
            return (-42);
        }
        std::ofstream   ofs(filename + ".replace");
        if (ofs.fail()) {
            std::cout << "Error: fail to create file!" << std::endl;
            return (-42);
        }
        std::string data;
        std::string src(av[2]);
        std::string dst(av[3]);
        replaceAll(ifs, ofs, src, dst);

    } else std::cout << "USAGE: ./replace <filename> <word_to_replace> <replaced_word>" << std::endl;

    return (0);
}

            