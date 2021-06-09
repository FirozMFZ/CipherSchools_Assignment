#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,sum=0,temp;    
    cout<<"Enter the Number=  ";    
    cin>>n;    
    temp=n;    
    while(n>0)    
        {    
            r=n%10;    
            sum=sum+(r*r*r);    
            n=n/10;    
        }    
    if(temp==sum)    
        cout<<"Yes"<<endl;    
    else    
        cout<<"No"<<endl;   
    return 0;  

    n=1253;
    cout<<"yes"<<endl;
    n=1634;
    cout<<"No"<<endl;
    return 0;
}