/*
Link: https://leetcode.com/problems/binary-tree-level-order-traversal/

Problem: 102. Binary Tree Level Order Traversal
Difficulty: Medium
Statement: 102. Binary Tree Level Order Traversal
Medium

Company Tags: LinkedIn | Amazon | Microsoft | Facebook | Bloomberg | Oracle | Google | ServiceNow | Apple

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).



Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []


Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){} ;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){} ;
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
};

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> res;
    if (root == NULL)
        return res;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int sz = q.size();
        vector<int> row(sz, 0);
        for (int i = 0; i < sz; i++)
        {
            TreeNode *node = q.front();
            q.pop();
            row[i] = node->val;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        res.push_back(row);
    }

    return res;
}
