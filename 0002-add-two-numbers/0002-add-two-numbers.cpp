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
        ListNode* head = nullptr;  // Initialize the head of the result list
        ListNode* tail = nullptr;  // Tail to track the last node for easy appending
        int carry = 0;  // Variable to track carry over
        
        // Loop until both lists are exhausted and there's no carry
        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;  // Start with the carry from the previous iteration
            
            if (l1 != nullptr) {
                sum += l1->val;  // Add value from l1 if available
                l1 = l1->next;  // Move to the next node in l1
            }
            
            if (l2 != nullptr) {
                sum += l2->val;  // Add value from l2 if available
                l2 = l2->next;  // Move to the next node in l2
            }
            
            carry = sum / 10;  // Compute the new carry
            sum = sum % 10;  // The new value of the node
            
            // Create the new node for the result list
            ListNode* newNode = new ListNode(sum);
            
            // If the list is empty, initialize the head
            if (head == nullptr) {
                head = newNode;
                tail = head;  // Tail will track the last node for easy appending
            } else {
                tail->next = newNode;  // Append the new node
                tail = newNode;  // Move the tail to the new last node
            }
        }

        return head;  // Return the resulting linked list
    }
};
