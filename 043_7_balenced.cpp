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
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL)return true;
//         bool right=isBalanced(root->right);
//         bool left=isBalanced(root->left);
//         bool diff=abs(height(root->right)-height(root->left))<=1;
//         if(right && left && diff) return true;
//         else return false;
//     }
// };