//wap to find the root of any polinomial equation using bisection method correct upto 3 decimal places.

#include <bits/stdc++.h>

using namespace std;
double solution(double x)
{
    return x*x*x - 4*x - 9;
}
int ibt(double a,double x,double b)
{
    if((solution(a)*solution(x)) <0 )
    {
        return 1;
    }
    else if((solution(x) *solution(b)) <0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
        double temp=solution(0);
        double a;
        double b;
        cout<<" iteration 1 the value is: "<<temp<<endl;
    //bisection
    // find the solution for any arbitary expression using bisection method
    for(double i=1;i<200;i++)
    {

        double iter_value=solution(i);
        cout<<"iteration -"<<i<<" the value is: "<<iter_value<<endl;
        if((temp<0 && iter_value >0) || (temp>0 && iter_value<0))
        {
            a=temp;
            b=iter_value;
            break;
        }
        else
        {
            temp=iter_value;
        }




    }
    cout<<"value of a is :"<<a<<" "<<"the value of b is :" <<b<<endl;

    double x=(a+b)/2;


    //  cout<<x<<endl;
    while((x-a) >= 0.0001 || (x-b) >= 0.0001)
    {

        int check_ibt=ibt(a,x,b);
         if(check_ibt == 1)
            {
                 b=x;
                 cout<<"the new interval is : "<<'('<< a <<"-"<<b<<")"<<endl;
            }
        else if(check_ibt == 0 )
            {
                 a=x;
                 cout<<"the new interval is : "<<'('<< a <<"-"<<b<<")"<<endl;
            }
            x=(a+b)/2;

    }
    cout<<"the answer is : "<<x<<endl;


    return 0;
}
