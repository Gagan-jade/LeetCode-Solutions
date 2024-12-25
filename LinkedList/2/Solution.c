typedef struct ListNode* NODE;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    NODE cur=head;
    int count=0;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    while (cur!=NULL) {
        count++;
        cur=cur->next;
    }
    count=count-n;
    if(count==0)
    {
        NODE temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        return head;
    }
    NODE prev;
    cur=head;
    for (int i=0; i<count; i++)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=cur->next;
    cur->next=NULL;
    free(cur);
    return head;
}