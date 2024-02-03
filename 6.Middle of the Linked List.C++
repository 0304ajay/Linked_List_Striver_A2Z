// link-https://leetcode.com/problems/middle-of-the-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    if(head->next==NULL) return head;
    int count_Nodes=0;
    ListNode *middle=head;
    while(head)
    {
        count_Nodes++;
        head=head->next;
    }

    int middle_Node=(count_Nodes/2);

    for(int itr=1;itr<=middle_Node;itr++)
    {
        middle=middle->next;
    }

    return middle;
    }
};