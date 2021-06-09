#include<bits/stdc++.h>
using namespace std;

void firstnlast(int a[],int n,int b)
{
    int first=-1, last=-1;
    for (int i = 0; i < n; i++)
    {
        if  (b != a[i])
            continue;
        if  (first == -1)
            first = i;
        last = i;
    }
    if  (first != -1)
        cout<<"first occurance ="<<first<<"\nlast occurence ="<<last;
        else
            cout<<"not  found";
}
int main()
{
    int a[]={1, 3, 5, 5, 5, 5, 7, 123, 125};
    int n=sizeof(a)/sizeof(int);
    int b=7;
    firstnlast(a, n, b);
    return 0;
}
