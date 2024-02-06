//Link-https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
#include<map>
int lengthOfLoop(Node *head) {
    // Write your code here
    map<Node*,int> mp;
    int count=0;
    int i=0;
    Node *temp=head;
    int n=mp.size();
    while(head)
    {
        if(mp.find(head)==mp.end())
        {
            head->data=++i;
            mp[head]=1;
            head=head->next;
        }
        else
        {
            i=head->data;
            break;
        }
    }
    if(head==NULL) return 0;
     int No_Of_Nodes=mp.size();
    // while(temp!=head)
    // {
    //     count++;
    //     temp=temp->next;
    // }
    return No_Of_Nodes-i+1;
}
