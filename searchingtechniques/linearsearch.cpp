#include <iostream>
using namespace std;
class linearsearch{
    public:
    int linear(int arr[], int n, int key){
        for (int i=0; i<n; i++){
            if (arr[i]==key){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    linearsearch obj;
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int result = obj.linear(arr, n, key);
    if (result == -1){
        cout<<"Element not found in the array"<<endl;
    }
    else{
        cout<<"Element found at index "<<result<<endl;
    }
    return 0;
}