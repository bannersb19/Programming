import java.util.Scanner;

public class equal1 {
    static boolean isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }

    public static int canMakeEqual(int x, int y) {
        if (x == y)
            return 1;
        if (x < y || x - y <= 1)
            return 0;
        int diff = x - y;
        return isPrime(diff) ? 0 : 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {

                int x = sc.nextInt();
                int y = sc.nextInt();
                System.out.println(canMakeEqual(x, y));

        }
    }
}