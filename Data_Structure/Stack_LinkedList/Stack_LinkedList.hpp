//
//  Stack_LinkedList.hpp
//  Linked List 로 스택 구현하기
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#ifndef Stack_LinkedList_hpp
#define Stack_LinkedList_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

class Stack_LinkedList{
public:
    node* head;
    node* tail;
    node* current;
    int count;
    
    Stack_LinkedList();
    void push_back(int n);
    void push_front(int n);
    void size();
    void top();
    void pop_back();
    void pop_front();
};

#endif /* Stack_LinkedList_hpp */
