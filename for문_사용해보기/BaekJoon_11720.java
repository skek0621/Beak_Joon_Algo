//BaekJoon for문사용해보기 11720번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BackJoon_11720 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int input = in.nextInt();
        String number = in.next();
        int sum = 0;

        for (int i = 0; i < input; i++) {
            sum += Integer.parseInt(number.substring(i,i+1));
        }
        System.out.println(sum);

    }
}
