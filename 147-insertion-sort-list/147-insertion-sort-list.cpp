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

class Solution{
    public:
    ListNode* insertionSortList(ListNode *head){
        //loop over the whole list
        for(auto i=head;i;i=i->next){
            //loop until the ending of the first loop
            for(auto j=head;j!=i;j=j->next){
                //if the value of second iteration is smaller than the first one, swap the values
                if(j->val>i->val){
                    auto temp=j->val;
                    j->val=i->val;
                    i->val=temp;
                }
            }
        }
        return head;
    }
};

