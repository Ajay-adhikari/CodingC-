// to find the factorial of any numebr 
#include<iostream>
using namespace std;

int fibo(int n);

int main(){
    int n ;
    cout<<"enter number : "<<endl;
    cin>>n;
    cout<<"the fibo series of "<<n<<" is "<<fibo(n);

return 0;
}
int fibo(int n){

    if(n<2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}