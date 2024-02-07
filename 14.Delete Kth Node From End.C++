//Link ->https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    if(head->next==NULL&&k==1) return NULL;
    Node *t=head,*header=head;
    Node *p=NULL;

    int no_Of_Nodes=0;

    while(head)
    {
        no_Of_Nodes++;
        head=head->next;
    }

    int index=no_Of_Nodes-k+1;
    for(int itr=1;itr<index;itr++)
    {
        p=t;
        t=t->next;
    }
    if(k==1 && no_Of_Nodes>0)
    {
        p->next=NULL;
        delete t;
    }
    else if(k==no_Of_Nodes)
    {
        header=t->next;
        delete t;
    }
    else
    {
    p->next=t->next;
    t->next=NULL;
    delete t;
    }
    
    return header;
}

