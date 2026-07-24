/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values ; 

        for(auto l : lists){
            while(l){
                values.push_back(l->val);
                l = l->next;
            }
        }

        sort(values.begin(), values.end());

        ListNode* head = new ListNode(0);
        ListNode* h2 = head;
        
        for(int i = 0; i < values.size(); i++){
            ListNode* dummy = new ListNode(values[i]);
            h2->next = dummy;
            h2 = h2->next;
        }


        return head->next;
    }
};
