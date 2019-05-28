struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return head;

    //set para
    ListNode *tmp = head;
    ListNode **p = &head;
    *p = NULL;
    
    //get valid node
    while(tmp)
    {
        ListNode *node = tmp;
        bool flag = true;
        while(tmp->next && tmp->val == tmp->next->val)
        {
            flag = false;
            tmp = tmp->next;
        }
        tmp = tmp->next;
        if(flag)
        {
            *p = node;
            p = &(node->next);
            *p = NULL;
        }
    }
    return head;
}
