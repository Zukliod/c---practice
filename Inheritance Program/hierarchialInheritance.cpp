#include<iostream>
using namespace std;
class A {
    public:
    void displayA(){
        cout<<"this is class A"<<endl;
    }
};
class B : public A {
    public:
    void displayB(){
        cout <<"this is class B"<<endl;
    }
};
class C : public A {
    public:
    void displayC(){
        cout <<"this is class C"<<endl;
    }
};  
int main(){
    C objC;
    objC.displayA();
    objC.displayC();
    B objB;
    objB.displayA();
    objB.displayB();
    return 0;
}