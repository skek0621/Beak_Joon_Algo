//
//  Baek_Joon_2902.cpp
//  BOJ길라잡이
//
//  Created by Cha Hyun Min on 2019. 3. 13..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    string output;
    cin>>str;
    
    output += str[0];
    
    for(int i=1; i<str.length(); i++){
        if(str[i] == '-') output += str[i+1];
    }
    cout<<output;
    
    return 0;
}
