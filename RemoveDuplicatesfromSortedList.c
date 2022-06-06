struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* current = head;
    struct ListNode* after;
    if (current == NULL){
        return NULL;
    }
    while(current -> next != NULL){
        if (current->val == current->next->val)
           {
            after = current -> next -> next;
            free(current -> next);
            current->next = after;
        }
        else{
            current = current -> next;
        }
    }
    return head;
}

// 166 / 166 test cases passed.
// Status: Accepted
// Runtime: 6 ms
// Memory Usage: 6.7 MB
