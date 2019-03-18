//
//  Baek_Joon_10828.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    stack<int> stack;
    //명령어 개수
    int n;
    cin>>n;
   //명령어
    string input;
    //입력받을 숫자
    int temp;
    
    for(int i=0; i<n; i++){
        cin>>input;
        if(input == "push") {
            cin>>temp;
            stack.push(temp);
        }
        else if(input == "top") {
            if(stack.size() == 0) cout<<-1<<endl;
            else cout<<stack.top()<<endl;
        }
        else if(input == "size") cout<<stack.size()<<endl;
        else if(input == "empty") cout<<stack.empty()<<endl;
        else {
            if(stack.size() == 0) cout<<-1<<endl;
            else {
                cout<<stack.top()<<endl;
                stack.pop();
            }
        }
    }
    return 0;
}
