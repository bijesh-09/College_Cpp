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
        int operator >(samaya o2){
            int total1 = hours * 60 + minutes ;
            int total2 = o2.hours * 60 + o2.minutes ;
            if (total1 > total2) 
            {
                return 1;
            }
            else if(total1 < total2){
                return 0;
            }
            else return -1;
        } 
};

int main(){
    int hr1, min1;
    int hr2, min2;
    std::cout<<"Enter hours and minutes for 1st time:"<<std::endl;
    std::cin>>hr1>>min1;
    std::cout<<"Enter hours and minutes for 2nd time:"<<std::endl;
    std::cin>>hr2>>min2;

    samaya t1(hr1,min1),t2(hr2,min2);
    t1.display();
    t2.display();
    int check = t1 > t2; 
    if (check)
    {
        std::cout <<"t1 is greater!"<<std::endl;
    } 
    else{
        std::cout <<"t2 greater!"<<std::endl;

    }
    return 0;
}