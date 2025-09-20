#include<iostream>
using namespace std;
class A {
    public:
    void displayA(){
        cout<<"this is class A"<< endl;
    }
};
class B : public A {
    public:
    void displayB(){
        cout<<"this is class B"<< endl;
    }
};
class C : public A {
    public:
    void displayC(){
        cout<<"this is class C"<< endl;
    }
};
class D : public B, public C {
    public:
    void displayD(){
        cout<<"this is class D"<< endl;
    }
};
int main(){
    D objD;
    objD.displayB();
    objD.displayC();
    objD.displayD();
    //objD.displayA(); // This will cause ambiguity error
    objD.B::displayA(); // Resolving ambiguity using scope resolution operator
    objD.C::displayA(); // Resolving ambiguity using scope resolution operator
    return 0;
}