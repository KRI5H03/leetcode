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
class Solution {
public:

    TreeNode* solve(TreeNode* t,int x){
        if(t==NULL)return new TreeNode(x);
        if(t->val>x){
            t->left=solve(t->left,x);
        }else{
            t->right=solve(t->right,x);
        }
        return t;
    }
    
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* r=new TreeNode(pre[0]);
        for(int i=1;i<pre.size();i++){
            solve(r,pre[i]);
        }
        return r;
    }
};