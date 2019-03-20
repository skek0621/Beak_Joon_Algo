//20190207
//BaekJoon if문사용해보기 10871번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
using namespace std;

int main(){
   int number, criteria;
   cin>>number>>criteria;
   int* p = NULL;

   int* arr = new int[number];
   p = arr;

   for(int i=0; i<number; i++, p++){
       cin>>*p;
   }

   p = arr;
   for(int i=0; i<number; i++, p++){
       if(*p < criteria) cout<<*p<<" ";
   }

   return 0;
}
