#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int i, j , k, sum ;
    int matrix1[3][3]={{1, 2, 3}, {1,1,2},{2,3, 2}}, matrix2[3][3]={{1,0,2},{2,1,2},{3,1, 3}}, matrix_sum[3][3], matrix_product[3][3];

    for (i =0 ; i < 3; i++){
        for (j =0 ; j< 3; j++){
            sum=0;
            for(k=0;k<3;k++){
                sum += matrix1[i][k] * matrix2[k][j];
                // printf("%d\n", matrix1[i][k] * matrix2[k][j]);
            }
            matrix_product[i][j] = sum;
        }
    }
    printf("hello world!");
    return 0;
}


// #include <stdio.h>
// int main()
// {

//     int matrix1[3][3]={{1, 2}, {1,1},{2,3}}, matrix2[3][3]={{1,0},{2,1},{3,1}}, matrix_sum[3][3], matrix_product[3][3];
    // printf("Enter the value: ");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter the value of matrix1 %d %d: ", i + 1, j + 1);
    //         scanf("%d", &matrix1[i][j]);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter the value of matrix2 %d %d: ", i + 1, j + 1);
    //         scanf("%d", &matrix2[i][j]);
    //     }
    // }

    //--

//      int i, j , k, sum ;
//     for (i =0 ; i < 3; i++){
//         for (j =0 ; j< 3; j++){
//             su
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", matrix_sum[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");

//     return 0;
// }
