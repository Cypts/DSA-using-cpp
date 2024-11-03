/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// private:
//     int height(TreeNode* root)
//     {
//         if(root==NULL) return 0;
//         int right=height(root->right);
//         int left=height(root->left);
//         return max(right,left)+1;
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
//         int right=diameterOfBinaryTree(root->right);
//         int left=diameterOfBinaryTree(root->left);
//         int mid=height(root->right)+height(root->left);
//         return max(right,max(left,mid));        
//     }
// };