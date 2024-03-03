#include <stdio.h>

// 2798

int main() {
    int N, M;
    int num[100];

    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }
    int max = 0;
    int sum;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                sum = num[i] + num[j] + num[k];
                if(sum <= M && sum > max){
                    max = sum;
                }
            }
        }
    }

    printf("%d", max);

    return 0;
 }
