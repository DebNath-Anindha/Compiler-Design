#include <iostream>

using namespace std;

int main()
{
     char ch;

    cout << "Enter Any Alphabet ";
    cin >> ch;
    if ((ch>='a' && ch <='z') || (ch>='A' && ch<='z'))
    {
         cout<<"The input : "<< ch<<endl<< " Is An Alphabet ";
    }

    else
        cout<<"The input : "<< ch <<endl<< "isn't an Alphabet";
    return 0;
}
