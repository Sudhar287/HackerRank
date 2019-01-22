import java.util.*;
import java.io.*;
import java.lang.Math;

class solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int compu = a;
            for (int j=0;j<n;j++){
            compu = compu + ((int)Math.pow(2,j)*b);
            System.out.print(compu+" ");
            }
            System.out.println();
        }
        
    }
}