class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> tmp;
        ListNode* r;
        int rm_val = 0;
        while(head)
        {
            tmp.push_back(head->val);
            head = head->next;
        }
        int size = tmp.size();
        rm_val = size-n;
        ListNode* ret = new ListNode(0);
        r = ret;
        for(int i = 0; i<size; i++)
        {
            if(rm_val != i)
            {
                ListNode* tmpl = new ListNode(tmp[i]);
                r->next = tmpl;
                r = r->next;
            }
        }
        r->next = NULL;
        return ret->next;
    }
};