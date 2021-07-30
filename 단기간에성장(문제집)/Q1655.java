import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;
import java.util.PriorityQueue;

public class Q1655 {
    // public static void main(String[] args) {
    // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    // try {
    // int N = Integer.parseInt(br.readLine());
    // int[] arr = new int[N];
    // for (int i = 0; i < N; i++) {
    // try {
    // int num = Integer.parseInt(br.readLine());
    // arr[i] = num;
    // // for (int k = 0; k < i; k++) {
    // // if (arr[k] >= num) {
    // // int temp = arr[k];
    // // arr[k] = num;
    // // arr[k + 1] = temp;
    // // }
    // // }

    // } catch (IOException exception) {
    // System.out.print("wrong2");
    // }

    // }

    // for (int i = 0; i < N; i++) {
    // System.out.print(arr[i] + " ");
    // }

    // } catch (IOException exception) {
    // System.out.print("wrong1");
    // }

    // }
    static int N;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(((o1, o2) -> o2 - o1));

        N = Integer.parseInt(br.readLine());

        for (int i = 0; i < N; i++) {
            // 입력 순서가 짝수인 경우 - 우선적으로 maxheap에 채움
            if (i % 2 == 0)
                maxHeap.add(Integer.parseInt(br.readLine()));
            // 입력순서가 홀수인 경우 - maxheap과 길이를 같게 만들기 위함
            else
                minHeap.offer(Integer.parseInt(br.readLine()));

            // maxheap의 최대값이 minheap의 최소값보다 크면 swap
            if (!maxHeap.isEmpty() && !minHeap.isEmpty()) {
                if (maxHeap.peek() > minHeap.peek()) {
                    int temp = maxHeap.poll();
                    maxHeap.offer(minHeap.poll());
                    minHeap.offer(temp);
                }
            }
            sb.append(maxHeap.peek()).append("\n");
        }
        System.out.println(sb.toString());
    }
}
