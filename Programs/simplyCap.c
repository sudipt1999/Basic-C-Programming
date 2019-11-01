#include <stdio.h>
 /*
 This program calculate the final capital of an economical simply interest
 */
void main(){

         float c,I,t,F; //Variables

         printf("Welcome, Simply Capital Interest Calculator.\n\n");
         printf("Input the initial Capital: ");
         scanf("%f",&c);//Input the capital with float type
         printf("Write the interest of the capital: ");
         scanf("%f",&I);//Input the interest with float type
         printf("For last, let the time of the interes be taken: ");
         scanf("%f",&t);//Input the time with float type

         F=c+c*(I/100)*t; //Calculate the final amount of interest gained

         printf("\n\nThe final Capital is %f\n\n",F);

}