//20190208
//BaekJoon if문사용해보기 4344번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //테스트 케이스 개수
    int number;
    cin>>number;
    
    //총합을 저장할 변수
    int sum;
    //평균 넘는 애들 몇명인지 세는 변수
    int count;
    int* a=NULL;
    //평균 잠시 저장할 변수
    double average;
    //테스트 케이스들의 평균 넘는 퍼센트를 저장할 double 동적 배열
    double* percent = new double[number];
    
    //테스트 케이스 개수만큼 반복
    for(int i=0; i<number; i++){
        //총 합, 평균, 몇명인지 초기화
        sum=0;
        average=0;
        count=0;
        
        //테스트 케이스의 점수 몇개 들어올지 입력받고
        int num=0;
        cin>>num;
        
        //점수 입력받고 총합 구하기
        int* p = new int[num];
        a=p;
        for(int j=0; j<num; j++,a++){
            cin>>*a;
            sum += (*a);
        }
        average = sum /(double)num;
        
        //평균 넘는 애들 몇명인지 세기
        a=p;
        for(int j=0; j<num; j++,a++){
            if((*a) > average) count++;
        }
        percent[i] = (double)count / num * 100;
    }
    
    for(int i=0; i<number; i++) cout<<fixed<<setprecision(3)<<percent[i]<<"%"<<endl;
    
    return 0;
}
