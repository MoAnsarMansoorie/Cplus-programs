#include<iostream>
using namespace std;

int c = 90;

int main(){
    int a, b, c;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a + b;

    cout<<c<<endl;
    cout<<"global variable c is" <<::c<<endl;

    return 0;
}