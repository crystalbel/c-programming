#include <stdio.h>

int main()
{
    int test1[5];
    int *test1Ptr;
    int test2[5];
    int *test2Ptr;
    int total[5];
    int *totalPtr;
    int i;

    test1Ptr = test1;
    test2Ptr = test2;
    totalPtr = total;

    //read values dan store ke test1 and test2
    for (i = 0; i < 5; i++)
    {
        printf("Masukkan Test 1 dan Test 2: ");
        scanf("%d %d", (test1Ptr + i), (test2Ptr + i));
    }

    printf("\n");

    //print isi array test1 and test2
    for (i = 0; i < 5; i++)
    {
        printf("Test1[%d] = %d Test2[%d] = %d\n", i, *(test1Ptr + i), i, *(test2Ptr + i));
    }

    printf("\n");

    //sum test1 dan test2 kemudian di store di array total lalu di print
    for (i = 0; i < 5; i++)
    {
        *(totalPtr + i) = *(test1Ptr + i) + *(test2Ptr + i);
        printf("Total[%d] = %d\n", i, *(totalPtr + i));
    }

    return 0;
}
