//10817

#include <stdio.h>


int main() {
    int a, b, c;
    int res;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b){
        if(a <= c){
            res = a;
        }else{ // a가 젤 크다
            if(b >= c){
                res = b;
            }else{
                res = c;
            }
        }
    }else { // b > a
        if(a >= c){
            res = a;
        }else{
            if(b >= c){
                res = c;
            }else{
                res = b;
            }
        }
    }
    printf("%d\n", res);
    

    return 0;
}