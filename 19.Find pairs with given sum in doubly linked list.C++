//link -https://www.codingninjas.com/studio/problems/find-pairs-with-given-sum-in-doubly-linked-list_1164172
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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/
#include<map>
vector<pair<int, int>> findPairs(Node* head, int k)
{
     vector<pair<int, int>> v1;
    map<int, int> mp;
    int i = 0;
    while (head) {
        if (head->data <= k) {
            mp[head->data] = i;
        }
        head = head->next;
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        auto iter = mp.find(k - (itr->first));
        if (iter != mp.end() && iter != itr&&iter->second!=1) { // Avoid using the same element twice
            v1.push_back({itr->first, iter->first});
            //mp.erase(itr); // Remove the used elements from the map
            //mp.erase(iter);
            itr->second=1;
            iter->second=1;
        }
    }

    return v1;
}
