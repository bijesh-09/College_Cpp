#include<iostream>
using namespace std;
namespace bro{
    int var1=10;
}
namespace pro{
    int var =9;
    int var2=12;
}
namespace hi
{
    string greet1 = "Hi";   
    namespace hello
    {
        string greet2 = "Hello";   
    } // namespace hello
    
    
} // namespace hi

namespace b = bro;
using pro::var2;
int main(){
    cout<<bro::var1<<endl;
    cout<<b::var1<<endl;
    cout<<var2<<endl;
    cout<<pro::var<<endl;
    cout<<hi::greet1<<endl;
    cout<<hi::hello::greet2<<endl;
    return 0;
}