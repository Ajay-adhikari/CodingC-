#include<bits/stdc++.h>
using namespace std;
bool check(string &s,int n )
{
    int count=4;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
        {
            count=4;
            continue;
        }
        else
        {
            count--;
            
        }
    }
   if(count<=0)
   return true;
   else return false;
}
int main() {
	// your code goes here

	
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(check(s,n))
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }

	return 0;
}