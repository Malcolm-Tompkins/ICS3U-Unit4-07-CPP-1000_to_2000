// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 25, 2021
// Shows all numbers in between 1000 and 2000

#include <iostream>

main() {
    int loop_counter = 1000;
    int mod;
    while (loop_counter < 2000) {
        loop_counter = loop_counter + 1;
        mod = loop_counter % 5;
        std::cout << loop_counter << " ";
        if (mod == 0) {
            std::cout << "\n";
        }
    }
}
