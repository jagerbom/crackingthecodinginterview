/*
 * Write a method to replace all spaces in a string with %20
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char *user_string = argv[1];
	int len = strlen(user_string);
	int i = 0;
	int j;
	int space_count = 0;
	int new_length = 0;

	if (argc < 2) {
		printf("\n Empty string supplied \n");
		return 0;
	}
	while (user_string[i] != '\0') {
		if (user_string[i] == ' ')
			space_count++;
		i++;
	}
	printf("\n spaces = %d \n", space_count);
	if (space_count == 0) {
		printf("\n String does not contain a space. Output string = %s",user_string);
		return 0;
	}
	
	new_length = len + (2 * space_count);
	char new_string[new_length];
	new_string[new_length] = '\0';
	for (j = len - 1 ; j>=0 ; j--) {
		if (user_string[j] == ' '){
			new_string[new_length - 1] = '0';
			new_string[new_length - 2] = '2';
			new_string[new_length - 3] = '%';
			new_length = new_length - 3;
		} else {
			new_string[new_length - 1] = user_string[j];
			new_length = new_length - 1;
		}
	}
	printf("\n New_string = %s", new_string);

	return;
}
