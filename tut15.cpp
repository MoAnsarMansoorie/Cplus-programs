#include<iostream>
using namespace std;

//Function prototype
int sum(int a, int b);

int main() {
    int num1, num2;
    cout<<"Enter first number " <<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    //num1 , num2 are actual parameter

    cout<<"The sum of "<<sum(num1, num2);

    return 0;
}


//function

int sum(int a, int b){
    //Formal parameter - a , b will be taking values from actual parameter num1, num2
    int c = a + b;
    return c;
}