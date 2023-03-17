#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;


        Node(int data)
        {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};


Node* buildtree(Node* root)
{
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root=new Node(data);
    if(data==-1)
    {
        return NULL;
    }

    cout<<"enter the left data for "<<root->data<<endl;
    root->left=buildtree(root->left);

    cout<<"enter the data for right of"<<root->data<<endl;
    root->right=buildtree(root->right);

}
void inordertraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void levelordertraversal(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* frontnode=q.front();
        q.pop();
        cout<<frontnode->data;
        if(root->left)
        {
            q.push(frontnode->left);
        }
        if(frontnode->right)
        {
            q.push(frontnode->right);
        }

    }
}
int main()
{
    Node* root=NULL;
    root=buildtree(root);
    
    inordertraversal(root);

}