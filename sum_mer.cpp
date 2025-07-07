/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   sum_mer.cpp
 * Author: Aionnio
 * 
 * Created on January 23, 2024, 2:18 PM
 */

#include "sum_mer.h"

sum_mer::sum_mer() {
}

sum_mer::sum_mer(const sum_mer& orig) {
}

sum_mer::~sum_mer() {
}

int sum_mer::sum_it(int xnumber){
 int sum = 0;
        while (xnumber != 0) {
            sum = sum + xnumber % 10;
            xnumber = xnumber / 10;
        }
        if(sum>9){return sum_it(sum);}
        if(sum<=9){return sum;}
 return 0;
}
