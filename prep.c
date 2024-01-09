#include <stdio.h>


int main() {
    char a[1005],b[1005];
    scanf("%s\n", a);
    scanf("%s", b);
    int i = 0;
    int len_a = 0;
    int len_b = 0;
    while(a[i++] != '\0'){
        len_a++;
    }
    i = 0;
    while(b[i++] != '\0'){
        len_b++;
    }
    if(len_a >= len_b){
        printf("go");
    }else{
        printf("no");
    }
    return 0;
} 
