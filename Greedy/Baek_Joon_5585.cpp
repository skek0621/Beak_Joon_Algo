//
//  Baek_Joon_5585.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int price;
    cin>>price;
    int value = 1000-price;

    int count = 0;

    count += value/500;
    value %= 500;
    count += value/100;
    value %= 100;
    count += value/50;
    value %= 50;
    count += value/10;
    value %= 10;
    count += value/5;
    value %= 5;
    count += value/1;

    cout<<count;
    return 0;
}
