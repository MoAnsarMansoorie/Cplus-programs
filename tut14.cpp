#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
    struct employee harry;
    union money m1;
    m1.rice = 34;
    cout<<"the value of m1.rice" <<m1.rice<<endl;


    struct employee shubham;
    struct employee rohandas;

    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;

    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    return 0;
}