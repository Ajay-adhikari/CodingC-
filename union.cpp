#include<iostream>
using namespace std;

union money{
    int rice;
    float pound;
    char car;
};

int main(){
int rice =45;
char car='d';
cout<<rice<<endl;

return 0;
}