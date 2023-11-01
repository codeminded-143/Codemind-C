#include<stdio.h>

int main(){
	int ans = 0,n,n1;
	scanf("%d",&n);
    for(; n>0 ;)
	{
	    n1 = n%10;
	   	ans = (ans*10) + n1;
	   	n = n/10;
	}
	printf("%d",ans);
}


