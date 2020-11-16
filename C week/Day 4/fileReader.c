#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum;
    FILE *doc;
    int num1 = 0 , num2 = 0 ;
    doc = fopen("example.txt", "a+");

    fscanf(doc,"%d %d",&num1,&num2);

    sum = num1+num2;

    fputs("\n\nAnswer of summation is : ",doc);
    printf("%d",sum);
    fprintf(doc,"%d",sum);



    fclose(doc);
    return 0;
}
