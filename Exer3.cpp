#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, pro=1,i;
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    for(i=num1;i>0;i=i/10)
    {
        r = i % 10;
        pro = pro*r;
    }
    cout << " The product of digits of " << num2 << " is: " << pro << endl;
}
