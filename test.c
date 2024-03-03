#include <stdio.h>

// 10798

int main() {
    char a[5][16];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 16; j++){
            a[i][j] = '\0';
        }
    }
    for(int i = 0; i < 5; i++){
        scanf("%s", &a[i][0]);
    }
    
    for(int i = 0; i < 15; i++){
        for(int j = 0; j<5; j++){
            if(a[j][i] != '\0'){
                printf("%c", a[j][i]);
            }
        }
    }

    

    return 0;
 }
