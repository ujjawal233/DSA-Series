#include <iostream>
using namespace std;
int main()
{
    int i;
    int es=0;
    int os=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            os +=i;
        }
        else{
            es+=i;
        }
    }
    int ans=os-es;
    cout<<"\nDifference between sum of odd numbers and sum of even numbers from 1 to 100 is: "<<ans<<endl;
}