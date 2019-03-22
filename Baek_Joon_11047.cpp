//
//  Baek_Joon_11047.cpp
//  Greedy Algorithm
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    //동전 종류 개수, 지불 금액
    int n, input;
    cin>>n>>input;
    int* p = new int[n];
    
    //동전 단위 입력받기
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    // 필요한 동전 개수 세기
    int count = 0;
    
    for(int i= n-1; i>=0 ; i--){
        count += input/p[i];
        input %= p[i];
    }
    
    cout<<count;
    
    return 0;
}
