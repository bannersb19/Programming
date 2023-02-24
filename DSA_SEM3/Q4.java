import java.util.Scanner;

public class Q4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numCases = sc.nextInt();
        sc.nextLine(); 
        
        for (int i = 0; i < numCases; i++) {
            String statement = sc.nextLine();
        
          
            String cs = statement.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();

            
            if (isPalindrome(cs)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean isPalindrome(String s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s.charAt(i) != s.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}