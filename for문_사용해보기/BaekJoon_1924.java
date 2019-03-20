//20190206
//BaekJoon for문사용해보기 1924번 문제
//성신여자대학교 IT학부 차현민

import java.util.Scanner;

public class BackJoon_1924 {

    public static int calcDays(int month) {
        switch (month) {
            case 2: return 28;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: return 31;
            case 4:
            case 6:
            case 9:
            case 11: return 30;
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int month = in.nextInt();
        int day = in.nextInt();
        int count = 0;

        if(month != 1) {
            for (int i = 1; i < month; i++) {
                count += calcDays(i);
            }
        }
        count = count + day;

        switch (count % 7) {
            case 0: {
                System.out.println("SUN");
                break;
            }
            case 1: {
                System.out.println("MON");
                break;
            }
            case 2: {
                System.out.println("TUE");
                break;
        }
            case 3: {
                System.out.println("WED");
                break;
            }
            case 4: {
                System.out.println("THU");
                break;
            }
            case 5: {
                System.out.println("FRI");
                break;
            }
            case 6: {
                System.out.println("SAT");
                break;
            }
        }
    }


}
