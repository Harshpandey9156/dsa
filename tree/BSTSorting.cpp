#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> verticalTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) {
        return result;
    }


    map<int, vector<int>> columns;

   
    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        int size = q.size();
        map<int, vector<int>> levelColumns;

        for (int i = 0; i < size; ++i) {
            auto [node, col] = q.front();
            q.pop();
            

            levelColumns[col].push_back(node->val);

            if (node->left) {
                q.push({node->left, col - 1});
            }

            if (node->right) {
                q.push({node->right, col + 1});
            }
        }
 
        for (const auto& entry : levelColumns) {
            columns[entry.first].insert(columns[entry.first].end(), entry.second.begin(), entry.second.end());
        }
    }
 
    for (const auto& entry : columns) {
        result.insert(result.end(), entry.second.begin(), entry.second.end());
    }

    return result;
}

int main() {
    // Example usage:
    // Construct a sample binary search tree
    //       3
    //      / \
    //     1   5
    //    / \   \
    //   0   2   6
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(6);

    vector<int> sortedOrder = verticalTraversal(root);

    // Print the result
    for (int val : sortedOrder) {
        cout << val << " ";
    }


    return 0;
}
