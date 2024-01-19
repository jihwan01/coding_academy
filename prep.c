#include <stdio.h>

int main(){
    int days[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day_s[8] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    // 1 : Mon , 2: Tue, 3 : Weds, 4: Thurs, 5: Fri, 6 : Sat, 7 : Sun
    int day = 1;
    int x, y;
    scanf("%d %d", &x, &y);
    for(int i = 1; i < x; i++){
        day += days[i] % 7;
    }
    day += y % 7 - 1;
    if(day > 7){
        day -= 7;
    }
    if(day == 0){
        day = 7;
    }
    printf("%s", day_s[day]);
	return 0;
}   