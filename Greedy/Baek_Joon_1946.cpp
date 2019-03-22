//
//  Baek_Joon_1946.cpp
//  Greedy Algorithm
//
//  Created by Cha Hyun Min on 2019. 3. 23..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    
    //테스트케이스 개수
    int test_case;
    cin>>test_case;
    
    //지원자 수
    int people = 0;
    //합격할 지원자 수
    int result;
    
    int min;
    
    //서류, 면접
    int document, interview;
    for(int i=0; i<test_case; i++){
        v.clear();
        result = 0;
        cin>>people;
        min = people+1;
        //지원자의 서류순위, 면접순위 입력받아 벡터에 넣기
        for(int j=0; j<people; j++){
            cin>>document>>interview;
            v.push_back(make_pair(document, interview));
        }
        //오름차순으로 정렬 후
        sort(v.begin(), v.end());
        //서류면접점수가 낮다면 내 위에있는 애 등수 = min 보다는 높아야 내가 붙음
        //둘다 낮으면 떨어지니까
        //min 은 처음에 꼴등으로 = people+1
        for(int j=0; j<people; j++){
            if(v[j].second < min){
                min = v[j].second;
                result++;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
