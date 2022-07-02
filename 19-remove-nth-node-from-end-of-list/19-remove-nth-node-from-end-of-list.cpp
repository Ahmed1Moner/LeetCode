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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //initialize a traversal pointer
        ListNode *tra=head;
        int size=0;
        
        //empty list-> return null
        if(!head){
            return head;
        }
        //only one node-> return null
        if(!head->next){
            head=NULL;
            return head;
        }
        
        //get the size of the whole linked list & after that-> return the pointer back to the head
        while(tra){
            size++;
            tra=tra->next;
        }
        tra=head;
        //delete 5 out of 15 node from the end-> delete 15-5-1=9
        int x=size-n-1;
        
        //if the n equals to the size-> delete the first node
        if(n==size){
            tra=head->next;
            //delete the old head
            delete head;
            //initialize the new head
            head=tra;
            //return the new head
            return head;
        }
        //traverse over the whole list until getting the desired node to be deleted
        for(int i=0;i<x;i++){
            tra=tra->next;
        }
        //delete it by pointing its next to the next next node
        tra->next=tra->next->next;
        return head;
    }
};

