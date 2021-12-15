void reduce(int* n,int ch)
{
    while(*n%ch==0)
     *n = *n/ch;
}
bool solve(int n) 
{
    if(n==0)
     return false;
    reduce(&n,2);
    reduce(&n,3);
    reduce(&n,5);
    return n==1;
}
