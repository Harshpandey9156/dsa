#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int n) {
        this->data = n;
        this->left = NULL;
        this->right = NULL;
    }
};

// building a tree 
Node* buildTree() {
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter data for left of "<<data<<": ";
    root->left = buildTree();
    cout<<"Enter data for right of "<<data<<": ";   
    root->right = buildTree();
    return root;
}

// print the tree
void printTree(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}
//converting the noramol tree to binary tree
__convert_from_v




//sorting the binary tree
void sortTree(Node* root) {
    if (root == NULL) {
        return;
    }
    sortTree(root->left);
    sortTree(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = buildTree();
    cout << "Tree elements are: ";
    printTree(root);
    cout<<"printing the sorting the array elements:"<<endl;
    sortTree(root);

    return 0;
}
