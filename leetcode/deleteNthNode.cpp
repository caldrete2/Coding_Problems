class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans = new ListNode(0, head);
        ListNode* fast = ans;
        ListNode* slow = ans;
        
        for(int i=0;i<=n;i++) {
            fast = fast->next;
        }
        
        while(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        
        return ans->next;
    }
};
