#include <stdio.h>

//2292
int main() {
    int N;
    scanf("%d", &N);
    
    int sum = 1;
    int dist = 1;
    while(sum < N){
        dist++;
        sum += (dist-1)*6;
    }
    printf("%d", dist);
    return 0;
}