#include <iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    
    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    
};

void preorder(TreeNode* root){
    if (!root){
        return;
    }
        preorder(root->left);
        cout << root->data;
        preorder(root->right);
    }


void inorder(TreeNode* root){
        if (!root){
            return;
        }
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }

void postorder(TreeNode* root){
        if (!root){
            return;
        }
        postorder(root->left);
        cout << root->data;
        postorder(root->right);
    }
    
int main (){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    preorder(root);
    inorder(root);
    postorder(root);
    
}