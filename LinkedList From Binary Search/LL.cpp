
A Strictly Increasing Linked List

bool solve(LLNode* head) {
    LLNode* fast = head->next;
    LLNode* slow = head;
    while (fast) {
        if (fast->val <= slow->val) {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}

