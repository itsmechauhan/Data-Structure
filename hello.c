#include<stdio.h>
int main()
{
    int array[5]={432,56,65,76,675};

    int i, loop, largest, sec_largest;

    if(largest<array[i])
    {
        largest=array[0];
        sec_largest=array[1];
    }

    else
    {
        largest = array[1];
        sec_largest= array[0];
    }

    for(int i=2; i<5; i++)
    {
        if(largest<array[i])
        {
            sec_largest=largest;
            largest= array[i];
        }

        else if(sec_largest<array[i])
        {
            sec_largest=array[i];
        }
    }

    printf("largest is %d\n, sec_largest %d\n", largest, sec_largest);
    return 0;
}