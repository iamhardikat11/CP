#include <iostream>
using namespace std;
class store
{
  public:
     int R,C;
     char **ch;
    store(int R, int C)
    {
        this->R = R;
        this->C = C;
        ch = (char **)malloc(R*sizeof(char *));
        for(int i=0;i<R;i++)
         ch[i] = (char *)malloc(C*sizeof(char));
    }
    char ** get_input()
    {
        for(int i=0;i<R;i++)
        {
            for(int j= 0; j < C;j++)
             cin >> ch[i][j];
        }
        return ch;
    }
    void print()
    {
      for(int i=0;i<R;i++)
      {
        for(int j= 0; j < C;j++)
            cout << ch[i][j];
        cout << endl;
      }  
    }
    char ** solve(char **s)
    {
      char **n;
      n = (char **)malloc(R*sizeof(char *));
      for(int i=0;i<R;i++)
       n[i] = (char *)malloc(C*sizeof(char));
      for(int i=R-1;i>=0;i--)
      {
          for(int j = C-1;j>=0;j--)
           n[R-1-i][C-1-j] = ch[i][j];
      } 
      return n;
    }
};
int main()
{
  int N,R,C;
  scanf("%d", &N);
  int i = 1;
  while(i<=N)
  {
    cin >> R >> C;
    store *v = new store(R,C);
    v.ch = get_input();
    v.ch = solve();
    cout<<"Test "<<i<<endl;
    print();
  }
  return 0;
}