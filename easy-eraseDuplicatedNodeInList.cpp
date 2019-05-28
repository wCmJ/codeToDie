struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* deleteDuplicates(ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    ListNode *re = head, *out = head;
    head = head->next;
    while(head)
    {
        if(head->val != re->val)
        {
            re->next = head;
            re = re->next;
        }
        head = head->next;
    }
    re->next = NULL;
    return out;
}
