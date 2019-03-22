//
//  Baek_Joon_11399.cpp
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
    int temp;
    //줄 서 있는 사람 수
    int n;
    cin>>n;
    vector<int> v;
    
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    //대기 시간 총 합
    int sum = 0;
    
    //정렬 된 순서에서 첫번째는 n 번 더해지고
    //두번째는 n-1 번 더해지기 때문에...
    for(int i=0; i<n; i++){
        sum += (n-i)*v[i];
    }
    
    cout<<sum;
    return 0;
}
