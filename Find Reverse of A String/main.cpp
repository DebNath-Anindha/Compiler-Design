#include <iostream>

using namespace std;

int main()
{
    string a;

    cout << " Enter Any Sting :";
    cin >> a;

    int i;

    for(i = a.length()-1; i >= 0; i--)
    {
    cout<<a.at(i) ;

    }



    return 0;
}
