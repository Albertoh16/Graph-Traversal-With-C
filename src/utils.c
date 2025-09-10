#include <stdlib.h>
#include <time.h>

#define MIN_RANGE 1
#define MAX_RANGE 255

clock_t startTime;

unsigned char GetRandomInteger()
{
    return MIN_RANGE + rand() % (MAX_RANGE - MIN_RANGE + 1);
}

void SetStartTime()
{
    startTime = clock();
}

double GetTotalTimePassed()
{
    return ((double)clock() - startTime) / CLOCKS_PER_SEC;
}