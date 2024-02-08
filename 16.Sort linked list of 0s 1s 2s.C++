//Link -https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937
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

Node* sortList(Node *head){
    // Write your code here.
    vector<int> v;

    Node *temp=head;
    int itr=0;
    while(head)
    {
        v.push_back(head->data);
        head=head->next;
    }
    
    head=temp;

    sort(v.begin(),v.end());

    while(head)
    {
        head->data=v[itr++];
        head=head->next;
    }

    head=temp;
    return head;
}