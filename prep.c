//1712
#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(B >= C){
        printf("-1\n");
        return 0;
    }else{
        int result = A / (C-B) + 1;
        printf("%d\n", result);
        return 0;
    }
}