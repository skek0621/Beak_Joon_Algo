//20190130
//BaekJoon 입출력 받아보기 11719번 문제
//성신여자대학교 IT학부 차현민

#include <iostream>
#include <string>
using namespace std;

int main() {
    string string;
    
    for(int i=0; i<100 && !cin.eof(); i++){
        getline(cin, string);
        cout<<string<<endl;
    }
    return 0;
}
