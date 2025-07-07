/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   str_to_int.h
 * Author: Aionnio
 *
 * Created on January 23, 2024, 2:27 PM
 */

#ifndef STR_TO_INT_H
#define STR_TO_INT_H

#include <string.h>
#include <string>
#include <vector>
using namespace std;

class str_to_int {
public:
    vector<int> breaks;
    int cti=0;
    str_to_int();
    int s_t_i(string x,int break_point);
    int read_vector();
    str_to_int(const str_to_int& orig);
    virtual ~str_to_int();
private:

};

#endif /* STR_TO_INT_H */

