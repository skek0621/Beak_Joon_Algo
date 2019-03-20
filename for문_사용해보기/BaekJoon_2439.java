//BaekJoon for문사용해보기 2439번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BackJoon_2439 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int input = in.nextInt();

        for (int i = 1; i <= input; i++) {
            for (int j = 0; j < input - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }
}
