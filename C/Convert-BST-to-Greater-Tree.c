/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void compute(struct TreeNode* root, int* sum) {
    if(!root) return;
    compute(root->right, sum);
    *sum += root->val;
    root->val = *sum;
    compute(root->left, sum);
}

struct TreeNode* convertBST(struct TreeNode* root){
    int sum = 0;
           
    compute(root, &sum);
        
    return root;
}
