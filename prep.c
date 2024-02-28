//2309

#include <stdio.h>


int main() {
    int h[9];
    int cand[7];
    for(int i = 0; i < 9; i++){
        scanf("%d", &h[i]);
    }
    int sum = 0;
    int idx = 0;
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            for(int k = 0; k < 9; k++){
                if(k != i && k != j){
                    sum += h[k];
                    cand[idx++] = h[k];
                }
            }
            if(sum == 100){
                int min = 200;
                int minIdx = 0;
                for(int i = 0; i < 7; i++){
                    for(int j = 0; j < 7; j++){
                        if(cand[j] < min){
                            min = cand[j];
                            minIdx = j;
                        }
                    }
                    printf("%d\n", cand[minIdx]);
                    cand[minIdx] = 1000;
                    min = 200;
                }
                return 0;
            }else{
                idx = 0;
                sum = 0;
            }
        }
    }
    

    return 0;
}