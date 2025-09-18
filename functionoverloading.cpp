#include <iostream>
#include <string>
using namespace std;
class functionoverloading{
    public:
     int area(int a){
        return a*a;
    }
    int area(int a , int b){
        return a*b;
    }
    int area(double r){
        return 3.14*r*r;
    }
void display(string& shape, int n){
    cout<<"Area of "<<shape<<" is "<<n<<endl;
}
};
int main(){
    functionoverloading obj;
    while (1){
    cout<<"Enter the shape name (square, rectangle, circle) or 'exit' to quit: ";
    string shape;
    cin>>shape;
    if (shape == "exit") break;
    if (shape == "square"){
        int side;
        cout<<"Enter the side length: ";
        cin>>side;
        int area = obj.area(side);
        obj.display(shape, area);
    }
    else if (shape == "rectangle"){
        int length, breadth;
        cout<<"Enter the length and breadth: ";
        cin>>length>>breadth;
        int area = obj.area(length, breadth);
        obj.display(shape, area);
    }
    else if (shape == "circle"){
        int radius;
        cout<<"Enter the radius: ";
        cin>>radius;
        int area = obj.area(radius);
        obj.display(shape, area);
    }
    else{
        cout<<"Unknown shape!"<<endl;
    }
    }
    return 0;
}
