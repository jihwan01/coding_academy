#include <stdio.h>

// 10811

int main() {
    int n, m;
    int num[101];
    int temp[101];
    int a,b;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n+1; i++){
        num[i] = i;
    }
    for(int i = 0; i<m; i++){
        scanf("%d %d", &a, &b);
        for(int j = 0; j < b - a + 1; j++){
            temp[j] = num[a+j];
        }
        for(int j = 0; j < b - a + 1; j++){
            num[a+j] = temp[b-a-j];
        }
    }

    for(int i = 1; i <= n; i++){
        if(i != n){
            printf("%d ", num[i]);
        }else{
            printf("%d\n", num[i]);
        }
    }

    return 0;
 }
