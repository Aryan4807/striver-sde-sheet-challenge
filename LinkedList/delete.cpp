 void deleteNode(ListNode* node) {
        ListNode* temp=node;
        // ListNode* temp=NULL;
        ListNode* temp1=node->next;
        temp->val=temp1->val;
        temp->next=temp1->next;
        // temp=temp->next;
    }