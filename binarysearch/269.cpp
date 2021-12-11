int solve(string s)
{
    int c = 0;
    int pow = 1;
    for(int i = s.length()-1;i>=0;i--)
    {
        c += pow*(s.at(i)-48);
        pow *=3;
    }
    return c;
}
