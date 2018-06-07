#include<bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node* next;
};

node* head;

void insert_begin(int val)
{
    node* temp=new node();
    temp->data=val;
    temp->next=head;
    head=temp;
}

void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
     int n,x;
     cout<<"Enter number of elements in the link list:";
     cin>>n;
     head=NULL;

     for(int i=0;i<n;i++)
     {
         cout<<"Enter elements:";
         cin>>x;
         insert_begin(x);
         cout<<"The list is: ";
         print();
         cout<<endl;
     }
     return 0;
}
