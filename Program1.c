// #include<stdio.h>
// void main(){
//     int a,b,sum;
//     a=49;
//     b=50;
//     sum=a+b;
//     printf("%d",sum);
// }

#include<stdio.h>
int main(){
    int n,i;
    int arr[n];
    printf("Enter size of Array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("array is : %d ",arr[i]);
    }
    printf("\n");
    return 0;
}
