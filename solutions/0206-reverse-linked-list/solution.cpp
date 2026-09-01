// LeetCode provides the ListNode definition.
// Reviewed version of the learner's Week 5 submission.
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;

        while (head != nullptr) {
            ListNode* next_node = head->next;
            head->next = previous;
            previous = head;
            head = next_node;
        }

        return previous;
    }
};
