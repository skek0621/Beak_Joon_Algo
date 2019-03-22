//
//  Baek_Joon_1138.cpp
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
    //사람 수
    int n;
    cin>>n;
    
    // 나보다 키큰애 몇명인지 입력 받을 수
    int input;
    
    int* p = new int[n];
    
    //0 으로 초기화
    for(int i=0; i<n; i++){
        p[i] = 0;
    }
    
    int count;
    
    for(int i=0; i<n; i++){
        count = 0;
        cin>>input;
        for(int j=0; j<n; j++){
            //자리가 비어있고 input 만큼 셌으면
            if(p[j] ==0 && count == input){
                p[j] = (i+1);
                break;
            }
            //0이여야 count 증가, 그 자리에 값이 들어있으면 다음칸으로 (j만 증가)
            if(p[j] == 0) count++;
        }
    }
    
    for(int i=0; i<n; i++) cout<<p[i]<<" ";
    
    return 0;
}
