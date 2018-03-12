#include "vector.h"

void digit_bubble_sort( int vector[], int vector_length, int digit ) {
	int iterator = 0;
	int l_vector_length = vector_length;
	int new_length;

	do {
		new_length = 0;

		for ( iterator = 1; iterator < l_vector_length; iterator++ ) {

			if ( (vector[iterator - 1] / digit) % 10 > (vector[iterator] / digit) % 10 ) {

				swap( vector, iterator - 1, iterator );
				new_length = iterator;
			}
		}

		l_vector_length = new_length;
	} while ( l_vector_length != 0 );
}

void radix_sort( int vector[], int vector_length ) {
	int iterator = 1;
	int digit_iterator;

	for ( digit_iterator = 1; iterator <= 10; digit_iterator *= 10 ) {
		digit_bubble_sort( vector, vector_length, digit_iterator );
		iterator++;
	}
}