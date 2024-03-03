//
//
//Lab 1, functions
// 
//Jorge Pineda
//


#include <stdio.h>

#include "header_functions.h"


//Regular functions here

//returns the golden number
double golden_number(){
	double g = 1.6180339887;
	return g;
}

//returns converted amount
double euro_to_dollars(int e){
	double d = e / 0.98;
	return d;

}

//returns statement based on which is bigger
int larger_number(int a, int b) {
	if (a > b) {
		return printf("First is larger\n");
	}
	else {
		return printf("The second is at least as large as the first.\n");
	}

}


/*Macros BELOW*/

#define m_goldenNumber 1.6180339887

#define m_euroToDollar(e) ((e / 0.98))

//Notes for Ternary ops below
//____________________________condition_if________if true______________________if false________________
#define m_largerNumber(a,b) (((a) > (b)) ? (printf("First is larger")) : (printf("Second is same or larger")))




int main(int main(int argc, const char* argv[])){
	printf("Regular boring functions\n\n");

	printf("The golden number is %f\n", golden_number());

	printf("127 Euros is $%.2f\n", euro_to_dollars(127));

	printf("%d\n\n", larger_number(10, 20));


	printf("******\n\n");


	printf("Header Functions Below\n\n");

	printf("The golden # in header is %f\n", h_golden_number());

	printf("Header convert from Euro to $ is $%f\n", h_euro_to_dollars(956));

	printf("%d\n\n", h_larger_strings(15, 10));


	printf("***********\n\n");


	printf("Macros time >:)\n\n");


	//wil call macros above in line 41-51
	printf("%f\n", m_goldenNumber);

	printf("%f\n", m_euroToDollar(5));

	printf("%d\n", m_largerNumber(19,20));


	//end
	//bye bye :)



}