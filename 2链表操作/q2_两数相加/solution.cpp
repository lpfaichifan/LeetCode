class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode tmp(0);
        ListNode* p_tmp = &tmp;
        int sign = 0;//记录两位相加是否进1
        while (l1 !=NULL || l2 != NULL || sign)
        {
            int a = 0;
            int b = 0;
            int tmps = 0;
            if (l1 !=NULL)
            {
                a = l1->val;
            }
            if (l2 != NULL)
            {
                b = l2->val;
            }
            
            tmps = (a+b+sign)%10;
            sign = (a+b+sign)/10;

            ListNode* next = new ListNode(tmps);
            next->val = tmps;
            p_tmp->next = next;
            p_tmp = p_tmp->next;
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        p_tmp = tmp.next;
        return p_tmp;
        
    }
};