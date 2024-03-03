

/*Implementation File*/
#include "header_functions.h"

#include <stdio.h>

/*Golden number but in implementation*/
double h_golden_number() {
	double g = 1.6180339887;
	return g;
}

/*Same conversion just in imp*/
double h_euro_to_dollars(int e){
	double d = e / 0.98;
	return d;
}

/*Larger number as imp*/
int h_larger_strings(int a, int b) {
	if (a > b) {
		return printf("First is larger\n");
	}
	else {
		return printf("The second is at least as large as the first.\n");
	}

}
