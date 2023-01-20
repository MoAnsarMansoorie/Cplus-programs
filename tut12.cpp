#include<iostream>
using namespace std;

int main(){
    //pointer
    int a = 3;
    int* b = &a;

    // & ---> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<b<<endl;

    
    // * ---> (value at) dereference operator
    cout<<"The value at address b is "<<*b<<endl;
    return 0;
}