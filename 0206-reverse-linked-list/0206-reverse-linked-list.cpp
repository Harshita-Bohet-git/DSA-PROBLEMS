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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* perm = nullptr;
        while(temp != nullptr){
            ListNode* nextNode = temp->next;
            temp->next = perm;
            perm = temp;
            temp = nextNode;
        }
        return perm ;
    }
};