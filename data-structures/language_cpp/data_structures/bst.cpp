#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* insert(Node* root, int val) {
        if (!root) return new Node(val);
        if (val < root->data) root->left = insert(root->left, val);
        else if (val > root->data) root->right = insert(root->right, val);
        return root;
    }

    void inorder(Node* root) {
        if (!root) return;
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
};

int main() {
    BST bst;
    Node* root = nullptr;
    root = bst.insert(root, 50);
    bst.insert(root, 30);
    bst.insert(root, 70);
    bst.insert(root, 20);

    std::cout << "Árvore Binária de Busca (Inorder - C++): ";
    bst.inorder(root);
    std::cout << std::endl;
    return 0;
}
