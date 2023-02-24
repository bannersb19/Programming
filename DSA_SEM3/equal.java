import java.util.Scanner;

public class equal {
    public static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i < num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    public static int canMakeEqual(int x, int y) {
        if (x == y)
            return 1;
        if (x < y || x - y <= 1)
            return 0;
        int diff = x - y;
        return isPrime(diff) ? 1 : 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of test cases N: ");
        int n = sc.nextInt();
        while (n-- > 0) {
            System.out.print("Enter two integers X and Y: ");
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(canMakeEqual(x, y));
        }
    }
}