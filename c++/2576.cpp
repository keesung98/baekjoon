#include <iostream>

using namespace std;

int main()
{
    int n,sum,non_even;
    sum=0;
    non_even=100;

    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        if (n%2==1)
        {
            sum+=n;
            if (non_even>n)
            {
                non_even=n;
            }
        }
        
    }
    if (sum==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<sum<<endl<<non_even;
    }
    
}