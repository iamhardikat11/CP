import java.util.*;
public class Variable_Length_Code {
    public static String solve(String s)
    {
        int multi = (int) Math.pow(2,7);
        int num = 0;
        for(int i=0;i<s.length();i++)
        {
            num+=Integer.parseInt(s.substring(i,i+1))*multi;
            multi/=2;
        }
        StringBuilder n = new StringBuilder();
        if(num < 10)
            return "0"+ num;
        while(num!=0)
        {
            switch (num%16)
            {
                case 10-> n.append('A');
                case 11-> n.append('B');
                case 12-> n.append('C');
                case 13-> n.append('D');
                case 14-> n.append('E');
                case 15-> n.append('F');
                default -> n.append(num%16);
            }
            num = num/16;
        }
        return (n.reverse().toString().length()!=1)?n.toString():("0"+ n);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        StringBuilder s_ = new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            switch (s.charAt(i))
            {
                case ' '-> s_.append("11");
                case 'e'-> s_.append("101");
                case 't'-> s_.append("1001");
                case 'o'-> s_.append("10001");
                case 'n'-> s_.append("10000");
                case 'a'-> s_.append("011");
                case 's'-> s_.append("0101");
                case 'i'-> s_.append("01001");
                case 'r'-> s_.append("01000");
                case 'h'-> s_.append("0011");
                case 'd'-> s_.append("00101");
                case 'l'-> s_.append("001001");
                case '!'-> s_.append("001000");
                case 'u'-> s_.append("00011");
                case 'c'-> s_.append("000101");
                case 'f'-> s_.append("000100");
                case 'm'-> s_.append("000011");
                case 'p'-> s_.append("0000101");
                case 'g'-> s_.append("0000100");
                case 'w'-> s_.append("0000011");
                case 'b'-> s_.append("0000010");
                case 'y'-> s_.append("0000001");
                case 'v'-> s_.append("00000001");
                case 'j'-> s_.append("000000001");
                case 'k'-> s_.append("0000000001");
                case 'x'-> s_.append("00000000001");
                case 'q'-> s_.append("000000000001");
                case 'z'-> s_.append("000000000000");
            }
        }
        if(s_.length()%8!=0)
            s_.append("0".repeat(8-s_.length()%8));
        String n = s_.toString();
        for(int i=0;i<n.length();i+=8)
            System.out.print(solve(n.substring(i,i+8))+" ");

    }
}
