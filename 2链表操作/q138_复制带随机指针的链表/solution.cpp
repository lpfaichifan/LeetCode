//哈希表map
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> umap;
        Node* cur = head;
        while(cur)
        {
            Node* tmp = new Node(cur->val);
            umap[cur] = tmp;
            cur = cur->next;
        }
        cur = head;
        while(cur)
        {
            umap[cur]->next = umap[cur->next];
            umap[cur]->random = umap[cur->random];
            cur = cur->next;
        }
        return umap[head];
    }
};