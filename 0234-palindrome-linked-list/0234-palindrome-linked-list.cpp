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
    ListNode* Reversell(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr !=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = Reversell(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second !=NULL){
            if(first->val != second->val){
                Reversell(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        Reversell(newHead);
        return true;
    }
};