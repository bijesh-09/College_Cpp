#include <iostream>

class employee{
    int emp_id;
    std::string name;
    std::string post;
    public:
        void showData();
        employee();
        employee(int, std::string, std::string);
};

employee :: employee(){
    emp_id = 1;
    name = "Ram";
    post = "Manager";
}
employee :: employee(int id, std::string nm, std::string pst){
    emp_id = id;
    name = nm;
    post = pst;
}

void employee :: showData(){
    std::cout << "ID of Employee = " << emp_id << std::endl;
    std::cout << "Name of Employee = " << name << std::endl;
    std::cout << "Post of Employee = " << post << std::endl;
}

int main(){
    employee e1;
    e1.showData();

    int id;
    std::string nm;
    std::string pst;

    std::cout << "Enter ID of Employee = " << std::endl;
    std::cin>> id;
    std::cout << "Enter Name of Employee = " << std::endl;
    std::cin>> nm;
    std::cout << "Enter Post of Employee = " << std::endl;
    std::cin>> pst;


    employee e2(id,nm,pst);
    e2.showData();

    employee e3 = e2;
    e3.showData();
    

    return 0;
}