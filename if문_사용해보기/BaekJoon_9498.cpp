//20190207
//BaekJoon if문사용해보기 9498번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
using namespace std;

int main(){
   int input=0;
   cin>>input;

   if(input >= 90) cout<<"A";
   else if(input >=80) cout<<"B";
   else if(input >=70) cout<<"C";
   else if(input >=60) cout<<"D";
   else cout <<"F";

   return 0;
}
