#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "utils.h"
#include <time.h>

static void UseBST()
{
    const unsigned char NODE_COUNT = GetRandomInteger();

    BSTNode tree = *CreateBSTNode(NODE_COUNT);

    for(unsigned char i = 0; i < NODE_COUNT; i++)
    {
        AddBSTNode(&tree, GetRandomInteger());
    }

    const unsigned char TARGET_VALUE = GetRandomInteger();

    printf("Locating Target: %d\n", TARGET_VALUE);

    printf("%s", FindBSTNode(&tree, TARGET_VALUE));

    // TraverseBST(&tree);
}

int main(void)
{
    srand((unsigned char)time(NULL));

    UseBST();

    return 0;
}