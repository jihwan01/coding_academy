#include <stdio.h>

//1009
int lastComNum(int a, int b){
    int res = a % 10;
    for(int i = 0; i < b-1; i++){
        res = res * a % 10;
    }
    return res;
}
int main() {
    int N;
    scanf("%d", &N);
    int a,b;
    int res;
    for(int i = 0 ; i < N; i++){
        scanf("%d %d", &a, &b);
        res = lastComNum(a,b);
        printf("%d\n",res == 0 ? 10 : res);
    }
    return 0;
}