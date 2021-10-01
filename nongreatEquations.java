import java.util.*;
import java.math.*;

public class nongreatEquations{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        long b = sc.nextInt();
        // long int c = 100000000000000000000;
        long a = 1000000000;
        for(int i=0;i<a;++i)
        {
            for(int j=0;j<a;++j)
            {
                if(Math.pow(b,3)==Math.pow(i,2)-Math.pow(j,2))
                {
                    System.out.println(i +" " +j);
                    break ;
                }
            }
        }

    }
}