#include <iostream>
class MyClass {
    int value;
    public:
        MyClass(int v = 0){
            value = v;
        }
        MyClass& operator=(MyClass& other) {
            value = other.value;
            return other;
        }
        void show() { std::cout << value << std::endl; }
};

int main() {
    MyClass a(5), b;
    b = a; 
    b.show(); 
    return 0;
}