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
    
    //we'll use merge sort algorithm-> worst: O(nlogn), Best: O(nlogn), out-place, stable
    
    //definition of the merge method which takes two lists as parameters
    ListNode *merge(ListNode *l1, ListNode *l2){
    //initialize a new list with initial value of zero in its head && a pointer points on it
    ListNode *dummy=new ListNode(0);
    ListNode *curr=dummy;

     //compare the values of each node, get the smaller one to be stored in the new list, dummy
    while(l1&&l2){
        if(l1->val<l2->val){
            curr->next=l1;
            l1=l1->next;
        }
        else{
            curr->next=l2;
            l2=l2->next;
        }
        curr=curr->next;
    }
        
    //if there is a remaining nodes in either the first or the second list, connect it to the new list directly
    //while moving with the two pointers, one on either first or second list and the second on the third new list
    if(l1){
        curr->next=l1;
        l1=l1->next;
        curr=curr->next;
    }
    if(l2){
        curr->next=l2;
        l2=l2->next;
        curr=curr->next;
    }
    //ignoring the first node value in the new list
    return dummy->next;
    }    
    
    
    ListNode* sortList(ListNode* head) {
        //base case-> if there're no elements or just a one, return it
        if(!head||!head->next){return head;}
        //initilize three pointers which are point on the head of the list
        ListNode *temp=head, *slow=head, *fast=head;
        
        //move with the slow and the fast pointers, fast with two steps while the slow one with only one step
        //when the fast stops, the slow will be pointed on the middle of the list
        while(fast && fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        //cut the list to be two separated lists
        temp->next=NULL;
        
        /*now, 'head'->head of list1, 'temp'->end of list1,'slow'->head of list2, 'fast'->end of list2
        separate the whole major list to two minor lists to be:
        left list: start->head, end->temp, right list: start->slow, end->fast
        
        recursive case-> do the same operations on the left and the right ones until reaching the base case, only one node remaining
        */
        ListNode *leftList=sortList(head);
        ListNode *rightList=sortList(slow);
        
        //return the resultant list after calling the merge method
        return merge(leftList, rightList);
    }    
};