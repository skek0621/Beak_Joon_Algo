//
//  Baek_Joon_2752.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int index, min;
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<3; i++){
        min = 1000001;
        for(int j=i ;j<3; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    
    for(int i=0; i<3; i++) cout<<arr[i]<<" ";
    
    return 0;
}
