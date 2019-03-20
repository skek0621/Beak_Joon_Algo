//BaekJoon for문사용해보기 8393번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BackJoon_8393 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int input = in.nextInt();
        int sum = 0;

        for (int i = 1; i <= input; i++) {
            sum += i;
        }
        System.out.println(sum);
    }
}
