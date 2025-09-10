#ifndef BST_H
#define BST_H

/** 
* @struct BSTNode
* @brief A node used to create a Binary Search Tree (BST).
* 
* @var BSTNode::left
*   Stores a node struct with a lesser value than itself.
*
* @var BSTNode::right
*   Stores a node struct with a greater value than itself.
*
* @var BSTNode::value
*   Stores the current value of the node (0-255). 
*/
typedef struct BSTNode
{
    struct BSTNode *left;
    struct BSTNode *right;
    unsigned char value;
} BSTNode;

BSTNode * CreateBSTNode(unsigned char);
BSTNode * AddBSTNode(BSTNode *, unsigned char);
char *FindBSTNode(BSTNode *, unsigned char);
void TraverseBST(BSTNode *);

#endif