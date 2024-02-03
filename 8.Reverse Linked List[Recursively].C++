//Link-https://www.codingninjas.com/studio/problems/reverse-linked-list_920513
/****************************************************************

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
        

*****************************************************************/
Node *first=NULL;
void reverse(Node *q,Node *p)
{
    if(p!=NULL)
    {
        reverse(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    reverse(NULL,head);
    return first;
}
