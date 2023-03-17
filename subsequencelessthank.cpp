#include<iostream>
#include<vector>
using namespace std;

int f(int i , vector<int>&A , int k)
{

    int nottake=0+f(i+1 , A , k);
    int take=INT_MIN;
    if(take<)

}
int productSubSeqCount(vector<int> &A , int k)
{
     return f(0 , A , k );
}
int main()
{
    vector<int> A;
    
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    int k = 10;
    cout << productSubSeqCount(A, k) << endl;
}