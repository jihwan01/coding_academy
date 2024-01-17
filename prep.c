#include <stdio.h>

int main(){
    int N;
    long long d;
    scanf("%d", &N);
    scanf("%lld", &d);
	long long res[1000][1000] = {0,};

    int R = N / 2;
    int nx = N / 2;
    int ny = N / 2;
    long long cnt = 1;
    int rx, ry;
    
    res[nx][ny] = cnt;
    if(cnt == d){
        rx = nx+1;
        ry = ny+1;
    }
    cnt++;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0}; 

    for(int r = 1; r <= R; r++){
        nx -= 1;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2*r; j++){
                if(i != 0 || j != 0){
                    nx += dx[i];
                    ny += dy[i];
                }
                if(cnt == d){
                    rx = nx+1;
                    ry = ny+1;
                }
                res[nx][ny] = cnt;
                cnt++;
            }   
        } 
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == N-1){
                printf("%lld\n", res[i][j]);
            }else{
                printf("%lld ", res[i][j]);
            }

        }
    }

    printf("%d %d\n", rx, ry);
    
	return 0;
}