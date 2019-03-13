//
//  Baek_Joon_11365.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 13..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char str[501];
    cin.getline(str, 501);
    
    while (strcmp(str, "END") != 0){
        for(int i = (int)strlen(str)-1 ; i>=0; i--){
            cout<<str[i];
        }
        cout<<endl;
        cin.getline(str, 501);
    }
    return 0;
}
