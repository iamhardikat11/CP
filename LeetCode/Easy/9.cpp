class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long int m=x;
        long int rev=0;
        while(x!=0)
        {
            int r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        return (m==rev);
    }
};
