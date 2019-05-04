//
//  Baek_Joon_11729.cpp
//  하노이 타워 이동 순서
//
//  Created by Cha Hyun Min on 2019. 5. 4..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int cnt = 0;
string output;

void hanoi(int n, int start, int target, int assist){
    cnt++;
    if(n==1){
        output+=to_string(start)+" "+to_string(target)+"\n";
    }
    else{
        hanoi(n-1, start, assist, target);
        output+=to_string(start)+" "+to_string(target)+"\n";
        hanoi(n-1, assist, target, start);
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    hanoi(n, 1, 3, 2);
    cout<<cnt<<endl;
    cout<<output;
    
    return 0;
}
