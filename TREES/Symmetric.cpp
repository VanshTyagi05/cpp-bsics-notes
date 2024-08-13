#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;  // An empty tree is symmetric
        }
        return isMirror(root->left, root->right);
    }
    
private:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr && t2 == nullptr) return true;
        if (t1 == nullptr || t2 == nullptr) return false;
        if (t1->val != t2->val) return false;
        
        // Debug output
        std::cout << "Comparing nodes t1: " << t1->val << " and t2: " << t2->val << std::endl;
        
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }
};

// Example Usage:
int main() {
    Solution solution;

    // Constructing a symmetric tree
    //        1
    //       / \
    //      2   2
    //     / \ / \
    //    3  4 4  3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    bool result = solution.isSymmetric(root);
    std::cout << std::boolalpha << "Is the tree symmetric? " << result << std::endl;  // Output: true

    // Clean up the allocated memory
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
