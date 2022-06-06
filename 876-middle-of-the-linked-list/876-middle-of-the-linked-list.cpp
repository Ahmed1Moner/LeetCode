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

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    //first solution
        //initialize a pointer points on the head, the size of the list with zero
        ListNode *traptr=head;
        int size=0;
        
        //if there is no elements || only one element, return it
        if(!head||!head->next){
            return head;
        }
        
        //loop over the whole list to get the number of the nodes
        while(traptr){
            size++;
            traptr=traptr->next;
        }
        //make the pointer points back on the head
        traptr=head;
        
        //move with the pointer until reaching the middle of the list
        for(int i=1;i<(size/2);i++){
            traptr=traptr->next;
        }
        //return the next of the pointer, as it's required to return the one after the middle
        return traptr->next;
    }
};
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    //second solution
        //initialize two pointers
        ListNode* fast=head, *slow=head;
        
        if(!head||!head->next){return head;}
        
        //move the fast one with two steps while the slow one with only one step
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //when fast reachs the last node, the slow will points on the second middle one
        return slow;
    }
};