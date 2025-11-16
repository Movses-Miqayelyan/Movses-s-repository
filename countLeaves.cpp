#include <iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    
    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    
};

int countLeaves(TreeNode* root){
    if (root == 0){
        return 0;
    }
    if (root->left==nullptr && root->right==nullptr){
        return 1;
    }
        return (countLeaves(root->left)+countLeaves(root->right));
    }


int main (){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    countLeaves(root);
    cout << countLeaves;
}