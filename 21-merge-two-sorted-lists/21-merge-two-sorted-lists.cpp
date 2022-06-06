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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //using merge sort algorithm
        //initialize a new list && three pointers: one on the first list, second on the second, third on the third
        ListNode *list3=new ListNode;
        ListNode *tra1=list1, *tra2=list2, *tra3=list3;
        
        //if the first list is empty, return the second list immediately, same with second list
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        
        //move with the pointers until finishing the smaller list
        while(tra1 && tra2){
            //compare the values of each node in the two lists, get the smaller one to the third list && move with the pointers
            if(tra1->val < tra2->val){
                //make the next node of the third list is the smaller one
                tra3->next=tra1;
                tra1=tra1->next;
            }
            else{
                tra3->next=tra2;
                tra2=tra2->next;
            }
            tra3=tra3->next;

        }
        
        //if there are remaining nodes in either first or second list, move them to the next of the third list
        if(tra1){
            tra3->next=tra1;
        }
        if(tra2){
            tra3->next=tra2;
        }
        tra3=tra3->next;
        
        //return the sorted third list
        return list3->next;
    }
};


