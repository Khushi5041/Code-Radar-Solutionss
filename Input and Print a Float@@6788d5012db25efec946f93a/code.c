#include<stdio.h>
int main(){
    float number;
    printf("Enter the number: ");
    scanf("%f", &number);
    
    printf("you entered: %.2f\n", number);

    return 0;
}