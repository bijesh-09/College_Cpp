#include <iostream>

class samaya{
    int hours;
    int minutes;
    public:
        samaya(){
            hours = 0;
            minutes = 0;
        }
        samaya(int hrs, int mins){
            hours = hrs;
            minutes = mins;
        }
        void display(){
            std::cout<<"Time = "<<hours<<"hrs"<<" "<<minutes<<"mins" <<std::endl;
        }
        samaya operator +(samaya o2){
            samaya temp;
            temp.hours = hours + o2.hours; 
            temp.minutes = minutes + o2.minutes; 
            if (temp.minutes >= 60) {
                temp.hours += temp.minutes/60;
                temp.minutes = temp.minutes % 60;
            }
            return samaya(temp.hours,temp.minutes);
        } 
};

int main(){
    samaya t1(2,30),t2(3,50),t3;
    t1.display();
    t2.display();
    t3 = t1 + t2; //--> t1.operator+(t2) is called
    t3.display();
    return 0;
}