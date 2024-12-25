
typedef struct ListNode* NODE;
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL)
        return head;
    if (head->next == NULL)
        return head;
    if (k == 0)
        return head;
    NODE cur,prev;
    cur = head;
    int n=0;
    while(cur!=NULL){
        cur = cur->next;
        n++;
    }
    k = k%n;
    cur = head;
    for(int i=0;i<k;i++){
        while(cur->next!=NULL){
            prev = cur;
            cur = cur->next;
        }
        prev->next = NULL;
        cur->next = head;
        head = cur;
    }
    return head;
}