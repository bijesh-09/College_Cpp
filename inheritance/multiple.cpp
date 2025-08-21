#include<iostream>

class person{
    protected:
        std::string name;
        std::string address;
        int age;
    public:
        void setData(){
            name = "Nimesh Adikari";
            address = "Sallaghari";
            age=19;
        }
        void display(){
            std::cout<<"Name = "<<name<<std::endl
                    <<"Address = "<<address<<std::endl
                    <<"Age = "<<age<<std::endl;
        }
};

class employee{
    protected:
        int emp_ID;
    public:
        void show(){
            emp_ID = 12;
            std::cout<<"empID = "<<emp_ID<<std::endl;

        }
};

class Programmer : protected person, employee{
    public:
    void disp(){
        setData();
        display();
        show();
    }
};

int main(){
    Programmer p;
    p.disp();
    return 0;
}