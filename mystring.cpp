#include "mystring.h"
#include <assert.h>
#include <math.h>
#ifndef NULL
#define NULL 0
#endif


/*!
	\author Alex Sergeechev aka funtalex
	\version 1.0
	\brief return first entry of ch in str

	\param[in] str - pointer of char to search in
	\param[in] ch - letter to find 

	\return pointer on first ch in str
*/
const char* strchr(const char* str, const char ch) {
	assert(str != NULL);
	assert(isfinite(ch));
	int i = 0;

	while (*(str + i) != '\0') {
		if (*(str + i) == ch) {
			return str + i;
		}
		i++;
	}
	return NULL;
}

int strcmp(const char* str1, const char* str2) {
	int i = 0;

	while (*(str1 + i) != '\0' && *(str2 + i) != '\0') {
		if (*(str1 + i) != *(str2 + i)) {
			return *(str1 + i) - *(str2 + i);
		}
		else {
			i++;
		}
	}

	if (*(str1 + i) == '\0' && *(str2 + i) == '\0') {
		return 0;
	}
	if (*(str1 + i) == '\0') {
		return -1;
	}
	return 1;
}

int strncmp(const char* str1, const char* str2, size_t num) {
	int i = 0;

	while (*(str1 + i) != '\0' && *(str2 + i) != '\0' && i < num) {
		if (*(str1 + i) != *(str2 + i)) {
			return *(str1 + i) - *(str2 + i);
		}
		i++;
	}
	if (i == num) {
		return 0;
	}
	if (*(str1 + i - 1) == '\0') {
		return -1;
	}
	return 1;
}

char* strcpy(char* dest, const char* source) {
	int i = 0;

	while (*(source + i) != '\0') {
		*(dest + i) = *(source + i);
		i++;
	}
	*(dest + i) = '\0';

	return dest;
}

char* strncpy(char* dest, const char* source, size_t num) {
	int i = 0;

	do {
		*(dest + i) = *(source + i);
		i++;
	} while (i < num && *(dest + i) != '\0');

	*(dest + i) = '\0';

	return dest;
}

char* strtok(char* str, char* stop) {
	int i = 0;
	while (*(str + i) != '\0') {
		int j = 0;
		while (*(str + i + j) == *(stop + j)) {
			j++;
		}
		if (*(stop + j) == '\0') {
			return str + i + j;
		}
		i++;
	}
	return NULL;
}