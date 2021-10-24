//Link:-https://www.codeabbey.com/index/task_view/body-mass-index
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w;
        float h;
        cin>>w>>h;
        float BMI=w/(h*h);
        if(BMI<18.5)
         cout<<"under ";
        else if(BMI>=18.5 && BMI<25)
         cout<<"normal ";
        else if(BMI>=25.0 && BMI<30.0)
         cout<<"over ";
        else
         cout<<"obese ";
    }
    return 0;
}
