//wap to dynamiclly create an array of size 6 capable to store 6 integers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr= (int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value of %d elemen:\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is :%d\n",i,ptr[i]);
    }
return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     float *ptr;
//     ptr= (float*)malloc(6*sizeof(float));
//     for(int i=0;i<6;i++){
//         printf("Enter the value of %d elemen:\n",i);
//         scanf("%f",&ptr[i]);
//     }
//     for(int i=0;i<6;i++){
//         printf("The value of %d element is :%f\n",i,ptr[i]);
//     }
// return 0;
// }
