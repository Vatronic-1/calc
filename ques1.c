#include<stdio.h>
int main(){
    int n,i ;
    float sum=0, avg;
    printf("enter no of elements");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];

    }
    avg = sum/n;
    printf("average is %.2f\n",avg);
    return 0;

}