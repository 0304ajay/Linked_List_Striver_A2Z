//Link -https://www.codingninjas.com/studio/problems/add-one-to-a-number-represented-as-linked-list_920557
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }    
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addOne(Node *head)
{
    // Write Your Code Here.
    vector<int> v;

    int one=0;
    Node * temp=head;

    while(head)
    {
        v.push_back(head->data);
        head=head->next;
    }

    int sz=v.size();

    v[sz-1]++;

    for(int itr=1;itr<=sz;itr++)
    {
        if(v[sz-itr]==10)
        {
            v[sz-itr]=0;
            if(sz-itr-1>=0)
            {
                v[sz-itr-1]++;
            }
            else
            {
                Node *t=new Node;
                t->data=1;
                t->next=temp;
                 one=1;
            }
        }
        else{
            break;
        }
    }

    head=temp;
    for(int itr=0;itr<sz&&head!=NULL;itr++)
    {
        head->data=v[itr];
        head=head->next;
    }

    if(one==1)
    {
        // Node *t=new Node;
        // t->data=1;
        // t->next=temp;
        return t;
    }
    
    return temp;
}
