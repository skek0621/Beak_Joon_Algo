//2019.02.09
//함수 사용해보기 1065번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BaekJoon_1065 {

    //한수 판단하는 함수
    public static boolean oneNumber(int i){
        int num = i;
        int d=0;

        if(i<100) return true;
        else if(i<1000){
            int hun = num/100;
            num = num - hun*100;
            int ten = num / 10;
            int one = num % 10;

            d = hun-ten;
            if(ten-one == d) return true;
            else return false;
        }
        else {
            int tho = num/1000;
            num = num - tho*1000;
            int hun = num/100;
            num = num - hun*100;
            int ten = num/10;
            int one = num%10;

            d=tho-hun;
            if(hun-ten == d && ten - one == d) return true;
            else return false;
        }

    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //입력받을 수
        int number = in.nextInt();
        //한수 셀 변수
        int count=0;

        for(int i=1; i<=number; i++){
            if(oneNumber(i)==true) count++;
        }
        System.out.println(count);

    }
}
