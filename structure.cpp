#include<iostream>
using namespace std;

struct employee{
    int eId;
    char favchar;
    float salary;
}tru;

int main(){
struct employee vijay ; 
struct employee ajay ;

vijay.eId=1;
vijay.favchar='c';
vijay.salary=123456;
ajay.eId=2;
ajay.favchar='d';
ajay.salary=124365;

cout<<"eId of vijay is "<<vijay.eId;
cout<<" eId of ajay is "<<ajay.eId;
return 0;
}