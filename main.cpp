#include <stdio.h>
#include "swap.h"
using namespace std;

int main()
{
    int a = 2, b = 4;
    printf("%d %d\n", a, b);
    swap(a, b);
    printf("%d %d\n", a, b);
    printf("???");
    return 0;
}