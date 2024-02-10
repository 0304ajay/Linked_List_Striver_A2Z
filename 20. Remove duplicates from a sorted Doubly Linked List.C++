//Link -https://www.codingninjas.com/studio/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283?leftPanelTabValue=SUBMISSION
/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    Node *temp=head;

    while(head&&(head->next!=NULL))
    {
        if((head->data==(head->next)->data))
        {
            Node *t1=head->next;
            head->next=head->next->next;
            if((head->next!=NULL))
                head->next->prev=head;
            delete t1;
        }
        else
        {
            head=head->next;
        }
    }

    return temp;
}
