/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* p, * q;
    while (head != NULL && (head->val == val))
    {
        p = head;
        head = head->next;
        free(p);
    }
    p = head;
    while (p != NULL && p->next != NULL)
    {
        if (p->next->val == val)
        {
            q = p->next;
            p->next = q->next;
            free(q);
        }
        else
        {
            p = p->next;
        }
    }
    return head;
}