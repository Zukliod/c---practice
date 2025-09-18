#include<iostream>
using namespace std;
class friendsFunctionProgram{
    private:
    int a;
    public:
    void setValue(int val){
        a=val;
    }
    friend void display(friendsFunctionProgram obj);
};
void display(friendsFunctionProgram obj){
    cout<<"The value of a is: "<<obj.a<<endl;
}
int main(){
    friendsFunctionProgram obj;
    int value;
    cout<<"Enter the value of a: ";
    cin>>value;
    obj.setValue(value);
    display(obj);
    return 0;
}