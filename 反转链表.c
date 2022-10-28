/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 // struct ListNode * List_1(struct ListNode *q,struct ListNode *p);

 // struct ListNode* reverseList(struct ListNode* head){
 //     return List_1(NULL,head);
 // }

 // struct ListNode * List_1(struct ListNode *q,struct ListNode *p)
 // {
 //     if(p==NULL)
 //     {
 //         return q;
 //     }
 //     struct ListNode * temp = p->next;
 //     p->next = q;
 //     return List_1(p,temp);
 // }

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* p, * q;
    p = NULL;
    while (head != NULL)
    {
        q = head->next;
        head->next = p;

        p = head;
        head = q;

    }
    return p;

}