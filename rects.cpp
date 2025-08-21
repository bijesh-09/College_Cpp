#include <iostream>

class rectangle{
    int l , b;
    public:
        void setData(int l, int b){
            this->l = l;
            this->b = b;
        }
        void add(rectangle o1, rectangle o2){
            l = o1.l + o2.l;
            b = o1.b + o2.b;
        }
        void display(){
            std::cout << "Length = " << l << std::endl;
            std::cout <<"Breadth = " << b << std::endl;
        }
};
int main() {
    rectangle r1, r2, result;
    r1.setData(2, 3);
    r1.display();
    r2.setData(4, 5);
    r2.display();
    result.add(r1, r2);
    result.display();
    return 0;
}