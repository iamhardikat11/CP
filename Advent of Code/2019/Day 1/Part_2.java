/*
--- Part Two ---
During the second Go / No Go poll, the Elf in charge of the Rocket Equation Double-Checker stops the launch sequence. Apparently, you forgot to include additional fuel for the fuel you just added.

Fuel itself requires fuel just like a module - take its mass, divide by three, round down, and subtract 2. However, that fuel also requires fuel, and that fuel requires fuel, and so on. Any mass that would require negative fuel should instead be treated as if it requires zero fuel; the remaining mass, if any, is instead handled by wishing really hard, which has no mass and is outside the scope of this calculation.

So, for each module mass, calculate its fuel and add it to the total. Then, treat the fuel amount you just calculated as the input mass and repeat the process, continuing until a fuel requirement is zero or negative. For example:

A module of mass 14 requires 2 fuel. This fuel requires no further fuel (2 divided by 3 and rounded down is 0, which would call for a negative fuel), so the total fuel required is still just 2.
At first, a module of mass 1969 requires 654 fuel. Then, this fuel requires 216 more fuel (654 / 3 - 2). 216 then requires 70 more fuel, which requires 21 fuel, which requires 5 fuel, which requires no further fuel. So, the total fuel required for a module of mass 1969 is 654 + 216 + 70 + 21 + 5 = 966.
The fuel required by a module of mass 100756 and its fuel is: 33583 + 11192 + 3728 + 1240 + 411 + 135 + 43 + 12 + 2 = 50346.
What is the sum of the fuel requirements for all of the modules on your spacecraft when also taking into account the mass of the added fuel? (Calculate the fuel requirements for each module separately, then add them all up at the end.)
*/
/*
Input:-
102480
121446
118935
54155
102510
142419
73274
57571
123916
99176
143124
141318
72224
145479
97027
126427
94990
100521
105589
123009
77143
142861
92366
66478
102195
128373
128447
120178
99122
98671
89541
125720
107984
126544
145231
110241
123926
72793
76705
128338
74262
68845
65297
112536
59892
57115
73230
80569
146118
108843
59221
140492
122616
140652
64404
99782
104375
86926
143145
114969
108948
77236
143655
71406
97588
64892
105345
104393
93442
54525
94116
123606
106813
59904
149253
81620
80892
66309
142604
97984
79743
79448
123756
64927
139703
71448
135964
86083
94767
116856
73786
141083
122581
82239
122282
96092
80029
52957
72062
52124
0
*/
import java.io.*;
import java.util.*;
import java.lang.*;
public class Main {
    public static int solve(int N)
    {
        int sum = 0;
        while(N>=9)
        {
          sum += (N/3-2);
          N = N/3-2;
        }
        return sum;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        long sum = 0;
        while(N!=0)
        {
            sum += (N/3-2)+solve(N/3-2);
            N = sc.nextInt();
        }
        System.out.println(sum);
    }
}
// Answer:-5018888
