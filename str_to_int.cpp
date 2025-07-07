/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   str_to_int.cpp
 * Author: Aionnio
 * 
 * Created on January 23, 2024, 2:27 PM
 */

#include "str_to_int.h"
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

str_to_int::str_to_int() {
}

str_to_int::str_to_int(const str_to_int& orig) {
}

str_to_int::~str_to_int() {
}

int str_to_int::s_t_i(string x,int break_point){
   // cout<<"the string is " << x <<"\n";
    int start=0;
    int end=break_point-1;
    int numm=0;
    string numy;
    for(;;){
        numy.clear();
        while(start<=end){
          //  cout<<"entering with " << start << " " << end <<" ";
            numm=0;
            numy+=x.at(start);
          //  cout<<x.at(start) <<"\n";
            start+=1;
            if(start==end+1){break;}
        }
   // cout<<"string repre " << numy <<"\n";
    numm=stoi(numy);     
    this->breaks.push_back(numm);  
    start=end+1;
    end=end+break_point;
    if(end>x.length()-1){end=x.length()-1;}
 //   cout<<"re-entering with " << start << " " << end <<"\n";
    if(start>x.length()-1){
        //cout<<"breaking at start \n";
        break;}
    if(end>x.length()-1){
        //cout<<"breaking at end \n";
        break;}
    }
    this->cti=this->breaks.size()-1;
    return 0;
}

int str_to_int::read_vector(){
    for(int i=0;i<=this->breaks.size()-1;i++){
         cout<<this->breaks.at(i) <<" ";     
    }
    cout<<"\n";
    return 0;
}

