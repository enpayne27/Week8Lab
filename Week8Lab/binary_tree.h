//
// binary_tree.h
// Week 8
//
// Created by Erin Payne

#ifndef binary_tree_h
#define binary_tree_h

typedef struct BinaryTree
{
    int value;
    struct BinaryTree * left;
    struct BinaryTree * right;
}BinaryTree;

BinaryTree * BinaryTree_make(int, BinaryTree *, BinaryTree *);
void BinaryTree_free(BinaryTree *);

#endif /* binary_tree_h */
