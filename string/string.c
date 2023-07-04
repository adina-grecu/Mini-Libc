// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	int i;
	/* TODO: Implement strcpy(). */
	for(i = 0; i < strlen(source); i++) {
		destination[i] = source[i];
	}
	
	destination[i] = '\0';

	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */

	int i, remaining;
	for(i = 0; i < len; i++) {
		destination[i] = source[i];
	}

	remaining = len - i;

	for(i = 0; i < remaining; i++) {
		destination[i] = '\0';
	}

	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */
	int j;
	int i = strlen(destination);

	for(j = 0; j < strlen(source); j++) {
		destination[i + j] = source[j];
	}

	destination[i + j] = '\0';

	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */
	int j;
	int i = strlen(destination);

	for(j = 0; j < len; j++) {
		destination[i + j] = source[j];
	}

	destination[i + j] = '\0';

	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	int i = 0;

	if(strlen(str1) < strlen(str2)) {
		return -1;
	}

	else if(strlen(str1) > strlen(str2)) {
		return 1;
	}

	while(i < strlen(str1)) {
		if(str1[i] != str2[i]) {
			return str1[i] - str2[i];
		}
		i++;
	}

	return 0;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	int i;
	for(i = 0; i < len; i++) {
		if(str1[i] != str2[i]) {
			return str1[i] - str2[i];
		}
	}

	return 0;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	for(int i = 0; i < strlen(str); i++) {
		if(str[i] == c) {
			return (char *)str + i;
		}
	}

	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	for(int i = strlen(str); i >= 0; i--) {
		if(str[i] == c) {
			return (char *)str + i;
		}
	}

	return NULL;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	for(int i = 0; i < strlen(haystack); i++) {
		int j = 0;
		while (j < strlen(needle) && haystack[i + j] == needle[j]) {
			j++;
		}

		if(needle[j] == '\0') {
			return (char *)haystack + i;
		}
	}

	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	int j;

	for(int i = strlen(haystack); i >= 0; i--) {
		int j = 0;

		while (j < strlen(needle) && haystack[i + j] == needle[j]) {
			j++;
		}

		if(needle[j] == '\0') {
			return (char *)haystack + i;
		}
	}
	
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	for(int i = 0; i < num; i++) {
		((char *)destination)[i] = ((char *)source)[i];
	}

	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	if(destination <= source) {
		memcpy(destination, source, num);
	}

	else {
		for(int i = num; i > 0; i--) {
			((char *)destination)[i - 1] = ((char *)source)[i - 1];
		}
	}

	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	for(int i = 0; i < num; i++) {
		if(((char *)ptr1)[i] != ((char *)ptr2)[i]) {
			return ((char *)ptr1)[i] - ((char *)ptr2)[i];
		}
	}

	return 0;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	for(int i = 0; i < num; i++) {
		((char *)source)[i] = value;
	}

	return source;
}
