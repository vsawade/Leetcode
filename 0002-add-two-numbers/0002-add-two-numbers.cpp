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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);  // A dummy node to handle edge cases
        ListNode* current = dummyHead;  // Pointer to track the current node in the result list
        int carry = 0;  // Variable to keep track of carry

        // Traverse both lists until both are fully processed
        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;  // Start with carry from previous iteration
            
            if (l1 != nullptr) {
                sum += l1->val;  // Add value from l1 if available
                l1 = l1->next;  // Move to the next node in l1
            }
            
            if (l2 != nullptr) {
                sum += l2->val;  // Add value from l2 if available
                l2 = l2->next;  // Move to the next node in l2
            }
            
            carry = sum / 10;  // Calculate new carry
            current->next = new ListNode(sum % 10);  // Create a new node for the sum's unit digit
            current = current->next;  // Move to the next node
        }

        return dummyHead->next;  // Return the next node of the dummyHead, which is the actual result list
    }
};
