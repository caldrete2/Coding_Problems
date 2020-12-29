bool checkSet(SinglyLinkedListNode* node, set<SinglyLinkedListNode*> &a) {
    if(node == NULL) 
        return false;
    if(a.count(node) != 0)
        return true;
    a.insert(node);
    
    return false; 
}

int findMergeNode(SinglyLinkedListNode* h1, SinglyLinkedListNode* h2) {
    set<SinglyLinkedListNode*> ptrs;
    
    while(h1!=NULL || h2!=NULL) {        
        if(checkSet(h1, ptrs)) 
            return h1->data;
        if(checkSet(h2, ptrs))
            return h2->data;
        
        if(h1) h1 = h1->next;
        if(h2) h2 = h2->next;   
    }
    
    return -1;
}
