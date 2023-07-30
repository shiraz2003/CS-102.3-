#include <stdio.h>

int main(){

    //Practical 7



    //Question 1
    /*
    int arraySize;
    int p = 0, n = 0, z = 0;
    printf("Enter Size of the Array: ");
    scanf("%d",&arraySize);

    int arr[arraySize];
    for(int i = 0; i<arraySize; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            ++p;
        }else if(arr[i] < 0) {
            ++n;
        }else {
            ++z;
        }
    }

    printf("-------------------------\n");
    printf("No. of Positive: %d\n",p);
    printf("No. of Negative: %d\n",n);
    printf("No. of Zero: %d",z);
    printf("\n-------------------------\n");



    //Question 2

    int column, row;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int multiArr[row][column], i, j;
    int p = 0, n = 0, z = 0;
    for(i = 0; i < row; ++i) {
        for(j = 0; j <column; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &multiArr[i][j]);
            if(multiArr[i][j] > 0) {
                ++p;
            }else if(multiArr[i][j] < 0) {
                ++n;
            }else {
                ++z;
            }
        }
    }
    printf("-------------------------\n");
    printf("No. of Positive: %d\n",p);
    printf("No. of Negative: %d\n",n);
    printf("No. of Zero: %d",z);
    printf("\n-------------------------\n")



    //Question 3

    int row, column, i, j;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int arr[row][column];
    int sum[row];

    for(i = 0; i < row; ++i) {
        sum[i] = 0;
        for(j = 0; j < column; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }
    printf("-------------------------\n");
    printf("Sum = {");
    for(i = 0; i < row; ++i) {
        printf("%d", sum[i]);
        if(i < row-1) {
            printf(", ");
        }
        else {
            printf("}");
        }
    }
    printf("\n-------------------------\n");



    //Question 4

    int row, column, i, j;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int arr[row][column];
    int sum[column];

    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            if(!i){
                sum[j] = 0;
            }
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum[j] += arr[i][j];
        }
    }
    printf("-------------------------\n");
    printf("Sum = {");
    for(i = 0; i < column; ++i) {
        printf("%d", sum[i]);
        if(i < column-1) {
            printf(", ");
        }
        else {
            printf("}");
        }
    }
    printf("\n-------------------------\n");



    //Question 5

    int arr[3][3], i, j;
    for(i = 0; i < 3; ++i ) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);

        }
    }
    printf("-------------------------\n");
    printf("3x3 Array = {");
    for(i = 0; i < 3; ++i ) {
        printf("{");
        for(j = 0; j < 3; ++j) {
            printf("%d", arr[i][j]);
            if(j < 2) {
                printf(", ");
            }
            else {
                printf("}");
            }
        }
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");

    int diagonal1[3], diagonal2[3];
    for(i = 0, j = 2; i < 3 && j >= 0; ++i, --j) {
        diagonal1[i] = arr[i][i];
        diagonal2[i] = arr[i][j];
    }

    printf("Diagonal 1 = {");
    for(i = 0; i < 3; ++i) {
        printf("%d",diagonal1[i]);
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }

    printf("Diagonal 2 = {");
    for(i = 0; i < 3; ++i) {
        printf("%d",diagonal2[i]);
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");



    //Question 6

    int arrSize;
    printf("Enter Size of Square Matrix: ");
    scanf("%d", &arrSize);

    int i, j;
    int arr[arrSize][arrSize];
    for(i = 0; i < arrSize; ++i ) {
        for(j = 0; j < arrSize; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int tru = 1;
    for(i = 0; i < arrSize; ++i) {
        for(j = 0; j < arrSize; ++j) {
            if(i==j) {
                if(arr[i][j] != 1){
                    tru = 0;
                    break;
                }
            }else {
                if(arr[i][j] != 0) {
                    tru = 0;
                    break;
                }
            }
        }
    }

    printf("-------------------------\n");
    if(tru) {
        printf("It is an Identity Matrix.\n");
    }else {
        printf("It is not an Identity Matrix.\n");
    }
    printf("-------------------------\n");



    //Question 7

    int row, column;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int arr[row][column], i, j;
    for(i = 0; i < row; ++i ) {
        for(j = 0; j < column; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);

        }
    }

    int transpose[column][row];
    printf("-------------------------\n");
    printf("%dx%d Array = {", row, column);
    for(i = 0; i < row; ++i ) {
        printf("{");
        for(j = 0; j < column; ++j) {
            printf("%d", arr[i][j]);
            if(j < column - 1) {
                printf(", ");
            }
            else {
                printf("}");
            }
            transpose[j][i] = arr[i][j];
        }
        if(i < row - 1) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }

    printf("Transpose Array = {");
    for(i = 0; i < column; ++i ) {
        printf("{");
        for(j = 0; j < row; ++j) {
            printf("%d", transpose[i][j]);
            if(j < row - 1) {
                printf(", ");
            }
            else {
                printf("}");
            }
        }
        if(i < column - 1) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");



    //Question 8

    int arr1[3][3], i, j;
    printf("Array 1:\n");
    for(i = 0; i < 3; ++i ) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);

        }
    }

    int arr2[3][3];
    printf("Array 2:\n");
    for(i = 0; i < 3; ++i ) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);

        }
    }
    int product[3][3];
    int a;
    for(i = 0; i < 3; ++i ) {
        for(j = 0; j < 3; ++j) {
            product[i][j] = 0;
            for(a = 0; a < 3; ++a) {
                product[i][j] += (arr1[a][j]*arr2[i][a]);
            }
        }
    }

    printf("-------------------------\n");
    printf("Product = {");
    for(i = 0; i < 3; ++i ) {
        printf("{");
        for(j = 0; j < 3; ++j) {
            printf("%d", product[i][j]);
            if(j < 2) {
                printf(", ");
            }
            else {
                printf("}");
            }
        }
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");

*/







}
