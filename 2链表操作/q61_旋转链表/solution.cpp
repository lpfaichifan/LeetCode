//1遍历链表获取链表长度,并将尾指针与头指针相连，形成单向环形链表
//2旋转步数对链表长度求余，如果等于0返回原来的链表，否则移动尾指针，步数为链表长度减去旋转步数
//3将尾指针断开，使其变成单链表返回
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
        {
            return head;
        }
        ListNode* tail = head;
        int len = 1;
        while(tail->next)
        {
            len+=1;
            tail = tail->next;
        }
        tail->next = head;
        if(k%len)
        {
            k = k%len;
            for(int i = 0; i<len-k; i++)
            {
                tail = tail->next;
            }
        }
        ListNode* res = tail->next;
        tail->next = NULL;
        return res;
    }
};