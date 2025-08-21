#include <iostream>

class employee{
    int salary;
    public:
        employee(){
            salary = 0;
        }
        employee(int s){
            salary = s;
        }
        void display(){
            std::cout<<"Salary = "<<salary<<std::endl;
        }
        void operator /= (employee o2){
            salary /= o2.salary;
        }
};

int main(){
    employee e1(10000),e2(2000);
    e1.display();
    e2.display();
    e1/=e2;
    e1.display();
    return 0;
}