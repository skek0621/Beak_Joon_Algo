//20190208
//BaekJoon if문사용해보기 1546번 문제
//성신여자대학교 IT학부 차현민


#include <iostream>
using namespace std;

int main(){
   //시험 과목수
   int number;
   cin>>number;

   //시험 점수 중 최대값 저장할 변수
   double max=0;
   //조작한 시험점수 합 저장할 변수
   double sum=0;

   double* arr = new double[number];
   double* p = arr;

   //동적배열 만들고 시험 점수 저장하기
   for(int i=0; i<number; i++, p++){
       cin>>*p;
   }
   

   //배열 돌면서 최대값 찾아서 max 에 넣기
   p=arr;
   for(int i=0; i<number; i++, p++){
       if(*p > max) max=*p;
   }

   //배열 돌면서 점수 조작하기
   p=arr;
   for(int i=0; i<number; i++, p++){
       *p = (*p)/max*100;
   }

   //시험점수 총 합 구하기
   p=arr;
   for(int i=0; i<number; i++, p++){
       sum += *p;
   }

   cout<<(double)sum/number;

   return 0;
}
