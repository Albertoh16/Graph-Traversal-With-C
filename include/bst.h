#ifndef BST_H
#define BST_H

typedef struct BSTNode
{
    struct BSTNode *left;
    struct BSTNode *right;
    unsigned char value;
} BSTNode;

void AddBSTNode(BSTNode *, unsigned char);
char *FindBSTNode(BSTNode *, unsigned char);
void TraverseBST(BSTNode *);

#endif