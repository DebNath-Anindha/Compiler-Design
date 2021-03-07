#include<iostream>
#include<string.h>
using namespace std;

int count1=0, count2=0;

void String1(char ch)
{
    if (ch == 'a')
    {
        count1++;
    }
}
void String2(char ch)
{
    if (ch == 'b')
    {
        count2++;
    }
}

int main()
{
  char String[]={'A','B'};
  char input[100];
  char input2[100];

  cout<<"Enter the input: ";
  cin>>input;
  int i= strlen(input);

  for(i;i>=0;i--)
  {
      String1(input[i]);
      String2(input[i]);
  }
    cout<<"Enter the 2nd input: ";
  cin>> input2;{
  if(count1>=0&&count1<=1 && count2>=0&&count2<=1)

  {
      cout<<input<<"\n Can Be Derived";
  }
  else
  {
      cout<<input<<"Can not Derived";
  }
    }
}
