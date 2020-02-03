/*
 * Que: To reverse a Null terminated string.
 *      1. Recursion
 * 	2. Brute force
 * 	3. Can this be done without knowing the length of string?
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap (char *str, int start, int end)
{
	char temp;
	temp = str[start];
	str[start] = str[end];
	str[end] = temp;
}
int reverse(char *str, int start, int end)
{
	if (start >= end)
		return 0;
	swap(str, start, end);
	start++;
	end--;
	reverse(str, start, end);
}

void reverse_recusrion(char *str)
{
	int len = strlen(str);
	int start = 0;
	int end = (len - 1);
	reverse(str, start, end);
}

int main(int argc, char *argv[])
{
	char *str = argv[1];
	if (str == NULL) {
		printf("\n Empty string");
		return 0;
	}
	reverse_recusrion(str);
	printf("\n rev str = %s", str);
	return 0;
}
