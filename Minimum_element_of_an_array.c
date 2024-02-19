#include<stdio.h>
int main(){
    int n,min;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    if(arr[i] < arr[i+1]){
      min = arr[i];  
    }else{
        min = arr[i+1];
       }
    }
    printf("%d",min);
}