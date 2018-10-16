#include "binary_tree.h"
#include <stdlib.h>

/* Hints on this function
 *   4.1.1 Do *NOT* check for NULL here. We want to allow NULL for "empty" children
 *   4.1.2 Call malloc to create the pointer
 *   4.1.3 This function is responsible for creating a BinaryTree, setting the value, and assigning
 *         the left and right children
 *   4.1.4 The first BinaryTree * is the left child, the second is the right
 */
BinaryTree * BinaryTree_make(int val, BinaryTree * left, BinaryTree * right){
    BinaryTree * parent = malloc(sizeof(BinaryTree));
    parent->left = left;
    parent->right = right;
    parent->value = val;
    return parent;
}

/*     5.1 Hints on this function
 *         5.1.1 Recursively free all the children of the tree *before* freeing the parent
 *         5.1.2 You only need to check if the parent is null
 *         5.1.3 Make sure to call free()
 */
void BinaryTree_free(BinaryTree * tree){
    if(tree == NULL){return;}
    else{
	BinaryTree_free(tree->left);
	BinaryTree_free(tree->right);
	free(tree);
    }
}
