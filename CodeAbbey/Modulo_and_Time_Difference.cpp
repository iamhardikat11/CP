//Link:-https://www.codeabbey.com/index/task_view/modulo-and-time-difference
#include <iostream>
using namespace std;
struct date
{
    int day,hour,minute,second;
};
typedef struct date date;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      date day1,day2;
      cin>>day1.day>>day1.hour>>day1.minute>>day1.second;
      cin>>day2.day>>day2.hour>>day2.minute>>day2.second;
      date result;
      result.day=day2.day-day1.day;
      result.hour=day2.hour-day1.hour;
      result.minute=day2.minute-day1.minute;
      result.second=day2.second-day1.second;
      if(result.second<0)
      {
          result.minute--;
          result.second+=60;
      }
      if(result.minute<0)
      {
          result.hour--;
          result.minute+=60;
      }
      if(result.hour<0)
      {
          result.day--;
          result.hour+=24;
      }
      cout<<"("<<result.day<<" "<<result.hour<<" "<<result.minute<<" "<<result.second<<") ";
  }
  return 0;
}
