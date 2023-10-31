//
// Created by Admin on 26.10.2023.
//
#include "itrofimov_sort.h"

ITrofimov::TreeNode::TreeNode(int value) :
    data(value), left(nullptr), middle(nullptr), right(nullptr) {}

ITrofimov::TernaryTree::TernaryTree() : root(nullptr) {}

void ITrofimov::TernaryTree::add(int value) {
    root = insert(root, value);
}

void ITrofimov::TernaryTree::treeprint(int arr[], int n, int i) {
    tprint(root, arr, n, i);
}

ITrofimov::TreeNode* ITrofimov::TernaryTree::insert(
        TreeNode* node,
        int value
        ) {
    if (node == nullptr) {
        return new TreeNode(value);
    }

    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value == node->data) {
        node->middle = insert(node->middle, value);
    } else {
        node->right = insert(node->right, value);
    }

    return node;
}

void ITrofimov::TernaryTree::tprint(TreeNode* node, int arr[], int n, int i) {
    if (node != nullptr) {
        tprint(node->left, arr, n, i);
        arr[i] = node->data;
        i++;
        //std::cout << node->data << " ";
        tprint(node->middle, arr, n, i);
        tprint(node->right, arr, n, i);
    }
}


void ITrofimov::DtSort(int a[], const int n) {
    int ans[n];
    TernaryTree tree;
    for (int i = 0; i < n; i++){
        tree.add(a[i]);
    }
    tree.treeprint(ans, n, 0);
}