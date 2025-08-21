#include<iostream>
using namespace std;
int main()
{
    int a ,b;
    cout << "Enter two number: " << endl;
    cin >> a >> b;
    float c = float(a)/b;
    cout << "The int version of their division is: " << int(c)  << endl;
    cout << "The float version of their division is: " << c  << endl;

    return 0;
}