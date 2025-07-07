/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   shifter_is_looper.h
 * Author: Aionnio
 *
 * Created on January 23, 2024, 2:17 PM
 */

#ifndef SHIFTER_IS_LOOPER_H
#define SHIFTER_IS_LOOPER_H

#include <iostream>
#include <vector>
using namespace std;

class shifter_is_looper {
public:
    vector<string> mfnl;
    string mpl;
    int impl=0;
    vector<int> avc;
    vector<int> mvc;
    vector<int> posy;
    shifter_is_looper();
    int shift_them_all(int mynum,int pos);
    int shift_looper_show_tbl();
    shifter_add_the_results(int da_loop);
    shifter_show_rst_at_loop();
    shifter_is_looper(const shifter_is_looper& orig);
    virtual ~shifter_is_looper();
private:
};

#endif /* SHIFTER_IS_LOOPER_H */

