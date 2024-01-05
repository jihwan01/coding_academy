#include <stdio.h>


int findRoom(int h, int w, int n){
    int x,y;
    y = n % h;
    x = n / h + 1;
    if(y == 0){
        y = h;
        x--;
    }
    return 100*y + x;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int h, w, nth;
        scanf("%d %d %d", &h, &w, &nth);
        printf("%d\n", findRoom(h, w, nth));
    }    

    return 0;
}