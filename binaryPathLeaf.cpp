#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void printVectorS(vector<string> v){
    for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
}
void leafs(TreeNode* root, vector<vector<int>> &pathleaf, vector<int> s){
    if(root==nullptr)
        return;
    s.push_back(root->val);
    if(root->left == nullptr && root->right == nullptr)
        pathleaf.push_back(s);
    leafs(root->left, pathleaf, s);
    leafs(root->right, pathleaf, s);
}
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> r;
    vector<vector<int>> v;
    vector<int> s;
    leafs(root, v, s);
    for(int i=0; i<v.size(); i++){
        string p="";
        for(int j=0; j<v[i].size(); j++){
            p+=to_string(v[i][j]);
            if(j<v[i].size()-1)
                p+="->";
        }
        r.push_back(p);
    }
    return r;
}
int main(){
/*
                3
              /   \
             5     1
            / \   / \  
           6  2  0   8
             / \
            7   4
*/
    TreeNode* root = new TreeNode(37);
   
    root->left = new TreeNode(34);
    //root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(100);
    //root->left->right->left = new TreeNode(7);
    //root->left->right->right = new TreeNode(4);
    
    root->right = new TreeNode(48);
    root->right->left = new TreeNode(100);
    root->right->right = new TreeNode(48);
    root->right->right->left = new TreeNode(54);
    root->right->right->left->left = new TreeNode(71);
    root->right->right->left->right = new TreeNode(22);
    root->right->right->left->right->left = new TreeNode(8);
    vector<string> f = binaryTreePaths(root);
    printVectorS(f);
    
    return 0;
}