//Link -https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248
/*
    Time Complexity: O(N)
    Space complexity: O(N)
    
    Where N is the number of nodes in the linked list.
*/

#include <stack>

bool isPalindrome(Node *head)
{
    vector<Node *> visitedNodes;
    // push all nodes in the stack
    Node *cur = head;
    while (cur != NULL)
    {
        visitedNodes.push_back(cur);
        cur = cur->next;
    }

    cur = head;
    //reverse(visitedNodes.begin(),visitedNodes.end())
    while (cur != NULL)
    {
        // compare node values
        Node *temp = visitedNodes.back();
        if (cur->data != temp->data)
        {
            return false;
        }
        visitedNodes.pop_back();
        cur = cur->next;
    }

    return true;
}