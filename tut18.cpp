#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
        /* code */
        return 1;
    }
    
    return n * factorial(n-1);
}

int fibonassi(int n){
    if (n<2)
    {
        /* code */
        return 1;
    }
    
    return fibonassi(n-2) + fibonassi(n-1);
}

int main() {
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    // cout<<"The factorail of number "<<a<<" is "<<factorial(a);
    cout<<"The term in fibanassi sequence at number "<<a<<" is "<<fibonassi(a);
    return 0;
}