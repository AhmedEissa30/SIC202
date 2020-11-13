#include <stdio.h>
#include <stdlib.h>


void arrInput(int arr[]);
void display(int arr[]);
int sum(int arr[]);


int main(){

    int arr[20];

    arrInput(arr);
    display(arr);


    printf("\n\nSum of Numbers inputed in array is : %d \n\n" ,sum(arr));
    return 0;
}


void arrInput(int arr[]){
    for ( int i = 1 ; i <= 20 ; i++ ){

        printf("Enter number %d in array: ",i );
        scanf("%d", &arr[i]);


        int flag=0;
        while (!flag){
                flag=1;
                for ( int j = i-1 ; j >= 0; j-- ){
                    if (arr[i] == arr[j]){
                        printf("Enter number %d in array: ",i );
                        scanf("%d", &arr[i]);
                        flag=0;
                        break;
                }
            }

        }

    }
};


void display(int arr[]){
    for( int i = 1 ; i <= 20 ; i++ ){
        printf("%d.[%d] " , i , arr[i]);
    }
};


int sum(int arr[]){
    int sum = 0;
    for(int i = 1 ; i <= 20 ; i++ ){
        sum += arr[i];
    }

    return sum;
};
