/*
 * To find out is a string has duplicate characters.
 * I can think of 3 solutions
 * 	1. Brute force -> complexity O(n2)
 * 	2. demonstrated by using_extra_space(), where we allocate an extra array
 * 	3. Sorting the string.
 */

//This solution only deals with first duplicate character found: 
//TODO: Extend it to find all the duplicate characters.

#include <stdlib.h>
#include <stdio.h>

int using_extra_space(char *str)
{
	int res_arr[256];
	char *temp_str;
	temp_str = str;
	int i=0;
	while(temp_str[i] != '\0')
	{
		if (res_arr[temp_str[i]] == 1){
			printf("\nduplicate found at index %d",i);
			return 0;
		}
		res_arr[temp_str[i]] = 1;
		i++;
	}
	printf("\nduplicate Not found");
	return 0;
}

int without_extra_space(char *str)
{
	//1. Sorting can be used 
}

int main(int argc, char *argv[])
{
	char *str = argv[1];
	if (str == NULL) {
		printf("\n Empty string");
		return 0;
	}
	using_extra_space(str);
	without_extra_space(str);
	return 0;
}
