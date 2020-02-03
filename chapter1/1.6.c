#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/* rotate an array by 90 degree.
 * Things learned: passing 2d array as an argument
 * */

void print_array(int *a, int array_dim)
{
	int row,col;
	for (row=0; row<array_dim; row++){
		for (col=0; col<array_dim; col++){
			printf("%3d",*((a+row*array_dim)+col));
		}
		printf("\n");
	}
}

void rotate(int *a, int array_dim, int *ret)
{
	//a(row,col)  -> b(col,N-row)
	int row, col;
	for (row=0; row<array_dim; row++){
		for (col=0; col<array_dim; col++){
			*((ret+row*array_dim)+col) = *((a+((array_dim-1-col)*array_dim))+row);
		}
	}
}
int  main(int argc , char* argv[])
{
	if (argc < 2) {
		printf("\n Empty");
		return 0;
	}
	long array_dim;
	char *end_ptr;
	array_dim = strtol(argv[1], &end_ptr, 10);
	if (array_dim == 1) {
		printf ("\n one dimentional array");
		return 0;
	}
	int i = array_dim * array_dim;
	int row = 0,col = 0;
	int user_array[array_dim][array_dim];
	int result_array[array_dim][array_dim];
	for (row=0; row<array_dim; row++){
		for (col=0; col<array_dim; col++){
			user_array[row][col] = strtol(argv[array_dim * array_dim + 2 - i], &end_ptr, 10);
			i--;
		}
	}
	printf("\n ********* User Given Array Is ********\n");
	print_array(&user_array[0][0], array_dim);
	rotate(&user_array[0][0], array_dim, &result_array[0][0]);
	printf("\n Rotated Array Is \n");
	print_array(&result_array[0][0], array_dim);
	return 0;
}
