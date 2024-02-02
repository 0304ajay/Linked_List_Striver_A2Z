// Link to the questions: https://www.codingninjas.com/studio/problems/introduction-to-linked-list_8144737
/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
   Node *first=new Node(arr[0]); //class Node * first ->class is optional
   Node *temp,*last;
   last=first; //last is also of type temp because we cannot allocate a pointer to normal data type it must be also pointer
   for(int itr=1;itr<arr.size();itr++)
   {
       temp=new Node(arr[itr]);
       last->next=temp;
       last=last->next;
       
   }
   
   return first;

}