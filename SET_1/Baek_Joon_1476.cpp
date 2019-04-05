//
//  Baek_Joon_1476.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 12..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int e,s,m;
    cin>>e>>s>>m;
    
    int a=0, b=0, c=0;
    int year=0;
    
    while (a !=e || b!=s || c!=m) {
        a++;
        if(a==16) a=1;
        b++;
        if(b==29) b=1;
        c++;
        if(c==20) c=1;
        year++;
    }
    
    cout<<year<<endl;
    return 0;
}
