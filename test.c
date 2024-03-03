#include <stdio.h>

// 10870

int main() {
    int n;

    scanf("%d", &n);
    int fibo[25];

    for(int i = 0; i <= n; i++){
        if(i == 0 || i == 1){
            fibo[i] = i;
        }else{
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }
    
    printf("%d", fibo[n]);

    return 0;
 }
