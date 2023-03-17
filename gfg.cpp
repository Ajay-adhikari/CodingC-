#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

long long kthLargestLevelSum(Node* root, int k) {
        long long ans=INT_MIN;
        queue<Node*> q;
        q.push(root);
        vector<long long int >va;
        while(!q.empty())
        {
            int size=q.size();
            vector<long long> v(size);
            while(size--)
            {
                Node* temp=q.front();
                q.pop(); 
                v.push_back(temp->data);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            long long sum=0;
            for(auto i:v)
            {
               sum+=i; 
            }
            va.push_back(sum);
            
        }
        sort(va.begin() , va.end() ,greater<long long>());
        if(va.size()<=k-1)
        {
            return -1;
        }
        return va[k-1];
        
        
        
        
        
    }
int main()
{
    Node* root = new Node(5);
    root->left = new Node(8);
    root->right=new Node(9);

    root->left->left=new Node(2);
    root->left->right=new Node(1);

    root->right->left=new Node(3);
    root->right->right=new Node(7);

    root->left->left->left=new Node(4);
    root->left->left->right=new Node(6);



    // root->right = new Node(10);
    // root->left->left = new Node(12);
    // root->left->right = new Node(13);
    // root->left->left->left=new Node(30);
    // root->left->left->right = new Node(40);

    // root->right->left=new Node(14);
    // root->right->right=new Node(16);
    // printLevelOrder(root);
 
    long long ans=kthLargestLevelSum(root , 2);
    cout<<ans<<endl;
    return 0;


    
}