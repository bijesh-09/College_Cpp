#include<iostream>
using namespace std;
class Number{
    int feet ;
    float inch;
    public:
        Number(){}
        Number(int a, float b){
            feet = a;
            inch = b;
        }
        operator float(){

            return feet + inch/12.0;
        }
        void display(){
            cout<<feet<<" "<<inch <<endl;
        }
};
int main(){
    Number e1(10,3.14);
    e1.display();
    float fe = (float)e1 ;
    e1.display();
    cout << fe<<endl;


    return 0;
}