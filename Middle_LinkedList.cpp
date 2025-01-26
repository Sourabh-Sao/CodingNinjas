// here we have to find the middle of the linked list and return the middle node of the linked list.

// To find the middle of a linked list, you can use the two-pointer technique:

// Initialize Two Pointers: Start with two pointers, slow and fast, both pointing to the head of the linked list.

// Move Pointers: Move slow one step at a time and fast two steps at a time.

// Stop Condition: When fast reaches the end of the list (or the node before the end in case of an even number of nodes), slow will be at the middle of the list.

// This approach ensures that slow will be at the middle when fast reaches the end, as fast moves twice as fast as slow.


// Node *findMiddle(Node *head) {
//     // Write your code here

//     if(head==NULL){
//         return NULL;
//     }
    
//     Node *slow=head;
//     Node *fast=head;

//     while(fast!=nullptr && fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next->next;
//     }

//     return slow;
// }

