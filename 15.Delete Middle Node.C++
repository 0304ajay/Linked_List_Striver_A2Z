//Link ->https://www.codingninjas.com/studio/problems/delete-middle-node_763267
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

Node* deleteMiddle(Node* head){
    // Write your code here.
    if(head->next==NULL) return NULL;
    Node *temp=head;
    int no_Of_Nodes=0;
    while(head)
    {
        no_Of_Nodes++;
        head=head->next;
    }
    int middle=no_Of_Nodes/2;
    Node *q=NULL;
    head=temp;
    for(int i=0;i<middle;i++)
    {
        q=head;
        head=head->next;
    }
    q->next=head->next;
    delete head;
    head->next=NULL;
    return temp;
}
