// to find the volume of a cylinder , cube and cuboid 

#include<iostream>
using namespace std;

int volume(int a){
    return a*a*a;
}

int volume(int a , int b){
    return 3.14*a*a*b;
}
int volume(int a , int b ,int c){
    return a*b*c;
}
int main(){
    cout<<"the volume of cylinder of radius 4 and height 7 is "<<volume(4,7)<<endl;
    cout<<"the volume of a cube of side 6 is "<<volume(6)<<endl;
    cout<<"the volume of a cuboid of length 6 , breadth 7 and height 8 is "<<volume(6,7,8)<<endl;

return 0;
}