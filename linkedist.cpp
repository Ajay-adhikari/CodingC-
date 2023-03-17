# include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{   public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(Node* &head , int data)
{
    
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
    
}

void displayll(Node * head)
{   
    Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    
}
int main()
{

    Node* head= new Node(0);
    insertathead(head, 2 );
    insertathead(head, 3 );
    insertathead(head, 4 );
    insertathead(head, 5 );
    insertathead(head, 6 );
    insertathead(head, 7 );
    insertathead(head, 8 );
    displayll(head);
return 0;
}