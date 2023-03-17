#include<bits/stdC++.h>
using namespace std;
class disjointset
{
    vector<int> rank , parent , size;
    public:
    
    disjointset(int n)
    {
        size.resize(n+1 );
        rank.resize(n+1 , 0 );
        parent.resize(n+1 );
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            size[i]=1;

        }
    }
    int findUpar(int node)
    {
        if(node==parent[node])
        {
            return node;
        }
        return parent[node]=findUpar(parent[node]);

    }
    void unionbyrank(int u , int v )
    {
        int ulp_u=findUpar(u);
        int ulp_v=findUpar(v);
        if(ulp_u==ulp_v)
        {
            return;
        }
        else if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v])
        {
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionbysize(int u , int v)
    {
        int ulp_u=findUpar(u);
        int ulp_v=findUpar(v);
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
    }
    }

};

int main()
{
    
    disjointset ob1(7);
    ob1.unionbysize(1 , 2);
    ob1.unionbysize(2 , 3);
    ob1.unionbysize(4 , 5);
    ob1.unionbysize(6 , 7);
    ob1.unionbysize(5 , 6);
    
    cout<<ob1.findUpar((2));
    if(ob1.findUpar(3)==ob1.findUpar(7))
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"NOT SAME"<<endl;
    }
    return 0;
}