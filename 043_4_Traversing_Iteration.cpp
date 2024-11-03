#include<iostream>
#include<stack>
using namespace std;

class Node {
    public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * build(Node * root) {
    int data;
    cout << "Enter data: ";
    cin >> data;
    if (data == -1) return NULL;

    root = new Node(data);

    cout << "Enter left of " << data << endl;
    root->left = build(root->left);

    cout << "Enter right of " << data << endl;
    root->right = build(root->right);

    return root;
}

// Recursive Inorder Traversal
void inOrder(Node * root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Iterative Inorder Traversal
void iteration_in_order(Node * root) {
    stack<Node *> st;
    Node * temp = root;
    
    while (temp != NULL || !st.empty()) {
        while (temp != NULL) {
            st.push(temp);
            temp = temp->left;
        }
        temp = st.top();
        st.pop();
        cout << temp->data << " ";
        temp = temp->right;
    }
}

// Iterative Preorder Traversal
void iteration_pre_order(Node * root) {
    if (root == NULL) return;
    
    stack<Node *> st;
    st.push(root);
    
    while (!st.empty()) {
        Node * temp = st.top();
        st.pop();
        cout << temp->data << " ";
        
        if (temp->right) st.push(temp->right);
        if (temp->left) st.push(temp->left);
    }
}

// Iterative Postorder Traversal using Two Stacks
void iteration_post_order(Node * root) {
    if (root == NULL) return;
    
    stack<Node *> st1, st2;
    st1.push(root);
    
    while (!st1.empty()) {
        Node * temp = st1.top();
        st1.pop();
        st2.push(temp);
        
        if (temp->left) st1.push(temp->left);
        if (temp->right) st1.push(temp->right);
    }
    
    while (!st2.empty()) {
        Node * temp = st2.top();
        st2.pop();
        cout << temp->data << " ";
    }
}

// Recursive Preorder Traversal
void preOrder(Node * root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Recursive Postorder Traversal
void postOrder(Node * root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node * root = NULL;
    root = build(root);
    // Example input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    
    cout << "Inorder (Recursive): ";
    inOrder(root);
    
    cout << endl << "Inorder (Iterative): ";
    iteration_in_order(root);
    
    cout << endl << "Preorder (Recursive): ";
    preOrder(root);
    
    cout << endl << "Preorder (Iterative): ";
    iteration_pre_order(root);
    
    cout << endl << "Postorder (Recursive): ";
    postOrder(root);
    
    cout << endl << "Postorder (Iterative): ";
    iteration_post_order(root);
}
