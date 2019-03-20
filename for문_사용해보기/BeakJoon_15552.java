//BaekJoon for문사용해보기 15552번 문제
//성신여자대학교 IT학부 차현민

import java.io.*;
import java.util.StringTokenizer;

public class BeakJoon_15552 {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = null;

        int n=0;
        int a = 0;
        int b = 0;

        try{
            n = Integer.parseInt(br.readLine());
        }
        catch (NumberFormatException | IOException e){
            e.printStackTrace();
        }

        try {
            for (int i = 0; i < n; i++) {
                String s = br.readLine();
                st = new StringTokenizer(s);
                a = Integer.parseInt(st.nextToken());
                b = Integer.parseInt(st.nextToken());
                bw.write(a + b + "\n");

            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        try {
            bw.flush();
            bw.close();
        } catch (IOException e) {

        }

    }
}
