#include<iostream>
using namespace std;
int main() {
   int num, sum = 0;
   cout << "Enter the number : ";
   cin >> num;
   while (num != 0) {
      sum = sum + num % 10;
      num = num / 10;
   }
   cout << "\nThe sum of the digits : "<< sum;
}
