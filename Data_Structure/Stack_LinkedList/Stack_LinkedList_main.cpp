//
//  Stack_LinkedList_main.cpp
//  Linked List 로 스택 구현하기
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include "Stack_LinkedList.hpp"
using namespace std;

int main(){
    
    Stack_LinkedList st;
    st.push_back(3);
    st.push_back(5);
    st.push_front(1);
    st.size();          //3
    st.top();           //5
    st.pop_back();      //5
    st.top();           //3
    st.pop_front();     //1
    st.size();          //1
    st.top();           //3
}

