// Calculate sum of digits of a number.
#include<iostream>
using namespace std;
int SumOfDigit(int num)
{
    int digitSum =0;
    while(num>0)
    {
        int lastDig = num%10;
        num /=10;
        digitSum += lastDig;
    }
    return digitSum;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int result = SumOfDigit(number);
    cout << "Sum of digits: " << result << endl;
    return 0;
}