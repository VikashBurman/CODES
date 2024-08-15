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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        // cout<<len;
        int mid = (len/2)+1;
        // cout<<mid;
        ListNode* mov = head;
        while(mov!=NULL){
            mid--;
            if(mid == 0){
                break;
            }
            mov=mov->next;
        }
        // cout<<mov->val;
        head = mov;
        
        return head;

    }
};