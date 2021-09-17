#include <stdio.h>
#include "mystring.h"

int main() {

	//const char* first_cmp = "abba";
	//const char* second_cmp = "abb";
	//printf("strcmp - %d\n", strcmp(first_cmp, second_cmp));
	//printf("strncmp 3 - %d\n", strncmp(first_cmp, second_cmp, 3));

	const char* first_cmp = "nose";
	const char* second_cmp = "rignt";
	printf("strcmp - %d\n", strcmp(first_cmp, second_cmp));
	printf("strncmp 2 - %d\n", strncmp(first_cmp, second_cmp, 2));

	const char* str2 = "ABOBA";
	printf("strchr(\"ABOBA\", 'B') %c\n", *strchr(str2, 'B'));

	char str1[] = "BAOBAB";
	strncpy(str1, str2, 3);
	printf("strncpy() - %s\n", str1);

	//printf(*str2);
	char str3[] = "num1/num2/num3/num4";
	char* new_str;
	char stop[] = "/";

	new_str = strtok(str3, stop);
	printf("strtok: separator - length 1\n");
	for (int i = 0; i < 3; i++) {
		printf(new_str);
		printf("\n");
		new_str = strtok(new_str, stop);
	}

	char stop2[] = "./";
	char str4[] = "num1./num2./num3./num4";
	char* new_str2 = strtok(str4, stop2);
	printf("strtok: separator - length 2\n");
	for (int i = 0; i < 3; i++) {
		printf(new_str2);
		printf("\n");
		new_str2 = strtok(new_str2, stop);
	}




	return 0;
}