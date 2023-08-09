#include<iostream>
using namespace std;


class node{
       public:
            int data;
            node*next;
            node*head;


            node(int val)
            {
                data=val;
                next=NULL;
            }

            void insert(node* &head,int val)
            {
                if(head==NULL)
                {
                    head=n;
                    return;
                }

                node*n=new node(val);
                node*temp=head;

                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=n;

                
            }

            void display(node*head)
            {
                node*temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<" -> ";
                       temp=temp->next;

                }
                cout<<endl;
             

            }
}

int main()
{
    node*head=NULL;


    insert()
}