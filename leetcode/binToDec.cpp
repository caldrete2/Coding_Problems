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
    int getListSize(ListNode* head) {
        int count = 0;
        ListNode* cur = head;
        
        while(cur != NULL) {
            count++;
            cur = cur->next;
        }
        
        return count;
    }
    
    int binToDec(ListNode* head, int pos, int len) {
        if(pos == len-1) 
            return head->val;
        return((head->val << (len-pos-1)) + binToDec(head->next, pos+1, len));
    }
    
    int getDecimalValue(ListNode* head) {
        //get list size
        int len = getListSize(head);
        //iterate list 
        return binToDec(head, 0, len);
    }
};
