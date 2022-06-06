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
    ListNode* insertionSortList(ListNode* head) {
        
        //creating a new list with the minimum value possible & its next is the head
        ListNode *dummy=new ListNode(INT_MIN, head);
        //temp pointer points on the next of the head
        ListNode *temp=head->next;
        //separate the two nodes, heed & dummy
        head->next=NULL;
        
        //until reaching the null in the first list, the original one
        while(temp){
            //always initialize two pointers, prev points on dummy list & curr points to its next
            ListNode *prev=dummy;
            ListNode *curr=prev->next;
            
            //until reaching the null in the second list, dummy
            
            //comparing the values of the curr & temp, the heads of the two lists
            
            //if the head value is less than the temp one, it's ok, move to the next node
            while(curr&&curr->val<temp->val){
                prev=curr;
                curr=curr->next;  
            }
            //if not, if the head value is more than the temp one, wee need to move the temp node between them, in the right position 
            prev->next=temp;
            ListNode *next=temp->next;
            temp->next=curr;
            temp=next;
        }
        //return the next of the new list, ignoring the first element which is added by us
        return dummy->next;
        
    }
};