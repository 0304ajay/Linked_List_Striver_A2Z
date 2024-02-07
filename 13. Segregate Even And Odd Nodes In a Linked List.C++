//Link -https://www.codingninjas.com/studio/problems/segregate-even-and-odd-nodes-in-a-linked-list_1116100
/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    Node *temp=head;
    vector<int> even;
    vector<int> odd;
    while(head)
    {
        if(head->data%2==0)
        {
            even.push_back(head->data);
            head=head->next;
        }
        else
        {
            odd.push_back(head->data);
            head=head->next;
        }
    }

    head=temp;

    for(int itr1=0;itr1<even.size();itr1++)
    {
        head->data=even[itr1];
        head=head->next;
    }

    for(int itr1=0;itr1<odd.size();itr1++)
    {
        head->data=odd[itr1];
        head=head->next;
    }

    return temp;
}
// Time Complexity: O(N)