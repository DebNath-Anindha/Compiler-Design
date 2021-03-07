#include <iostream>

using namespace std;

int main()
{
     char ch;
     //int digit;
    cout << "Enter Any Digit ";
    cin >> ch;
    if ((ch>='a' && ch <='z') || (ch>='A' && ch<='z'))
    {
        cout << ch<< " is not a Digit ";
    }
     else if (ch>= '0' && ch<='1000')
    {
        cout << ch<< "is a Digit";
    }
    else
        cout<< ch << "Try Again";
    return 0;
}
