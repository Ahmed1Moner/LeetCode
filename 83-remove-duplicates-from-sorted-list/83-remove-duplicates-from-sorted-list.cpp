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
    ListNode* deleteDuplicates(ListNode* head) {
        //initialize a traversal pointer
        ListNode *tra=head;
        
        //empty list-> return null
        if(!head){
            return head;
        }
        
        //loop over the whole linked list
        while(tra && tra->next){
            //if there's a dublicate, current & next nodes have the same value
            // ->delete the next node, make the current points on the next next node
            if(tra->val==tra->next->val)
                tra->next=tra->next->next;
            //no dublicate-> move the traversal one step
            else
                tra=tra->next;
        }
        return head;
    }
};
       
