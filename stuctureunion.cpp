#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    union money m1;
    {
        m1.rice=34;
        cout<<m1.rice;
    };
    
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;//because we used typedef and ep
    // struct employee shubham;
    // struct employee rohanDas;
    // shubham.eId=15;
    // harry.eId =1602;
    // harry.favChar = 'tony';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    //  cout<<"The value is "<<shubham.eId<<endl; 
     return 0;
}
