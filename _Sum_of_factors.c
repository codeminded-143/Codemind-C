#include<stdio.h>
int main()

{
    int n,s=0,f=1;
    scanf("%d",&n);
    for(f=1;f<n;f++){
        if(n%f == 0){
            s = s + f;
        }
     }
     printf("%d",s);
}