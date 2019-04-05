//
//  Baek_Joon_10809.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 12..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string input;
    cin>>input;
    
    int alpha[26];
    
    for(int i=0; i<26; i++) alpha[i] = -1;
    
    for(int i=0; input[i] != '\0'; i++){
        if(alpha[int(input[i]-'a')] == -1) alpha[int(input[i]-'a')] = i;
    }
    
    for(int i=0; i<26; i++) cout<<alpha[i]<<" ";
}
