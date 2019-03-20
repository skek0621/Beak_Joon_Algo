//20190209
//BaekJoon if문사용해보기 1110번 문제
//성신여자대학교 IT학부 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

//숫자 조합해서 리턴하는 함수
int combination(int* p){
    int number = *p;
    int ten = number/10;
    int one = number - (ten*10);
    int sum = ten + one;
    //합이 10보다 작으면 일의자리만 리턴
    if(sum < 10){
        *p = one*10 +sum;
        return *p;
    }
    //합이 10보다크면 일의자리와 십의자리 조합해서 리턴
    else {
        *p = one*10 + (sum-10);
        return *p;
    }
}

int main(){
    int number;
    cin>>number;
    
    int* p = new int;
    *p = number;
    int cycle = 0;
    
    do{
        cycle++;
    }while(combination(p) != number);
    
    cout<<cycle;
    return 0;
}

