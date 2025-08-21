/*
3. Create a class employee having private attributes: emp_id, name, and post.
a. Create a public function setdata(). The function must accept inputs from
user as its attributes.
b. Create a private function showdata() to display attributes of an object.
c. Create an object e1
d. Ask for the inputs of attributes for e1 and Set the data for both employees
and print the values.
*/

#include <iostream>

class employee{
    int emp_id;
    std::string name;
    std::string post;
    void showData();
    public:
        void setData(int, std::string, std::string);
};

void employee::setData(int e, std::string n, std::string p){
    emp_id = e;
    name = n;
    post = p;
    showData(); //private member fn call
}

void employee :: showData(){
    std::cout << "Name of Employee = " << name << std::endl;
    std::cout << name << "'s ID = " << emp_id << std::endl;
    std::cout << "Post of " << name << " = " << post << std::endl;
}

int main(){
    employee e1;
    int employeeId;
    std::string nm;
    std::string pst;

    for (int i=0; i < 2; i++) { //for both employees
        std::cout << "Enter ID of Employee:" << std::endl;
        std::cin >> employeeId;
        std::cin.ignore(); // Clear the newline from input buffer

        std::cout << "Enter name of Employee:" << std::endl;
        std::getline(std::cin, nm);

        std::cout << "Enter post of Employee:" << std::endl;
        std::getline(std::cin, pst);
    
        e1.setData(employeeId,nm,pst);
    }
    

    return 0;
}
/*
Output:
Enter ID of Employee:
1024
Enter name of Employee:
Ram Shrestha
Enter post of Employee:
Manager
Name of Employee = Ram Shrestha
Ram Shrestha's ID = 1024
Post of Ram Shrestha = Manager
Enter ID of Employee:
1025
Enter name of Employee:
Shyam Shrestha
Enter post of Employee:
AI Engineer
Name of Employee = Shyam Shrestha
Shyam Shrestha's ID = 1025
Post of Shyam Shrestha = AI Engineer
*/