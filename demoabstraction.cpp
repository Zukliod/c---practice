#include <iostream>
using namespace std;
class A {
    public:
    virtual void show() = 0;
};
class B: public A{
    public:
    void show(){
        cout<<"Implementation of abstract class A in derived class B"<<endl;
    }
};
int main(){
    B objB;
    objB.show();
    return 0;
}