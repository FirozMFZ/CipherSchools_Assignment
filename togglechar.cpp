#include<bits/stdc++.h>
using namespace std;

void togglechars(char str[])
{
    for ( int i = 0;str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z') 
            str[i]=str[i]+'a'-'A';
            else if(str[i]='a' && str[i]<='z')
                str[i]=str[i]+'A'-'a';

    }
    
}
int main()
{
    char str[]="ProGraMMer";
    togglechars(str);
    cout<<"after"<<endl;
    cout<<str<<endl;
    return 0;
}