//20190203
//BaekJoon 4칙연산 도전하기 2839번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
using namespace std;

int main() {
    int count=0;
    int threeThing=0;
    int input;
    
    cin>>input;
    
    //입력값이 4거나 1,2 이면 성립할 수 없으니 -1 리턴
    if(input==4 || input<3){
        count = -1;
    }
    //입력값이 3의 배수이면서 5의 배수면 5로 나눈값 출력
    else if(input%5==0) count = input/5;
    //계산이 필요한 숫자일때
    else{
        //3의 배수면 일단 저장하고
        if(input%3==0) threeThing = input;
        //5씩 빼면서 카운트 세는데 대신 5를 빼고 남은 값이 4나 7이면 멈춤
        //왜냐면 4랑7은 안됨...
        while(input >3){
            input -= 5;
            if(input>=3 && input!=4 && input !=7)count++;
            if(input%3==0) threeThing = input;
        }
        count = count+(threeThing/3);
    }
    if(count==0) cout<<-1;
    else cout<<count;
    
    return 0;
}
