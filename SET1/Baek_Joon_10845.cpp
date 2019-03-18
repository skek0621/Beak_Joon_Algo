//
//  Baek_Joon_10845.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    string op;
    queue<int> q;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>op;
        if(op == "push"){
            int temp;
            cin>>temp;
            q.push(temp);
        }else if(op == "pop"){
            if(q.size() == 0) cout<<-1<<endl;
            else {cout<<q.front()<<endl;
                q.pop();
            }
        }else if(op == "size"){
            if(q.size()==0) cout<<0<<endl;
            else cout<<q.size()<<endl;
        }else if(op == "empty"){
            cout<<q.empty()<<endl;
        }else if(op == "front"){
            if(q.size()==0) cout<<-1<<endl;
            else cout<<q.front()<<endl;
        }else if(op == "back"){
            if(q.size()==0) cout<<-1<<endl;
            else cout<<q.back()<<endl;
        }
    }
    return 0;
}
