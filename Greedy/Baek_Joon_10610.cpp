//
//  Baek_Joon_10610.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//0-9까지 몇번 나왔는지 표시할 배열
int number[11];

int main()
{
    //입력받을 숫자
    string input;
    cin>>input;
    
    //각 자리수 합
    int temp=0;
    
    for(int i=0; i<input.size(); i++) {
        temp += (input[i]-'0');
        number[input[i]-'0']++;
    }
    
    if(temp % 3 == 0 && number[0] != 0){
        for(int i=9; i>=0; i--){
            for(int j=0; j<number[i]; j++) cout<<i;
        }
    }else cout<<-1;
    return 0;
}
