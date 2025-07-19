/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode main;
    main.next=NULL;
    struct ListNode *node=&main;
    int flag=0;
    while(list1!=NULL)
    {
        if(list1->val<list2->val)
        {   
            if(node==NULL)
                node=list1;
            else
                node->next=list1;
            list1=list1->next;
        }
        else{
            if(node==NULL)
                node=list2;
            else
                node->next=list2;
            list2=list2->next;
        }
        node=node->next;
    }
     node->next = (list1 != NULL) ? list1 : list2;
    return main.next;
}