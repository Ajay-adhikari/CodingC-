#include<iostream>
using namespace std;


int product(int a , int b);

int main(){
    int b;
    int a;
cout<<"enter the valure of a and b  : "<<endl;
cin>>a>>b;

cout<<"the value of product of a and b is "<<product(a,b)<<endl;
cout<<"the value of product of a and b is "<<product(a,b)<<endl;
cout<<"the value of product of a and b is "<<product(a,b)<<endl;
cout<<"the value of product of a and b is "<<product(a,b)<<endl;

return 0;
}

int product(int a , int b ){
    static int c=0;
    c=c+1;
    return a*b +c;
}