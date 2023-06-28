// This is the solution of solution of lab Assignment-5 , QN.1
/*
Name of programmer:
This programme is gonna take input of
*/
#include <iostream>
using namespace std;
int main()
{

    // Here we take two nunmbers as input ie. num1 , num2
    int num1, num2;
    cin >> num1 >> num2;
    // Taking input of boolean valu ie, evenOnly
    bool evenOnly;
    cin >> evenOnly;
    // Printing the individual value of given two number
    cout << "Value of num1:" << num1 << endl
         << "value of num2:" << num2 << endl;
    // Here if the value of evenOnly is 1 ie, true then we check whether both number are even or not
    if (evenOnly == 1 && num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "true" << endl;
    }
    // and if both numbers are not even that means we gonna check for the condition where evenOnly is 0 ,ie false and check whether one of number is odd and if present we give true as output
    else if (evenOnly == 0 && ((num1 + num2) % 2 != 0))
    {
        cout << "true" << endl;
    }
    // if both of above statement fails that means there is no any such number so  , we give output as false at last
    else
        cout << "false" << endl;

    // (evenOnly==1 && num1%2==0 && num2%2==0) ? cout << "value of evenOnly:" << "true" : cout << "value of evenOnly :" << "false" ;

    return 0;
}