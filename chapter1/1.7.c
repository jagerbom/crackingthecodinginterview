/*
 * Write an algorithm such that if an element in an MxN matrix is 0,
 * its entire row and column is set to 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *a, int row_d, int col_d)
{
	int row,col;
	printf("\n");
	for (row=0; row<row_d; row++){
		for (col=0; col<col_d; col++){
			printf("%3d",*((a+row*col_d)+col));
		}
		printf("\n");
	}
}
int main (int argc, char *argv[])
{
	if (argc < 2) {
		printf("\n empty\n");
		return 0;
	}
	char *p;
	int row_u , col_u, row, col;
	row_u = strtol(argv[1], &p, 10);
	col_u = strtol(argv[2], &p, 10);
	if ((row_u == 0) || (col_u == 0)) {
		printf("\n invalid array dimensions");
		return 0;
	}
	if (argc < (3 + row_u*col_u)) {
		printf("\n invalid numbver of args");
		return 0;
	}
	int u_array[row_u][col_u];
	int i = row_u*col_u;
	int row_zero[row_u];
	int col_zero[col_u];
	int l;
	for (l=0;l<row_u;l++)
		row_zero[l] = 0;
	for (l=0;l<row_u;l++)
		col_zero[l] = 0;
	int num;
	for (row=0; row<row_u; row++){
		for (col=0; col<col_u; col++){
			num = strtol(argv[argc - i], &p, 10);
			u_array[row][col] = num;
			i--;
			if (num == 0) {
				row_zero[row] = 1;
				col_zero[col] = 1;
			}
		}
	}
	printf("\n **********Given array********** \n");
	print_array(&u_array[0][0], row_u, col_u);
	for (row=0; row<row_u; row++){
		for (col=0; col<col_u; col++){
			if ((row_zero[row] == 1) || (col_zero[col] == 1))
				u_array[row][col] = 0 ;
		}
	}
	printf("\n **********Resulting array********** \n");
	print_array(&u_array[0][0], row_u, col_u);
	return 0;
}
