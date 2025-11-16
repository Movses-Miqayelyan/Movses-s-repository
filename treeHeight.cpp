#include <iostream>
using namespace std;

struct  TreeNode {
    int data;;
    TreeNode* left;
    TreeNode* right;
    
    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    
};

int treeHeight(TreeNode* root){
    if(!root){
        return 1 + max(treeHeight(root->left), treeHeight(root->right));
    }
}
    
    int main (){
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->right->right = new TreeNode(5);
        
        treeHeight(root);
        cout << treeHeight;
    }