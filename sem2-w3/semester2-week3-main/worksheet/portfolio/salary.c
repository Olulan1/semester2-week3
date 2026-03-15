
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Olulani Ogunkolade
 * ID: 202028902/xpns0754
*/

 int main( void ) {
   // define and initialise variables for the problem data 
   
  int salary = 36250;
  int NI = 8;
  int tax = 15;

  // calculate the deductions and final take-home salary

  float salaryF = salary;
  float ni_c = ((NI)*(0.01)*(salaryF));
  float income = (1-(NI/100))*(salaryF);
  float tax_c = (salaryF - ni_c - 12500)*0.01*tax;
  float home_salary = salaryF - ni_c  - tax_c;

  /* Use only these print statement with
  appropriate formatting and variable names*/
  printf("Salary £%.2f\n",salaryF);
  printf("NI contribution £%.2f\n",ni_c);
  printf("Tax contribution £%.2f\n",tax_c);
  printf("Take home salary £%.2f\n",home_salary);

  return 0;
 }