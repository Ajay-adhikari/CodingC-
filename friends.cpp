#include<iostream>
using namespace std;

class point{
    int a ; int b ;
    public : 
    point(int x , int y ){
        a=x;
        b=y;
    }
    void displaypoint(){
        cout<<"the point is ("<<a<<","<<b<<")"<<endl;
    }

};

int main(){
    point vijay(2,5);
    vijay.displaypoint();

    point ajay(1,8);
    ajay.displaypoint();

return 0;
}