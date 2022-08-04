#include<stdio.h>
void reverse(int *ptr,int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}
int main(){
   int n;
   printf("enter number of elements in array:");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       printf("enter element %d of array:",i+1);
       scanf("%d",&arr[i]);
   }
   reverse(arr,n);
   for(int i=0;i<n;i++){
       printf("%d\n",arr[i]);
   }
   return 0;
}
