//
//  Baek_Joon_1436.cpp
//  영화감독 숌
//
//  Created by Cha Hyun Min on 2019. 5. 4..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int nth;
    cin>>nth;
    
    // 찾은 종말의 수 개수
    int count=0;
    
    int i;
    
    for(i=0; count <= nth; i++){
        if(i==666) count++;
        if(to_string(i).find("666") != string::npos) {
            count++;
        }
    }
    
    cout<<--i;
    return 0;
}
