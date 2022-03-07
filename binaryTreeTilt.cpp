#include<bits/stdc++.h>
using namespace std;
#define print(s,n) cout<<s<<" "<<n<<endl;
#define msj(s) cout<<s<<endl; 
#define fora(m) for(auto l:m) cout<<l<<" "; cout<<endl;
/*terminado y aceptado*/
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){} 
};
int auxFindTilt(TreeNode *root, vector<int> &v){
    if(root==nullptr)
        return 0;
    int h, f;
    h = auxFindTilt(root->left, v);
    f = auxFindTilt(root->right, v);
    v.push_back(abs(h-f));
    return root->val + h + f;
}
int findTilt(TreeNode *root){
    if(root==nullptr)
        return 0;
    vector<int> v;
    auxFindTilt(root, v);
    for(int i=1; i<v.size(); i++)
        v[0]+=v[i];
    return v[0];
}
/*
//Esto hace otra cosa, pero igual y me podria sevir como hice las llamadas 
//Resto sus hijos (der e izq) de un nodo cualquiera y la respuesta es la suma de todas los nodos
int findTilt(TreeNode * root){
    if(root==nullptr)
        return 0;
    int l=0, r=0;
    if(root->left!=nullptr)
        l=root->left->val;
    if(root->right!=nullptr)
        r=root->right->val;
    return abs(l-r)+findTilt(root->left)+findTilt(root->right);
}
*/
int main(){
/*
                3
              /   \
             5     1
            / \   / \  
           6  2  0   8
             / \
            7   4
           /
          3
*/

    TreeNode* root = new TreeNode(3);
   
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(7);
    root->left->right->left->left = new TreeNode(3);
    root->left->right->right = new TreeNode(4);
    
    root->right = new TreeNode(1);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    int k = findTilt(root);
    msj(k)
    
    return 0;
}