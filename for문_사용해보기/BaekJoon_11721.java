//BaekJoon for문사용해보기 11721번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BaekJoon_11721 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        int cycle = input.length() / 10;

        for (int i = 0; i < cycle; i++) {
            System.out.println(input.substring(i*10, (i*10)+10));
        }
        System.out.println(input.substring(cycle*10));

    }
}
