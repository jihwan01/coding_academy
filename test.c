#include <stdio.h>
//1259
void checkPal(int n){
    int num[6];
    int i = 0;
    while(n > 9){
        num[i] = n%10;
        n = n/10;
        i++;
    }
    num[i] = n;
    
    for(int j = 0; j < (i+1)/2; j++){
        if(num[j] != num[i-j]){
            printf("no\n");
            return;
        }
    }
    printf("yes\n");
    return;
}


int main() {
    int N;
    scanf("%d", &N);
    while(N != 0){
        checkPal(N);
        scanf("%d", &N);
    }
    return 0;
}