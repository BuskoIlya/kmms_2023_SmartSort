//
// Created by Admin on 26.10.2023.
//

#ifndef SMARTSORT_ITROFIMOV_SORT_H
#define SMARTSORT_ITROFIMOV_SORT_H

namespace ITrofimov{

    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* middle;
        TreeNode* right;
        TreeNode(int value);
    };


    class TernaryTree {
    public:
        TernaryTree();
        void add(int value);
        void treeprint(int arr[], int n, int i);

    private:
        TreeNode* root;
        TreeNode* insert(TreeNode* node, int value);
        void tprint(TreeNode* node, int arr[], int n, int i);
    };


    void DtSort(int a[], const int n);
}

#endif //SMARTSORT_ITROFIMOV_SORT_H
