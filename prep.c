//9093

#include <stdio.h>

void printReverse(char st[]){
    char word[21];
    int i = 0;
    int total_i = 0;
    while(st[total_i] != '\0'){
        if(st[total_i] == ' '){
            for(int j = i-1; j >= 0; j--){
                printf("%c", word[j]);
            }
            printf(" ");
            i = 0;
        }else {
            if(st[total_i] != '\n'){
                word[i] = st[total_i];
                i++;
            }
        }
        total_i++;
    }
    if(i > 0){
        for(int j = i-1; j >= 0; j--){
            printf("%c", word[j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d\n", &n);
    char sen[1002];
    for(int i = 0; i < n; i++){
        fgets(sen, 1001, stdin);
        printReverse(sen);
    }

    return 0;
}