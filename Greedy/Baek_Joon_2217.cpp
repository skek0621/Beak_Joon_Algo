//
//  Baek_Joon_2217.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int temp;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    int max = 0;
    for(int i=0 ; i<n; i++){
        if(max < v[i] * (n-i)) max = v[i] * (n-i);
    }
    cout<<max;
 
    return 0;
}
