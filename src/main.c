#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main(void)
{
    srand((unsigned char)time(NULL));

    const unsigned char MIN_RANGE = 1;
    const unsigned char MAX_RANGE = 255;

    const unsigned char NODE_COUNT = MIN_RANGE + rand() % (MAX_RANGE - MIN_RANGE + 1);

    BSTNode tree;
    tree.value = 0;

    for(unsigned char i = 0; i < NODE_COUNT; i++)
    {
        unsigned char nodeValue = MIN_RANGE + rand() % (MAX_RANGE - MIN_RANGE + 1);

        AddBSTNode(&tree, nodeValue);
    }

    TraverseBST(&tree);

    return 0;
}