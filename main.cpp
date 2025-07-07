/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */
/* 
 * File:   main.cpp
 * Author: Aionnio
 *
 * Created on January 23, 2024, 2:16 PM
 */
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <string>
#include "shifter_is_looper.h"
#include "str_to_int.h"
#include "sum_mer.h"
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Requires at least 7 digits\n";
    cout<<"voyeristic behaviours and others have fun \n";
    shifter_is_looper *shlp=new shifter_is_looper();
    str_to_int *stri=new str_to_int();
    cout<<"enter 1 to show help file or 0 to continue : ";
    int x_one=0;
    cin>>x_one;
    if(x_one!=0){shlp->shift_looper_show_tbl();}
    cout<<"enter ur number : ";
    string s;
    cin>>s;
    if(s.size()<7){cout<<"Requires at least 7 digits\n"; return 0;}
    cout<<"one break point or all ? 1=one 2=all  : ";
    int bp_mode=0;
    cin>>bp_mode;
    if(bp_mode==1){
        cout<<"enter the break point eg 2 digits per turn. 7 digits per turn is the max : ";
        int xi=0;
        cin>>xi;  
        if(xi>7){cout<<"large break point is 7\n"; return 0;}
        if(xi<=7){
        stri->s_t_i(s,xi);
        cout<<"splitting the numbers is nice \n";
        cout<<"------------------------------\n";
        stri->read_vector();
        cout<<"------------------------------\n";   
        cout<<"\n";
        for(int i=0;i<=stri->cti;i++){
            shlp->shift_them_all(stri->breaks.at(i),i);
        }
        shlp->shifter_add_the_results(0); //0 = only one time 
        }
    }
    if(bp_mode==2){
        cout<<"calculate repeatitive range 1-9 of the same number ?\n";
        cout<<"1=yes 2=no : ";
        int mcalc=0;
        cin>>mcalc;
        string mck;
        mck+=s;
        if(mcalc==1){
            for(int i=1;i<=9;i++)
            {
             cout<<"calculating " << mck <<"\n";
             for(int ik=1;ik<=7;ik++){
           // cout<<i <<" with ----> ";
            stri->breaks.clear();
            stri->cti=0;
            shlp->avc.clear();
            shlp->mvc.clear();
            shlp->posy.clear();
            stri->s_t_i(mck,ik);
           // stri->read_vector();
           // cout<<"\n";
            for(int y=0;y<=stri->cti;y++){
                shlp->shift_them_all(stri->breaks.at(y),y);
            }
            shlp->shifter_add_the_results(1);         
        }
        mck+=s;
        shlp->shifter_show_rst_at_loop();
        shlp->mfnl.clear();
        shlp->mpl.clear();
        shlp->impl=0;
        cout<<"\n";
        }                
    }
    if(mcalc==2){
        cout<<"mcalc is " << mcalc <<"\n";
        for(int i=1;i<=7;i++){
           // cout<<i <<" with ----> ";
            stri->breaks.clear();
            stri->cti=0;
            shlp->avc.clear();
            shlp->mvc.clear();
            shlp->posy.clear();
            stri->s_t_i(s,i);
           // stri->read_vector();
           // cout<<"\n";
            for(int y=0;y<=stri->cti;y++){
                shlp->shift_them_all(stri->breaks.at(y),y);
            }
            shlp->shifter_add_the_results(1);         
        }
        shlp->shifter_show_rst_at_loop();
    }   
    }
    return 0;
}

