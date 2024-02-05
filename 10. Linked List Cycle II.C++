//link-https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_1112628
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
#include<map>;
Node *firstNode(Node *head)
{
    map<Node*,int> mp;
    while(head)
    {
       if(mp.find(head)!=mp.end()) 
       {
           return head;
       }
       mp[head]=1;
       head=head->next;
    }
    return NULL;
}