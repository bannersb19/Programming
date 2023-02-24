import java.util.*;
public class time1
{
    
    public static int findAngle(int hh, int mm)
    {
        
        hh = hh % 12;

        int h = (hh * 360) / 12 + (mm * 360) / (12 * 60);
 
        
        int m = (mm * 360) / (60);
 
        
        int angle = Math.abs(h - m);
 
        
        if (angle > 180) {
            angle = 360 - angle;
        }
 
        return angle;
    }
 
   
    public static void main(String[] args)
    {
        Scanner sc = new Scanner (System.in);
        int hour=0;
        int minute=0;
        hour=sc.nextInt();
        minute=sc.nextInt();
 
        System.out.println(findAngle(hour, minute));
    }
}
