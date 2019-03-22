//
//  Baek_Joon_1541.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin>>input;
    string temp = "";
    bool minus = false;
    
    int output=0;
    
    for(int i=0; i<=input.size(); i++){
        if(input[i] == '+' || input[i] == '-' || input[i] == '\0'){
            if(minus==false){
                output += stoi(temp);
            }
            else {
                output += -stoi(temp);
            }
            temp = "";
            if(input[i] == '-') minus=true;
            continue;
        }
        temp += input[i];
    }
    
    cout<<output;
    return 0;
}
