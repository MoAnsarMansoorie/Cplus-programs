#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

//This will not swap a nd b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


//This will swap a and b, call by reference using pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using C++ reference variable
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main( ){
    int x=4, y=5;
    //cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    //swap(a, b);  //
    //swapPointer(&x, &y); // This will swap a and b using reference variable.
    swapReferenceVar(x, y);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    return 0;
}