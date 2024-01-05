#include <stdio.h>


int resNum(int k,int n){
    int num[15][15] = {0};
    for(int i = 0; i <= k; i++){
        for(int j = 1; j <= n; j++){
            if(i == 0){
                num[i][j] = j;
            }else{
                int cnt = 0;
                for(int t = 1; t <= j; t++){
                    cnt += num[i-1][t];
                }
                num[i][j] = cnt;
            }
        }
    }
    return num[k][n];
}

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", resNum(k,n));
    }    

    return 0;
} 