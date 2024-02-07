#include <stdio.h>

//5622
int main() {
    char st[16];
    scanf("%s", st);
    int res = 0;
    char* stp = st;
    // using ascii code
    // ABC : 65-67, DEF : 68-70, GHI: 71-73 JKL : 74-76, MNO : 77-79, PQRS: 80-83, TUV : 84-86, WXYZ: 87-90
    while(*stp != '\0'){
        if(*stp < 68){
            res += 3;
            stp++;
        }else if(*stp < 71){
            res += 4;
            stp++;   
        }else if(*stp < 74){
            res += 5;
            stp++;   
        }else if(*stp < 77){
            res += 6;
            stp++;   
        }else if(*stp < 80){
            res += 7;
            stp++;   
        }else if(*stp < 84){
            res += 8;
            stp++;   
        }else if(*stp < 87){
            res += 9;
            stp++;   
        }else{
            res += 10;
            stp++;   
        }
    }
    printf("%d", res);
    return 0;
}