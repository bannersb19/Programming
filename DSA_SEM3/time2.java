import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class time2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        String[] timeArray = time.split(":");
        int hour = Integer.parseInt(timeArray[0]);
        int minute = Integer.parseInt(timeArray[1]);
        if(hour>=0 && hour<=12 && minute>=0 && minute<=59){
            int hourAngle = (int) (0.5 * (hour * 60 + minute));
            int minuteAngle = 6 * minute;
            int angle = Math.abs(hourAngle - minuteAngle);
            System.out.println(angle > 180 ? 360 - angle : angle);
        }
        else{
            System.out.println("-1");
        }
    }
}