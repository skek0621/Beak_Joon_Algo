//
//  Baek_Joon_1018.cpp
//
//  Created by Cha Hyun Min on 2019. 4. 5..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

char white[8][8] = {
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}
};

char black[8][8] = {
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}
};

int main()
{
    int n,m;
    cin>>n>>m;
    
    //하얀, 검정 이랑 비교했을때 색칠 하는 체스판 수
    int count_w = 0;
    int count_b = 0;
    //검정이랑 하얀색이랑 비교해서 더 작은 값
    int win=0;
    //최솟값
    int min=64;
    
    char** arr = new char*[n];
    for(int i=0; i<n; i++){
        arr[i] = new char[m];
    }
    //체스판 입력
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }
    
    // 8x8 로 쪼개서 정답이랑 비교하고 색칠해야 하는 개수 세기
    // 하얀색이랑 비교한거랑 검정색이랑 비교한것 중에 작은애가 다시 min 이랑 비교되기
    for(int i=0; i<n-7; i++){
        for(int j=0; j<m-7; j++){
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    if(arr[i+k][j+l] != white[k][l])count_w++;
                    if(arr[i+k][j+l] != black[k][l])count_b++;
                }
            }
            if(count_b < count_w) win = count_b;
            else win = count_w;
            if(win < min) min = win;
            count_w = 0;
            count_b = 0;
        }
    }
    cout<<min;
    
    return 0;
}
