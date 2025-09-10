#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "bst.h"
#include "utils.h"

BSTNode * CreateBSTNode(unsigned char val)
{
    BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->value = val;

    return newNode;
}

BSTNode * AddBSTNode(BSTNode *node, unsigned char newValue)
{
    if(node == NULL)
    {
        return CreateBSTNode(newValue);
    }
    
    if(node->value > newValue) 
    { 
        node->left = AddBSTNode(node->left, newValue); 
    }
    
    else 
    { 
        node->right = AddBSTNode(node->right, newValue); 
    }

    return node;
}

char * FindBSTNode(BSTNode *node, unsigned char target)
{
    static char buffer[90] = "";

    if (node == NULL) 
    { 
        sprintf(buffer, "Target (%d) Not Found... Total time used for search: %.5f Seconds.\n", target, GetTotalTimePassed());
        return buffer; 
    }

    else if(node->value == target) 
    { 
        sprintf(buffer, "Target (%d) Found!!! Total time used for search: %.5f Seconds.\n", target, GetTotalTimePassed());
        return buffer; 
    }

    else if(node->value > target) 
    {   
        return FindBSTNode(node->left, target); 
    }
    
    else 
    { 
        return FindBSTNode(node->right, target); 
    }
}

void TraverseBST(BSTNode *node)
{
    if(node == NULL) { return; }

    printf("%u\n", node->value);

    // int i = 0;

    TraverseBST(node->left);
    TraverseBST(node->right);
}