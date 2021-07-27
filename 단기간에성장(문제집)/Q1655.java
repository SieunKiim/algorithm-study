import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Q1655 {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            int N = Integer.parseInt(br.readLine());
            int[] arr = new int[N];
            for (int i = 0; i < N; i++) {
                try {
                    int num = Integer.parseInt(br.readLine());
                    arr[i] = num;
                    for (int k = 0; k < i; k++) {
                        if (arr[k] >= num) {
                            int temp = arr[k];
                            arr[k] = num;
                            arr[k + 1] = temp;
                        }
                    }

                } catch (IOException exception) {
                    System.out.print("wrong2");
                }

            }

            for (int i = 0; i < N; i++) {
                System.out.print(arr[i] + " ");
            }

        } catch (IOException exception) {
            System.out.print("wrong1");
        }

    }
}
