// 设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
// push(x) —— 将元素 x 推入栈中。
// pop() —— 删除栈顶的元素。
// top() —— 获取栈顶元素。
// getMin() —— 检索栈中的最小元素。
//  
// 示例:
// 输入：
// ["MinStack","push","push","push","getMin","pop","top","getMin"]
// [[],[-2],[0],[-3],[],[],[],[]]
// 输出：
// [null,null,null,null,-3,null,0,-2]
// 解释：
// MinStack minStack = new MinStack();
// minStack.push(-2);
// minStack.push(0);
// minStack.push(-3);
// minStack.getMin();   --> 返回 -3.
// minStack.pop();
// minStack.top();      --> 返回 0.
// minStack.getMin();   --> 返回 -2.
//  
// 提示：
// pop、top 和 getMin 操作总是在 非空栈 上调用。

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
class MinStack {
    struct Node {
     int val;
     int min;
     Node *next;
     Node(int x, int y) : val(x), min(y), next(NULL) {}
};

public:
    /** initialize your data structure here. */
    MinStack() {
        head = NULL;
    }
    
    void push(int x) {
        if(head == NULL)
        {
            head = new Node(x, x);
        }
        else
        {
            int tmp = head->min > x ? x : head->min;
            Node *cur = new Node(x, tmp);
            cur->next = head;
            head = cur;
        }
        
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->min;
    }
    Node * head;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */