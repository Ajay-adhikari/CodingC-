#include<iostream>
using namespace std;


void swapvalue(int &a , int &b ){
    int temp = a;
    a = b;
    b = temp;

    }

int main(){
    int  x=3 , y=6;
    cout<<"the value of a is "<<x<<" the value of b is "<<y<<endl;
    swapvalue ( x , y);
    cout<<"the value of a is "<<x<<"the value of b is "<<y<<endl;

    return 0;
}



