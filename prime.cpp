#include<bits/stdc++.h>
using namespace std;

int main()
{
    int low, high, i;
    bool isprime = true;
    cout<<"low: ";
    cin>>low;
    cout<<"\nhigh: ";
    cin>>high;
    while (low<high)
    {
        isprime=true;
        if (low==0||low==1)
        {
            isprime=false;
        }
        else
        {
            for ( i = 2; i <= low/2; ++i)
            {
                if (low%i==0)
                {
                    isprime=false;
                    break;
                }
            }
        }
        if (isprime)
        {
            cout<<low<<"\n ";
        }
        ++low;   
    }
    return 0;
}