class Solution {
public:
    void Inserttail(Node *& head, int data, Node *& tail) {
        Node * temp = new Node(data);
        temp->next = nullptr;

        if (head == nullptr) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    Node* copyList(Node *head) {
        if (head == nullptr) return nullptr;

        Node *current = head;
        Node *cloneHead = nullptr;
        Node *cloneTail = nullptr;
        Node *temp;

        // Step 1: Create a deep copy of nodes
        while (current != nullptr) {
            Inserttail(cloneHead, current->data, cloneTail);
            current = current->next;
        }

        // Step 2: Interleave original and cloned nodes
        Node *original = head;
        Node *clone = cloneHead;
        while (original != nullptr) {
            temp = original->next;
            original->next = clone;
            original = temp;

            if (original != nullptr) {
                clone->next = original;
                clone = clone->next;
            } else {
                clone->next = nullptr;
            }
        }

        // Step 3: Assign random pointers
        original = head;
        clone = cloneHead;
        while (original != nullptr) {
            if (original->random != nullptr) {
                clone->random = original->random->next;
            }
            original = original->next->next;
            if (original != nullptr) {
                clone = clone->next;
            }
        }

        // Step 4: Separate the cloned list from the interleaved list
        Node *newHead = cloneHead;
        original = head;
        clone = cloneHead;
        while (original != nullptr) {
            original->next = clone->next;
            original = original->next;
            if (original != nullptr) {
                clone->next = original->next;
                clone = clone->next;
            }
        }

        return newHead;
    }
};
