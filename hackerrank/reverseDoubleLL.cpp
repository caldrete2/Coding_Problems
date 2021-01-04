DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* cur = head;
    DoublyLinkedListNode* prev = nullptr;
    
    while(cur != NULL) {
        prev = cur->prev;
        cur->prev = cur->next;
        cur->next = prev;
        
        cur = cur->prev;
    }
    
    head = prev != NULL? prev->prev : head;
    
    return head;
    
}
