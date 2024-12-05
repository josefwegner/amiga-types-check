#include <stdio.h>

int main()
{
    char charType;
    short shortType;
    int integerType;
    long longType;
    long long longLongType;
    void *voidType;

    printf("Size of char is: %ld\n", sizeof(charType));

    printf("Size of short is: %ld\n", sizeof(shortType));

    printf("Size of int is: %ld\n", sizeof(integerType));

    printf("Size of long is: %ld\n", sizeof(longType));

    printf("Size of long long is: %ld\n", sizeof(longLongType));

    printf("Size of void* is: %ld\n", sizeof(voidType));

    printf("MAXCHAR:     %d, + 1: %d\n",     (signed char) ((1ULL <<  7ULL) - 1ULL), (signed char) (1ULL <<  7ULL));
    printf("MAXSHORT:    %d, + 1: %d\n",     (short)       ((1ULL << 15ULL) - 1ULL), (short)       (1ULL << 15ULL));
    printf("MAXINT:      %ld, + 1: %ld\n",   (int)         ((1ULL << 31ULL) - 1ULL), (int)         (1ULL << 31ULL));
    printf("MAXLONG:     %ld, + 1: %ld\n",   (long)        ((1ULL << 31ULL) - 1ULL), (long)        (1ULL << 31ULL));
    printf("MAXLONGLONG: %lld, + 1: %lld\n", (long long)   ((1ULL << 63ULL) - 1ULL), (long long)   (1ULL << 63ULL));

    return 0;
}
