/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:23:49 by kychoi            #+#    #+#             */
/*   Updated: 2022/08/06 14:03:21 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[]) {

    // if (ac == 4) {
        std::ifstream   ifs(av[1]);
        std::ofstream   ofs("output.txt");

        printf("%d\n", ifs.is_open());

        if (ifs.is_open()) {
            std::string data;

            while (ifs >> data)
            {
                if (data.compare(av[2]) == 0) {
                    std::cout << "[here]\n";
                    ofs << av[3];
                } else {
                    ofs << data;
                }
                std::cout << data << std::endl;
            }
            printf("%d\n", ifs.is_open());

            ifs.close();
            ofs.close();

        }


        // ofs.close();


    // }
}