import java.util.*;

public class Q1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = 0;
        n = sc.nextInt();
        int[] array = new int[100];
        int[] arr = new int[100];
        int k = 0;
        int count;
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            count = 0;
            for (int j = i+1; j < n; j++) {
                if (array[i] == array[j]) {
                    count = 1;
                    break;
                }
            }
            if (count == 0) {
                arr[k] = arr[i];
                k++;
            }
        }

        for (int l = 0; l < k; l++) {
            System.out.println(arr[l]);
        }
    }
}
