//
//  Baek_Joon_2751.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 11..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    vector<int> v;
    int n;
    int temp;
    
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++) cout<<v[i]<<"\n";
    
    return 0;
}
