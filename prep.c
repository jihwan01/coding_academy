// Bubble Sort
#include <stdio.h>

void bubble(int* arr, int N){
    for(int i=N; i>1; i--){
		for(int j=1; j<i; j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];   
				arr[j] = arr[j+1]; 
				arr[j+1] = tmp;
			}
		}
	}
}

void selection(int* arr, int N){
    for(int i = 1; i < N; i++){
        int min = i;
        for(int j = i+1; j <= N; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertion(int* arr, int N){
    for(int i = 2; i <= N; i++){
        int key = arr[i];
        int index = i;
        for(int j = i-1; j >= 1; j--){
            if(key < arr[j]){
                arr[j+1] = arr[j];
                index = j;
            }else{
                break;
            }
        }
        arr[index] = key;
    }
}

int main(){
    int N;
	scanf("%d", &N);
	int A[10000] = {0,};
    for(int i=1; i<=N; i++){
		scanf("%d", &A[i]);
	}
    // bubble(A, N);
    // selection(A,N);
    insertion(A,N);
    for(int i = 1; i <= N; i++){
        printf("%d\n", A[i]);
    }
	return 0;
}