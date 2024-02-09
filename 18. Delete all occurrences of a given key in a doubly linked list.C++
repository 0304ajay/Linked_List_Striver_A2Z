//link -https://www.codingninjas.com/studio/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461
/**
 * Definition of doubly linked list:
 *
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

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    if(head==NULL) return head;
    Node *header=head;
    while(head)
    {
        if(head->prev==NULL && head->data==k)
        {
            Node *temp=head;
            head=head->next;
            header=head;
            if(head!=NULL){
                head->prev=NULL;
            }
            delete temp;
        }
        else if(head->data==k)
        {
            (head->prev)->next=head->next;
            if(head->next!=nullptr)
            {
                (head->next)->prev=head->prev;
            }
            Node *temp=head;
            head=head->next;
            delete temp;
        }
        else{
            head=head->next;
        }
    }
    return header;
}
// Time Complexity: O(N)