# include <stdio.h>


int main(){

    int num = 0 , sum = 0;   // Initialization our 2 main integer variables ,num for storing the user's input ,sum for adding and storing

    printf("Enter the Number you wish to check if PERFECT: ");
    scanf("%i" ,&num);                  // takes number from user

    for ( int i = 1; i < num ; i++ ){   // a loop that goes from 1 to num-1
        if ( num%i == 0 ){              // if that number is divisible by num then:
            sum += i;                   // it gets added and stored in a variable
        }

    }

    if ( sum == num ){                  // if the sum of number that are divisible by the number entered then:
        printf("\n%i is a PERFECT Number .",num);        // this message gets outputted
    }
    else{                                                // any other argument then:
        printf("\n%i is a NOT A PERFECT Number .",num);   // then this message gets printed
    }


    return 0 ;
}
