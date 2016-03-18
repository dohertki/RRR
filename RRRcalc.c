/*RRRcalc
* Calulator for railroad retirement
*/


#include <stdio.h>
#include <math.h>


int main(){

	int monthsCredit;
	printf("Enter months worked: ");
	scanf("%d", &monthsCredit);
	
	/*The amount of a regular annuity is the total of portions which are
	  computed separately under different formulas and called tiers, plus
	  any vested fual benefit payment also due
	*/


	/*TIER I
		The first tier is calculated in generally the same way as a social
		security benefit. Any social security credits of an employedd are 
		combined with his railroad retirement credits for tier I computation
		purposes
	For those first eligible in 2015
		-90% of first 826 of average indexed monthly earnings, plus
		-32% of the amount of these earnings over 826 up ot 4980, plus
		- 15 percent of these earnings in excess of 4980

	*/

	/*Railroad retirement tax
		Tier I: 7.65% employee and employer(6.2% for railroad retirement, 
				1.45% for Medicare)
		Tier II: 4.9% employee, 13.10% employers, 88,200 maximum



	printf("Months worked: %d \n" , monthsCredit);






	return 0;
}


