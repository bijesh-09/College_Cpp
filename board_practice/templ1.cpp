#include<iostream>

using namespace std;

template<typename T>
class base{
    T data;
    public:
    base(){}
    base(T a){
        data = a;
    }
    void display(){
        cout << data<<endl;
    }
};

template<typename T>
class derived : public base<T> {
    public:
        derived(){}
        derived(int a): base<T> (a) {
        }
        // void display(){

        //     base::display() ;
        //     cout << data<<endl;
        // }
};

int main(){
    derived <int>d(10);
    d.display();
    return 0;
}