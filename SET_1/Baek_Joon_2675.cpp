//
//  Baek_Joon_2675.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 12..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    int input;
    
    for(int i=0; i<n; i++){
        cin>>input>>str;
        for(int j=0; j<str.size(); j++){
            for(int k=0; k<input; k++)cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}
