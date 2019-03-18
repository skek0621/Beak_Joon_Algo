//
//  Stack_LinkedList.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 18..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include "Stack_LinkedList.hpp"

Stack_LinkedList::Stack_LinkedList(){
    head = NULL;
    tail = NULL;
    count = 0;
}

void Stack_LinkedList::push_back(int n)
{
    if(count==0){
        count++;
        node* p = new node;
        p->value = n;
        p->next = NULL;
        head = p;
        tail = p;
        
    } else{
        count++;
        node* p = new node;
        p->value = n;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
}

void Stack_LinkedList::push_front(int n){
    if(count == 0){
        count++;
        node* p = new node;
        p->value = n;
        p->next = NULL;
        head = p;
        tail = p;
    }
    else {
        count++;
        node* p = new node;
        p->value = n;
        p->next = head;
        head = p;
    }
}

void Stack_LinkedList::size() {
    cout << count<<endl;
}

void Stack_LinkedList::top() {
    if(count == 0) cout<<"데이터가 없습니다"<<endl;
    else cout<<tail->value<<endl;
}

void Stack_LinkedList::pop_back(){
    if(count==0) cout<<"데이터가 없습니다"<<endl;
    else if(count == 1){
        cout<<tail->value<<endl;
        count--;
        free(head);
        head = NULL;
        tail = NULL;
    }
    else {
        count--;
        //값 출력하고
        cout<<tail->value<<endl;
        node* temp = head;
        //temp 가 마지막에서 두번째를 가리키게 됨
        while (temp->next != tail){
            temp = temp->next;
        }
        //마지막 메모리 해제
        free(tail);
        //마지막에서 두번째 있던 애가 tail 됨
        tail = temp;
    }
}

void Stack_LinkedList::pop_front(){
    if(count==0) cout<<"데이터가 없습니다"<<endl;
    else if(count==1){
        count--;
        free(head);
        head=NULL;
        tail=NULL;
    }
    else {
        count--;
        cout<<head->value<<endl;
        node* temp = head;
        head = head->next;
        free(temp);
    }
}


