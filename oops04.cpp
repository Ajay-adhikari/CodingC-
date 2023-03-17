#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public : 
    void setdata(void){
    cout<<"enter the id "<<endl;
    cin>>id;
    count++;
    }
    void getdata(void){
        cout<<"the id os this employee is "<<id<< " and this employee's number is "<<count<<endl;
    }
};

int employee :: count; 

int main(){
employee harry , vijay , ajay;
harry.setdata();
harry.getdata();

vijay.setdata();
vijay.getdata();

ajay.setdata();
ajay.getdata();
return 0;
}