//BaekJoon for문사용해보기 2739번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BackJoon_2739 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int input = in.nextInt();

        for(int i=1; i<10; i++){
            System.out.println(input +" * "+i+" = "+ (input*i));
        }
    }
}
