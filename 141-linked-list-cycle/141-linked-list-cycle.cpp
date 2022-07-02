/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //initialize two traversal pointers
        ListNode *tra1=head;
        ListNode *tra2=head;
        
        //empty list || one node-> return false
        if(!head)
            return false;
        if(!tra1->next)
            return false;
        
        //loop over the whole linked list
        while(tra1&&tra2&&tra2->next){
            //move the first pointer by one step
            tra1=tra1->next;
            //move the first pointer by two steps
            tra2=tra2->next->next;
            
            //if they meet-> cycle
            if(tra1==tra2)
                return true;
        }
        return false;
    }
};