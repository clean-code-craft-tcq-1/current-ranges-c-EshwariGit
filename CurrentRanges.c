#include "CurrentRanges.h"
#include <stdio.h>


BreachType inferRange(int listofvalues,int *CurrentRange,int *BreachType)
{
    int i,count = 0;
    for(i=0;i<listofvalues;i++)
    {
        if((CurrentRange[i] >= BreachType[0]) && (CurrentRange[i] <= BreachType[1]))
        {
            count++;
        }
    }
    return count;
}



// Print to console
