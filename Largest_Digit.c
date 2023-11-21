#include<stdio.h>

int main()
{
    int n,n1,n2,n3,n4;
    scanf("%d",&n);

        n1 = n%10;// n1 = 3
        n/=10; // n = 945
        n2 = n % 10;// n2 = 5 
        n/=10; // n = 94
        n3 = n%10;// n3 = 4
        n/=10;// n = 9
        n4 = n;// n4 = 9

    if(n1 > n2 && n1>n3 && n1 > n4){// 3>5 --> false
        printf("%d",n1);
    }else{
        printf("%d",(n2>n3 && n2>n4)?n2:(n3>n4)?n3:n4);
        // 5>4,5>9 --> false:  4>9 --> false 
        // expected out put = 9
        // my out put = 9;
    }
}