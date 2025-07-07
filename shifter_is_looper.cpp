/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/*
 * File:   shifter_is_looper.cpp
 * Author: Aionnio
 *
 * Created on January 23, 2024, 2:17 PM
 */

#include "shifter_is_looper.h"
#include "sum_mer.h"
#include <iostream>
#include <iomanip>
using namespace std;

shifter_is_looper::shifter_is_looper() {}

shifter_is_looper::shifter_is_looper(const shifter_is_looper& orig) {}

shifter_is_looper::~shifter_is_looper() {}

int shifter_is_looper::shift_them_all(int mynum,int pos){
    //cout<<"using number " << mynum <<"  @ pos " << pos <<"\n";
    sum_mer *srm=new sum_mer();
    posy.push_back(pos);
    mvc.push_back(pos);avc.push_back(pos);
    mvc.push_back(mynum);avc.push_back(srm->sum_it(mynum));
    int y=(mynum<<5); int ys=srm->sum_it(y); mvc.push_back(y);avc.push_back(ys);
    int yy=(mynum<<4);int yys=srm->sum_it(yy); mvc.push_back(yy); avc.push_back(yys);
    int z=(mynum<<3);int zs=srm->sum_it(z); mvc.push_back(z); avc.push_back(zs);
    int zz=(mynum<<2);int zzs=srm->sum_it(zz); mvc.push_back(zz); avc.push_back(zzs);
    int zi=(mynum<<1);int zzi=srm->sum_it(zi); mvc.push_back(zi); avc.push_back(zzi);
    int l=(24+mynum)<<1;int ls=srm->sum_it(l); mvc.push_back(l); avc.push_back(ls);
    int ll=(24+mynum)<<2;int lls=srm->sum_it(ll); mvc.push_back(lls); avc.push_back(lls);
    int nin=(mynum<<1); mvc.push_back(nin); avc.push_back(nin);
    mvc.push_back(pos);avc.push_back(pos);
    //nin=nin+9;
    //cout<<"M1 " << mynum << " ::= " << srm->sum_it(mynum) << " \n";
    //cout<<"M2 " << y << " ::= " << ys << " \n";
    //cout<<"---- M3 " << (yy)<< " ::= " << yys << " \n";
    //cout<<"---- M4 " << (z)<< " ::= " << zs << " \n";
    if(zs>=yys){int lop=zs-yys;
  //  cout<<" <-----------------------------------> @M1 " << zs <<" - " << yys << " ::= " << lop << " //::= " << srm->sum_it(lop) <<" \n";
    }
    if(zs<yys){int lp=10*zs;int lop=lp-yys;
   // cout<<" <-----------------------------------> @M1 "<< lp <<" - " << yys << " ::= " << lop << " //::= " << srm->sum_it(lop) << " \n";
    }
//    cout<<"M5 " << (zz)<< " ::= " << zzs << " \n";
//    cout<<"M6 " <<(zi)<< " ::= " << zzi << " \n";
//    cout<<"----- @3 " <<(l)<< " ::= " << ls << " \n";
//    cout<<"----- @6 " << (ll)<< " ::= " << lls << " \n";
//    //nine requires a special care
//    cout<<"for @9 \n";
    int m=srm->sum_it(nin);
    if(m<9){int x=srm->sum_it(nin);
    //cout<<"for " << nin << " sum " << x <<"\n";
    if(x<9){
        int s=0;int s_end=9;
        while(s<=s_end){
            if(x<9){nin+=1;x=srm->sum_it(nin);
           // cout<<"setting nin " << nin << " and getting x " << x <<"\n";
            }
            if(x==9){break;}
            if(x<9){s+=1;}
            if(s==s_end){break;}
        }
    }
    }
   // cout<<"@9 " << nin << " ::= " << srm->sum_it(nin) << " \n";
    return 0;
}


int shifter_is_looper::shifter_add_the_results(int da_loop){
    if(da_loop==0){
    cout<<"Spli Num " << "  M1 " << "  M2  " << "  M3  " << "  M4  " << "  M5  " << "  M6  " << "  @3  " << "  @6  " <<"\n"; }
    long long int xc=0;
    double kc=0;
    sum_mer *srmi=new sum_mer();
    int sum_zero=0,sum_one=0,sum_two=0,sum_three=0,sum_four=0,sum_five=0,sum_six=0,sum_seven=0;
    int sz=0,so=0,st=0,sth=0,sf=0,sff=0,ssx=0,ssv=0,svs=0,kcsum=0;
    for(int i=1;i<=mvc.size()-1;i+=11){
        if(da_loop==0){
            cout<<"A" << i << "  " << mvc.at(i) << "  " << avc.at(i) << "  " << avc.at(i+1) << "  " << avc.at(i+2) << "  " ;
            cout<< avc.at(i+3) <<  "  " << avc.at(i+4) << "  " ;
            cout << avc.at(i+5) << "  " << avc.at(i+6) << "  " << avc.at(i+7) <<"\n"; }
            xc=xc+mvc.at(i); kc=kc+mvc.at(i);
            sum_zero=sum_zero+avc.at(i);
            sum_one=sum_one+avc.at(i+1);
            sum_two=sum_two+avc.at(i+2);
            sum_three=sum_three+avc.at(i+3);
            sum_four=sum_four+avc.at(i+4);
            sum_five=sum_five+avc.at(i+5);
            sum_six=sum_six+avc.at(i+6);
            sum_seven=sum_seven+avc.at(i+7);
    }
    if(da_loop==0){
    cout<<"-------------------------------------------\n";
    cout<<"with sums \n";
    cout<< xc << "  " << sum_zero << "  " << sum_one << "  " << sum_two <<"  ";
    cout<<sum_three << "  " << sum_four << "  " << sum_five << "  "<< sum_six << "  " ;
    cout<<sum_seven <<"\n";
    cout<<"Sum if not showed " << std::setprecision(9) << kc <<"\n";
    cout<<"-------------------------------------------\n";
    }
    sz=srmi->sum_it(xc);so=srmi->sum_it(sum_zero);st=srmi->sum_it(sum_one);
    sth=srmi->sum_it(sum_two);sf=srmi->sum_it(sum_three);sff=srmi->sum_it(sum_four);
    ssx=srmi->sum_it(sum_five);ssv=srmi->sum_it(sum_six);svs=srmi->sum_it(sum_seven);
    kcsum=srmi->sum_it(kc);
    if(da_loop==0){
    cout<<"with range numbers sums \n";
    cout<<"-------------------------------------------\n";
    cout<<"Numbers in range finals \n";
    cout<<"N  M1  M2  M3  M4  M5  M6  @3  @6\n";
    cout<< sz << "  " << so << "    " << st << "   " << sth << "   " << sf << "   " << sff << "   ";
    cout<<ssx << "   " << ssv <<"   " <<  svs <<"\n";}
    mpl.clear();
    mpl+=to_string(sz); mpl+=" | ";
    mpl+=to_string(so); mpl+="  ";
    mpl+=to_string(st); mpl+="  ";
    mpl+=to_string(sth); mpl+="  ";
    mpl+=to_string(sf); mpl+="  ";
    mpl+=to_string(sff); mpl+="  ";
    mpl+=to_string(ssx); mpl+=" | @3 ::= ";
    mpl+=to_string(ssv); mpl+=" @6 ::= ";
    mpl+=to_string(svs); mpl+="  ";
    mfnl.push_back(mpl);
   // if(da_loop==1){cout<<"Getting line " << mfnl.at(impl) <<"\n";}
    impl+=1;
    if(da_loop==0){
    cout<<"-------------------------------------------\n";}
    return 0;
}

int shifter_is_looper::shifter_show_rst_at_loop(){
    cout<<"All the Results Sets\n";
    cout<<"-----------------> N   M1 M2 M3 M4 M5 M6  @3       @6\n";
    for(int i=0;i<=mfnl.size()-1;i++){
        cout<<"A/A:" <<i << " Final Result " << mfnl.at(i) <<" \n";
    }
return 0;
}

int shifter_is_looper::shift_looper_show_tbl(){

    cout<<"Without Shift @ M1 : ";
    for(int i=1;i<=9;i++){cout<<i << " "  ;}
    cout<<"\n";
    cout<<"@5 @ M2 : ";
    for(int i=1;i<=9;i++){cout<<(i<<5) << " "  ;}
    cout<<"\n";
    cout<<"@4 @ M3 : ";
    for(int i=1;i<=9;i++){cout<<(i<<4) << " "  ;}
    cout<<"\n";
    cout<<"@3 @ M4 : ";
    for(int i=1;i<=9;i++){ cout<<(i<<3) << " "  ;}
    cout<<"\n";
    cout<<"@2 @ M5 : ";
    for(int i=1;i<=9;i++){cout<<(i<<2) << " "  ;}
    cout<<"\n";
    cout<<"@1 @ M6 : ";
    for(int i=1;i<=9;i++){ cout<<(i<<1) << " "  ;}
    cout<<"\n";
    cout<<"\n";
    cout<<"@1,3 || @1,6 || @1,9\n";
    for(int i=1;i<=9;i++){ cout<<(i<<1,3) << " "  ;}cout<<"\n";
    for(int i=1;i<=9;i++){ cout<<(i<<1,6) << " "  ;}cout<<"\n";
    for(int i=1;i<=9;i++){ cout<<(i<<1,9) << " "  ;}cout<<"\n";
    cout<<"@3 @ row 3\n";
    int x=0;
    int tmpx=0;
    int fx=1;
    int fnl=9;
    int ol=0;
    for(int i=6;i<=300;i+=6){
       // cout<<"i is " << i <<"\n";
        ol=0;
        if(x%2==0 && i!=6){ol=0;
            tmpx+=24;
           // cout<<"making for i " << i <<" tmpx as  " << tmpx <<" \n";
         //   ol=tmpx+i;
          //  cout<<"new number to shift " << ol <<" \n";
        } //12*2
      //  cout<<"\n";
        ol=tmpx+i;
       // cout<<"i " << i << " with " << tmpx << " and ol "<< ol <<" with result ";
        cout<<(tmpx+i<<1) << " "  ;
      //  cout<<"\n";
        fx+=1;
        x+=1;
        if(fx==fnl){break;}
    } cout<<"\n";
    x=0;tmpx=0;fx=1;fnl=9;ol=0;
    cout<<"@6 @ row 3\n";
    for(int i=6;i<=300;i+=6){
        if(x%2==0 && i!=6){//ol=0;
            tmpx+=24;
           // cout<<"making for i " << i <<" tmpx as  " << tmpx <<" \n";
           // ol=tmpx+i;
           // cout<<"new number to shift " << ol <<" \n";
        } //12*2
        cout<<(tmpx+i<<2) << " "  ;
        fx+=1;
        x+=1;
        if(fx==fnl){break;}
    } cout<<"\n";
    x=0;tmpx=0;fx=1;fnl=9;ol=0;
    cout<<"@9 @ row 9\n";
    for(int i=9;i<=300;i+=9){
       // if(i!=9){tmpx+=9;}
        cout<<(tmpx+i<<1) << " "  ;
        fx+=1;
        x+=1;
        if(fx==fnl){break;}
    } cout<<"\n";
    return 0;
}
