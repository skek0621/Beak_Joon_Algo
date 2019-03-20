//
//  Baek_Joon_1920.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 9..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    //현재 입력받은 값
    int temp;
    //첫번째 배열 저장
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(binary_search(v.begin(),v.end(),temp)) cout<<"1\n";
        else cout<<"0\n";
    }

    return 0;
}
