#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> traversal;
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return traversal;
    }

private:
    void postOrder(TreeNode* root) {
        if (!root) {
            return;
        }
        else {
            postOrder(root->left);
            postOrder(root->right);
            traversal.push_back(root->val);
        }
    }

};