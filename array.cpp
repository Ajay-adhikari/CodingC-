#include<iostream>
using namespace std;

int main(){
int marks[4]={23,54,76,98};

int* p= marks;
cout<<"the value of *P is "<<*p<<endl;
cout<<"the value os (p+1) is "<<*(p+1)<<endl;
return 0;

}