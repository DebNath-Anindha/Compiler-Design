#include<bits/stdc++.h>
using namespace std;
int main()
{

    int count=0;
    int i,l;
    char a[20];
    cout<<"Please Enter the mathematical Expression"<<endl;
    cin>>a;

    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='('){
            count++;
           }

        else if(a[i]==')'){
            count--;
        }

        else
            if(a[i]=='*'||a[i]=='/'||a[i]=='+'||a[i]=='-')
        {
            if(a[i-1]>47&&a[i-1]<58&&a[i+1]>47&&a[i+1]<58)
            {
                continue;
            }
            else break;
        }
    }
    if(count==0&&i==l) cout<<"The input is parenthesize"<<endl;
    else cout<<"The input is not parenthesize"<<endl;
}
