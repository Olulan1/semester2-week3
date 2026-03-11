
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Olulani Ogunkolade
 * ID: 202028902/xpns0754
 */

 int main( void ) {
   // define and initialise variables for the problem data 
   
  float salary;
  float NI;
  float tax;


  (float) scanf("%f", &salary);
  printf("Salary \xc2\xa3%.2f\n", salary);

  scanf("%f", &NI);
  float ni_c = ((NI/100))*(salary);
  printf("NI Contribution \xc2\xa3%.2f\n", ni_c);

  scanf("%f", &tax);
  
  float income = (1-(NI/100))*(salary);

  float taxedincome = (income-12500);
  float taxsize = taxedincome * ((tax*0.01));
  if (taxedincome > 0) {
    taxedincome = taxedincome * (1-(tax*0.01));
    
    income = 12500 + taxedincome;

    printf("Tax contribution \xc2\xa3%.2f\n",taxsize);

    printf("Take home salary \xc2\xa3%.2f\n", income);
  } else {
    float zero = 0;
    printf("Tax contribution \xc2\xa3%.2f\n", zero);
    printf("Take home salary \xc2\xa3%.2f\n", income);
  }

  return 0;
 }