//
//  Baek_Joon_1107.cpp
//
//  Created by Cha Hyun Min on 2019. 5. 4..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int number[10] = {1,1,1,1,1,1,1,1,1,1};

// 해당 채널이 숫자버튼으로 갈 수 있는 채널인지 체크
bool check(int num){
    
    //0인경우 고려하기 -> 실패 원인이였음
    if(num == 0){
        if(number[0]==-1) return false;
    }
    
    // 목표 채널 번호중 고장난 버튼이 있으면 false 리턴
    while (num != 0) {
        int temp = num%10;
        num /= 10;
        if(number[temp] == -1) return false;
    }
    
    //무사히 다 통과하면 true 리턴
    return true;
}

//숫자버튼으로 갈 수 있는 가장 가까운 채널 구하기
int near_number(int target){
    
    int near=1000000;
    int diff;
    int min_diff=500000;
    
    // 100만개를 돌면서 갈 수 있는 채널인지(고장 안난 버튼으로만 이루어진 채널) 확인하고,
    // 그중 차이가 제일 작은 채널(가장 가까운 채널) 구하기
    for(int i=0; i<1000000; i++){
        if (check(i)){
            diff = abs(target-i);
            if(diff<min_diff){
                min_diff = diff;
                near = i;
            }
        }
    }
    
    return near;
}


int main()
{
    //목표 채널
    int target;
    cin>>target;

    //고장난 버튼 개수
    int broken;
    cin>>broken;

    //고장난 버튼은 배열에서 -1로 처리하기
    for(int i=0; i<broken; i++){
        int temp;
        cin>>temp;
        number[temp] = -1;
    }

    //현재 위치
    int now= 100;
    // 플러스 마이너스 버튼으로만 이동한 횟수
    int PM_count = abs(target-now);

    // 플러스 마이너스 버튼 및 숫자버튼으로 이동한 횟수
    int BTN_count;

    //숫자 버튼으로 갈 수 있는 가장 근접한 채널 번호구하기
    int near = near_number(target);
    
    // 가장 가까운 채널을 누르는 횟수
    BTN_count =(int)(to_string(near).size());
    // 가장 가까운 채널에서 +- 로 이동하기
    BTN_count += abs(target-near);

    // 더 작은거 출력
    if(PM_count<BTN_count) cout<<PM_count;
    else cout <<BTN_count;

    return 0;
}
