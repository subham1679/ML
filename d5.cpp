#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
 
};

void insertatbegin(Node **head_ref, int new_data)
{
    Node *newnode = new Node();
    newnode->data = new_data;
    newnode->next = *head_ref;
    *head_ref = newnode;

}

void insertafter(Node * prev, int new_data)
{
    if(prev==NULL)
    {
        cout<<"the list is empty\n";
        return;
    }
    else{

        Node *newnode = new Node();

        newnode->data = new_data;
        newnode->next = prev->next;
        prev->next = newnode;
    }
}

void printlist(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"\t";
        node = node->next;
    }
}

int main()
{
    Node* head =NULL;
    insertatbegin(&head,6);
    insertatbegin(&head,63);
    insertatbegin(&head,65);
    insertafter(head->next,3);
    printlist(head);
}