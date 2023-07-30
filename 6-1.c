#include <stdio.h>


int main() {
    int NumberArray[10];
    int i;
    for(i = 0; i < 10; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &NumberArray[i]);
    }

    int min = NumberArray[9], max = NumberArray[9];
    int sum = 0, p = 0;
    float avg;
    int reverseArray[10];

    for(i = 9; i >= 0; --i) {
        if(min > NumberArray[i]) {
            min = NumberArray[i];
        }

        if(max < NumberArray[i]) {
            max = NumberArray[i];
        }

        sum += NumberArray[i];

        reverseArray[p] = NumberArray[i];
        p += 1;
    }

    avg = (float) sum / 10;

    printf("----------------------------------\n");
    printf("I.      Minimum value: %d\n", min);
    printf("II.     Maximum value: %d\n", max);
    printf("III.    Average value: %.2f\n", avg);
    printf("IV.     Reverse order of values: {");
    for(i = 0; i < 10; ++i) {
        printf("%d", reverseArray[i]);
        if(i != 9) {
            printf(", ");
        }else {
            printf("}\n");
        }
    }
    printf("----------------------------------\n");
}
