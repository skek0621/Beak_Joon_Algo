//20190207
//BaekJoon if문사용해보기 10817번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
using namespace std;

int main(){
   int num1, num2, num3;
   cin>>num1>>num2>>num3;

   if(num1 >= num2 && num1 >= num3){
       if(num2 >= num3) cout<<num2;
       else cout<<num3;
   }
   else if(num2 >= num1 && num2 >= num3){
       if(num1 >= num3) cout<<num1;
       else cout<<num3;
   }
   else {
       if(num1>=num2) cout<<num1;
       else cout<<num2;
   }

   return 0;
}
