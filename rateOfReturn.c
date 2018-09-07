/* Trent McMorrow
 * Assignment 1 pat 2
 * this program promps the user for an initial and final invesment
 * also prompts for number of years weeks and days.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

double initialValue;
double finalValue;
double year;
double years;
double weeks;
double days;
double annualizedRateOfReturn;

printf("enter the amount of the initial invesment\n");
scanf("%lf",&initialValue);
printf("enter the amount of the final value of the invesment\n");
scanf("%lf",&finalValue);
printf("enter the number of years between the intial and final values\n");
scanf("%lf",&year);
printf("enter the number of weeks between the intial and final values\n");
scanf("%lf",&weeks);
printf("enter the number of days between the intial and final values\n");
scanf("%lf",&days);

if(year<0 || weeks<0 || days<0){
  printf("Error: you can not have negative time\n");
}else if(initialValue>finalValue){
  printf("Error: you have a negative annualized return rate, your intial invesment should be smaller then your final value of invesment\n");
}else {
  years=(year+(weeks/52)+(days/365));
  annualizedRateOfReturn=(((pow((finalValue/initialValue),(1/years)))-1)*100);
  printf("Initial Value: %0.2lf\n",initialValue);
  printf("Final Value: %0.2lf\n",finalValue);
  printf("years: %.5lf\n",years);
  printf("Annualized Rate of Return: %0.3lf percent\n",annualizedRateOfReturn);
}
//closing bracket for main --->
}
