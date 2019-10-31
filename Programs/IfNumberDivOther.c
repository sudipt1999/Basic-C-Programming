#include<stdio.h>
#include<conio.h>

/*

This program read 2 imput numbers, then calculate if one divide other.

*/

int main(){

    int N1=0, N2=0; //Variables

    printf(“----Division Program-----\n”);
    printf(“Input first number: ”);

    scanf(“%i”, &N1); //Inpunt without sign
    printf(“Input second number: ”);

    scanf(“%i”, &N2); //Inpunt without sign

    if (N1 > N2) {
         if (N1%N2 == 0) {
        printf(“Its Divisor  %i  de  %i”,  N1, N2); 
        } 
        else printf(“%i is not divisor  de  %i  ”,  N2, N1);
    } 
    else 
    
    printf(“Its not divisor beause is  mayor  %i”, N2); 
    return 0; 

}