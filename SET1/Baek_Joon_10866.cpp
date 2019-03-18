//
//  Baek_Joon_10866.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    //명령어 개수
    int n;
    cin>>n;
    
    string op;
    deque<int> d;
    
    int temp;
    
    for(int i=0; i<n; i++){
        cin>>op;
        if(op == "push_front"){
            cin>>temp;
            d.push_front(temp);
        }else if(op == "push_back"){
            cin>>temp;
            d.push_back(temp);
        }else if(op=="pop_front"){
            if(d.size()==0) cout<<-1<<endl;
            else {
                cout<<d.front()<<endl;
                d.pop_front();
            }
        }else if(op=="pop_back"){
            if(d.size()==0) cout<<-1<<endl;
            else {
                cout<<d.back()<<endl;
                d.pop_back();
            }
        }else if(op=="size"){
            cout<<d.size()<<endl;
        }else if(op=="empty"){
            if(d.size()==0) cout<<1<<endl;
            else cout<<0<<endl;
        }else if(op == "front"){
            if(d.size()==0) cout<<-1<<endl;
            else cout<<d.front()<<endl;
        }else if(op == "back"){
            if(d.size()==0) cout<<-1<<endl;
            else cout<<d.back()<<endl;
        }
        
    }
    
    return 0;
}
