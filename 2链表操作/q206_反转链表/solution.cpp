//利用头插法特点翻转
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
        {
            return head;
        }
        ListNode* tmp = head;
        ListNode* ret = new ListNode(0);
        while(tmp)
        {
            ListNode* newlist = new ListNode(tmp->val);
            newlist->next = ret->next;
            ret->next = newlist;
            tmp = tmp->next;
        }
        return ret->next;
    }
};
//就地翻转
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
        {
            return head;
        }
        ListNode* pre = NULL;
        ListNode* cur = head;
        while(cur)
        {
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};