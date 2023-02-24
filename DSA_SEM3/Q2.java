import java.util.*;

public class Q2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = 0;
		T = sc.nextInt();
		for (int i = 0; i < T; i++) {
			int A = 0, B = 0, C = 0, D = 0;
			A = sc.nextInt();
			B = sc.nextInt();
			C = sc.nextInt();
			D = sc.nextInt();

			if (A < (B + C + D)) {
				if ((B + C) > D) {
					if ((A < (B + D)) || (A < (C + D))) {
						System.out.println("2");
					}

					else {
						System.out.println("1");
					}
				}
			} else
				System.out.println("0");

		}
	}
}