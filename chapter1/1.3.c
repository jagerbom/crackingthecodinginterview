/*Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer NOTE: One or two additional variables are fine An extra copy of the array is not*/

#include<stdio.h>
#include<stdlib.h>

void shift_string(int i, char *user_string)
{
	printf("\n This is a duplicate character \t %c",user_string[i]);
}
int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("\n Empty String");
		goto end;
	}
	char *user_string = argv[1];
	int arr_map[256] = {0};
	int i = 0;
	while(user_string[i] != '\0') {
		if (arr_map[user_string[i]] == 1) {
			shift_string(i, user_string);
		}
		arr_map[user_string[i]] = 1;
		i++;
	}
end:
	return 0;
}
