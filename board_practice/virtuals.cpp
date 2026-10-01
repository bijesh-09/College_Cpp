#include<iostream>
using namespace std;

class shape{
    protected:
    int length , breadth;
    public:
    shape(int l = 0, int b = 0){
        length = l;
        breadth = b;
    }
    virtual void area() =0;
    virtual ~shape(){
            cout<<"shape destructor"<<endl;

        }
};
class rect: public shape{
    int* arr;
    public:
        rect(int l,int b): shape(l,b){
            arr = new int[10];
        }
        void area(){
            cout << length*breadth<<endl;
        }
        ~rect(){
            delete[] arr;
            cout<<"rect destructor"<<endl;
        }
};

int main(){
    shape *s = new rect(2,3);
    s->area();
    delete s;
    return 0;
}