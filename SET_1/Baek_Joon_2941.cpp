//
//  Baek_Joon_2941.cpp
//
//  Created by Cha Hyun Min on 2019. 4. 5..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string input;
    cin>>input;
    int count = 0;
    
    for(int i=0; i<input.length(); i++){
        // c-, c= 인 경우
        if(input[i] == 'c'){
            if(input[i+1] == '-' || input[i+1] == '='){
                count ++;
                i++;
            }
            else count++;
        }
        // dz= , d- 인 경우
        else if(input[i] == 'd'){
            if(input[i+1] == '-'){
                count++;
                i++;
            }
            else if(input[i+1] == 'z' && input[i+2] == '='){
                count++;
                i += 2;
            }
            else {
                count++;
            }
        }
        // lj 인 경우
        else if(input[i] == 'l'){
            if(input[i+1] == 'j'){
                count++;
                i++;
            }
            else count++;
            
        }
        // nj 인 경우
        else if(input[i] == 'n'){
            if(input[i+1] == 'j'){
               count++;
               i++;
            }
            else count++;
        }
        // s= 인 경우
        else if(input[i] == 's'){
            if(input[i+1] == '='){
                count++;
                i++;
            }
            else count++;
            
        }
        // z= 인 경우
        else if(input[i] == 'z'){
            if(input[i+1] == '='){
                count++;
                i++;
            }
            else count++;
        }else count++;
    }
    
    cout<<count;
    
    return 0;
}
