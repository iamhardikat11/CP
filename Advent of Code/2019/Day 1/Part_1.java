/*
--- Day 1: The Tyranny of the Rocket Equation ---
Santa has become stranded at the edge of the Solar System while delivering presents to other planets! To accurately calculate his position in space, safely align his warp drive, and return to Earth in time to save Christmas, he needs you to bring him measurements from fifty stars.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

The Elves quickly load you into a spacecraft and prepare to launch.

At the first Go / No Go poll, every Elf is Go until the Fuel Counter-Upper. They haven't determined the amount of fuel required yet.

Fuel required to launch a given module is based on its mass. Specifically, to find the fuel required for a module, take its mass, divide by three, round down, and subtract 2.

For example:

For a mass of 12, divide by 3 and round down to get 4, then subtract 2 to get 2.
For a mass of 14, dividing by 3 and rounding down still yields 4, so the fuel required is also 2.
For a mass of 1969, the fuel required is 654.
For a mass of 100756, the fuel required is 33583.
The Fuel Counter-Upper needs to know the total fuel requirement. To find it, individually calculate the fuel needed for the mass of each module (your puzzle input), then add together all the fuel values.

What is the sum of the fuel requirements for all of the modules on your spacecraft?
*/
/* Input:-
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
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        long sum = 0;
        while(N!=0)
        {
            sum += (N/3-2);
            N = sc.nextInt();
        }
        System.out.println(sum);
    }
}
/*
Answer:- 3347838
*/
