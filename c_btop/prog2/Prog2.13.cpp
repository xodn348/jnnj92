/* Program 2.13 Choosing the correct type for the job 1*/ 
#include <stdio.h>

int main(void) {
const float Revenue_Per_150 = 4.5f; 
short JanSold = 23500; /* Stock sold in January */
short FebSold = 19300; /* Stock sold in February */
short MarSold = 21600; /* Stock sold in March */
float RevQuarter = 0.0f; /* Sales for the quarter */
long QuarterSold = JanSold+FebSold+MarSold; /* Calculate quarterly total */
/* Output monthly sales and total for the quarter */ 
printf("\nStock sold in\n Jan: %d\n Feb: %d\n Mar: %d",JanSold,FebSold,MarSold); 
printf("\nTotal stock sold in first quarter: %ld",QuarterSold);

/* Calculate the total revenue for the quarter and output it */ 
RevQuarter = Revenue_Per_150*QuarterSold/150;
printf("\nSales revenue this quarter is:$%.2f\n",RevQuarter);
return 0; }