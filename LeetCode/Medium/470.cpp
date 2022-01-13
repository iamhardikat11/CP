// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() 
    {
        int a = (rand7()-1);
        int b = (rand7()-1);
        int c = (rand7()-1);
        int d = (rand7()-1);
        int tot = a+7*b+49*c+343*d;
            return tot%10+1;
    }
};
