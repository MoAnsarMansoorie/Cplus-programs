#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age"<<endl;
    cin>>age;

    //selection structure - if-else statement

    // if (age<18)
    // {
    //     cout<<"You can not come my party because your age is "<<age;
    // }
    // else if (age > 18)
    // {
    //     cout<<"You can come my party because your age is "<<age;        
    // }
    // else
    // {
    //     cout<<"You can come with your aadhaar because your age is "<<age;
    // }
    

    //selection structure - switch statement
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;

    case 22:
        cout<<"you are 22";
        break;

    default:
        cout<<"No special cases";
        break;
    }
    return 0;
    


}