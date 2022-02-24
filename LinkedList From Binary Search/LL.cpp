
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

LinkedList Jumps


import java.util.*;

/**
 * class LLNode {
 *   int val;
 *   LLNode next;
 * }
 */
class Solution {
    public LLNode solve(LLNode head) {
        LLNode curr = head, prev = head;
        while (curr != null) {
            int n = curr.val;
            for (int i = 0; curr != null && i < n; i++) curr = curr.next;

            prev.next = curr;
            prev = prev.next;
        }
        return head;
    }
}


Length of Linked Lsit

int solve(LLNode* node) {
    int n = 0;
    while (node) {
        n++;
        node = node->next;
    }
    return n;
}

Linked List to Integer
Easy

Given a single linked list node, representing a binary number with most significant digits first, return it as an integer.

Constraints

n ≤ 30 where n the number of nodes in node



int solve(LLNode* node) {
    int num = 0;

    while (node != NULL) {
        num = num * 2 + node->val;
        node = node->next;
    }
    return num;
}
