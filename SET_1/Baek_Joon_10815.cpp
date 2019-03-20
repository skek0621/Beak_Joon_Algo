//
//  Baek_Joon_10815.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int temp;
    
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    int m;
    cin>>m;
    int* p = new int[m];
    
    for(int i=0; i<m; i++){;
        cin>>temp;
        if (binary_search(v.begin(), v.end(), temp) == 0) p[i] = 0;
        else p[i] = 1;
    }
    
    for(int i=0; i<m; i++) cout<<p[i]<<" ";
}
