import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.InputStreamReader;

public class Baggage {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");

            int N = Integer.parseInt(st.nextToken()); // 물품의 수
            int K = Integer.parseInt(st.nextToken()); // 버틸 수 있는 무게

            int[] W = new int[N + 1]; // 무게
            int[] V = new int[N + 1]; // 가치
            int[] dp = new int[K + 1];

            for (int i = 1; i <= N; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                W[i] = Integer.parseInt(st.nextToken());
                V[i] = Integer.parseInt(st.nextToken());
            }

            for (int i = 1; i <= N; i++) {

                // K부터 탐색하여 담을 수 있는 무게 한계치가 넘지 않을 때까지 반복
                for (int j = K; j - W[i] >= 0; j--) {
                    dp[j] = Math.max(dp[j], dp[j - W[i]] + V[i]);
                }
            }
            System.out.println(dp[K]);
        } catch (Exception e) {

        }

    }
}
