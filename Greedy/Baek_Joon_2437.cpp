//
//  Baek_Joon_2437.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 30..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //커버해야하는 무게
    int target = 1;
    
    //추의 개수
    int n;
    cin>>n;
    
    int* p = new int[n];
    
    for(int i=0; i<n; i++) cin>>p[i];
    
    sort(p, p+n);
    
    for(int i=0; i<n; i++){
        if(target < p[i]) break;
        target += p[i];
    }
    
    cout<<target;
    return 0;
}
