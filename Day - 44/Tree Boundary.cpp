void leftNode(TreeNode* root,vector<int> &ans) {
    if(!root || (root->left == NULL && root->right == NULL))  return;

    ans.push_back(root->val);
    if(root->left) leftNode(root->left,ans);
    else leftNode(root->right,ans);
}

void leafNode(TreeNode* root,vector<int> &ans) {
    if(!root) return;
    if(root->left == NULL && root->right == NULL){
    ans.push_back(root->val);
    return;
    }

    leafNode(root->left,ans);
    leafNode(root->right,ans);
}

void rightNode(TreeNode* root,vector<int>&ans) {
    if(!root || (root->left == NULL && root->right == NULL))  return;

    if(root->right) rightNode(root->right,ans);
    else rightNode(root->left,ans);

    ans.push_back(root->val);
}

vector<int> solve(TreeNode* root){
//CODE HERE 
 vector<int>ans;
 if(!root) return ans;

 ans.push_back(root->val);
 leftNode(root->left,ans);
 leafNode(root->left,ans);
 leafNode(root->right,ans);
 rightNode(root->right,ans);
 return ans;
}