import java.lang.*;
import java.io.*;
import java.math.BigDecimal;
import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        BigDecimal a = new BigDecimal("0.0");
        System.out.println("I=0 J=1");
        System.out.println("I=0 J=2");
        System.out.println("I=0 J=3");
        a = a.add(new BigDecimal("0.2"));
        for(;a.compareTo(new BigDecimal("1.0"))<0;a = a.add(new BigDecimal("0.2")))
        {
            for(BigDecimal b = new BigDecimal("1.0");b.compareTo(new BigDecimal("3.0"))<=0;b = b.add(new BigDecimal("1.0")))
              System.out.println("I="+a+" J="+a.add(b));
        }
        System.out.println("I=1 J=2");
        System.out.println("I=1 J=3");
        System.out.println("I=1 J=4");
        a = a.add(new BigDecimal("0.2"));
        for(;a.compareTo(new BigDecimal("2.0"))<0;a = a.add(new BigDecimal("0.2")))
        {
            for(BigDecimal b = new BigDecimal("1.0");b.compareTo(new BigDecimal("3.0"))<=0;b = b.add(new BigDecimal("1.0")))
                System.out.println("I="+a+" J="+a.add(b));
        }
        System.out.println("I=2 J=3");
        System.out.println("I=2 J=4");
        System.out.println("I=2 J=5");
    }
}
