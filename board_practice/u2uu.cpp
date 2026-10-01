#include<iostream>
using namespace std;
class Dollar;
class Rupee{
    float rupees;
    public:
    Rupee(){}
    Rupee(float r){
        rupees = r;
    }
    operator Dollar();

    void display(){
        cout<<rupees<<endl;
    }
};
class Dollar{
    float dollar;
    public:
    Dollar(){}
    Dollar(float d){
        dollar =d;
    }
    operator Rupee(){
        return Rupee(dollar * 133);
    }
    void display(){
        cout<<dollar<<endl;
    }
    // float getDollar() const{
    //     return dollar;
    // }
};
Rupee::operator Dollar(){
    return Dollar(rupees / 133);
}
int main(){
    int choice;
    cout<<"Enter follwoing choices:"<<endl;
    cout<<"1. Rupee to Dollar"<<endl;
    cout<<"2. Dollar to Rupee"<<endl;
    cin >> choice;
    if(choice == 1){
        Rupee r(2341.123);
        Dollar d;
        d=r;
        r.display();
        d.display();

    }
    else if(choice == 2){
        Rupee r;
        Dollar d(45.324);
        r=d;
        d.display();
        r.display();

    }
    else{
        cout<<"Invalid choice!"<<endl;
    }
    return 0;
}