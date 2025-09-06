#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/*  This is a node struct for a binary search tree.
    *left: Stores a node struct with a lesser value than itself.
    *right: Stores a node struct with a greater value than itself.
    value: Stores the current value of the node (0-255). */
typedef struct BSTNode
{
    struct BSTNode *left;
    struct BSTNode *right;
    unsigned char value;
} BSTNode;

static BSTNode * CreateBSTNode(unsigned char val)
{
    BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->value = val;

    return newNode;
}

void AddBSTNode(BSTNode *node, unsigned char newValue)
{
    if(node == NULL)
    {
        node = CreateBSTNode(newValue);
        return;
    }

    if(node->value > newValue) { AddBSTNode(node->left, newValue); printf("Going Left\n"); }
    else { AddBSTNode(node->right, newValue); printf("Going Right\n"); }
}

char * FindBSTNode(BSTNode *node, unsigned char target)
{
    static char buffer[50] = "";

    if (node == NULL) 
    { 
        sprintf(buffer, "Target (%d) Not Found...", target);
        return buffer; 
    }

    else if(node->value == target) 
    { 
        sprintf(buffer, "Target (%d) Found!!!", target);
        return buffer; 
    }

    else if(node->value > target) { return FindBSTNode(node->left, target); }
    else { return FindBSTNode(node->right, target);; }
}

void TraverseBST(BSTNode *node)
{
    if(node == NULL) { return; }

    printf("%u\n", node->value);

    // int i = 0;

    TraverseBST(node->left);
    TraverseBST(node->right);
}