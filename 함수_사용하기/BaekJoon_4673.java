//2019.02.09
//함수 사용해보기 4673번 문제
//성신여자대학교 IT학부 차현민

public class BaekJoon_4673 {
    //숫자 n 과 각 자릿수의 합을 구하는 함수
    public static int selfNumber(int i){
        int sum=0;

        int num=i;

        if(i<10){
            sum = i+i;
        }
        else if(i < 100){
            int ten = i / 10;
            int one = i % 10;
            sum = i + ten + one;
        }
        else if(i<1000){
            int hun = num/100;
            num = num - hun*100;
            int ten = num/10;
            int one = num%10;
            sum = i + hun + ten + one;
        }
        else {
            int tho = num / 1000;
            num = num - tho*1000;
            int hun = num / 100;
            num = num - hun*100;
            int ten = num/10;
            int one = num%10;
            sum = i+tho+hun+ten+one;
        }
        if(sum>10000) return 0;
        else return sum;
    }

    public static void main(String[] args) {
        int[] arr = new int[10001];

        for(int i=0; i<10001; i++) arr[i] = 0;

        //1부터 10000까지 각 자리수와 자기자신을 더해 만들어진 수는 selfNumber가 아니니 1을 넣음
        for (int i = 1; i < 10001; i++) {
            int newer = selfNumber(i);
            arr[newer] = 1;
        }

        //배열을 1부터 돌면서 selfNumber만 출력
        //배열 값이 0 이면 selfNumber임
        for(int i=1; i<10001; i++){
            if(arr[i] == 0) System.out.println(i);
        }
    }
}
