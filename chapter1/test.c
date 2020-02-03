#include <stdlib.h>
#include <stdio.h>

int using_extra_space(char *str)
{
	char res_arr[256];
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
	/*char *str = argv[1];
	  if (str == NULL) {
	  printf("\n Empty string");
	  return 0;
	  }
	  using_extra_space(str);
	  without_extra_space(str);*/
	int i,j;
	j=0;
	for (i=0;i<10;i++) {
		j=j+2;
		if (j==10)
			i=0;
		printf("\n value of i is %d",i);
	}
	return 0;
}
