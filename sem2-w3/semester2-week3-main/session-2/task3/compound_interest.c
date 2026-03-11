
/*
 * Compute the final result of applying compound interest 
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float deposit = 120.0;  // initial deposit
    float rate = 0.05;      // interest rate
    int term = 5;           // number of years
    float final_amount = deposit * (float)(1 + rate);
    printf("%f: ",final_amount);
    final_amount = (float) deposit * (float)pow((1+rate),term);
    float gain;

    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */
    printf("%.2f: ",final_amount);
    

    return 0;
}
