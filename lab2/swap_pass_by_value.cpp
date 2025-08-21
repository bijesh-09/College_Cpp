#include<iostream>
using namespace std;

void swap(int x, int y){   //using reference variables
    int temp;
    temp = x;
    x = y;
    y = temp;

}
int main()
{
    int a,b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a,b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}