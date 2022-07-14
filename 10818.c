#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[1000000];
    int num, max=-1000000, min=1000000;
    int a, b, c; 

    // Input Number
    scanf("%d", &num);

    // Version 1
    for (a = 0; a < num; a++) {
        scanf("%d", &arr[a]);
        if (arr[a] > max)
            max = arr[a];
        if (arr[a] < min)
            min = arr[a];
    }
    printf("%d %d", min, max);

    /* Version 2 : Bubble Sort (High) - Time Over
    for (a = 0; a < num; a++) {
        scanf("%d", &arr[a]);
        for (b = 0; b < num-1; b++) {
            for (c = 0; c < num-b-1; c++) {
                if (arr[c] > arr[c+1]) {
                    int temp;
                    temp = arr[c];
                    arr[c] = arr[c+1];
                    arr[c+1] = temp;
                }
            }
        }
    }
    printf("%d %d", arr[0], arr[num-1]); */

return 0;
}