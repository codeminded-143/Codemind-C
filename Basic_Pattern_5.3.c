#include <stdio.h>

int main() {
	int n,i,j,a,b,i1;
	scanf("%d",&n);
	i1 = n;
	for(i = 1;i<=n;i++){
	    for(j = 1;j<=n;j++){
	        a = i+j,b = n+1;
	        if(a<=b){
	            printf("%d",i1);
	        }else{
	            printf("*");
	        }
	    }
	    printf("
");i1--;
	}
	return 0;
}