//link -https://www.codingninjas.com/studio/problems/delete-node-of-linked-list_8160463

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    // Write your code here
    Node *head=list;
    while(((list->next)->next)!=NULL)
    {
        list=list->next;
    }
    delete list->next;
    list->next=nullptr;
    list->next=NULL;
    return head;
}