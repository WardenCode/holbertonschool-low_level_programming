#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>

/*0*/
int _putchar(char c);
int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);

/*1*/
int _isdigit(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);

/*2*/
char *_strchr(char *s, char c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

/*3*/
int _islower(int c);
void _puts(char *s);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);

/*4*/
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);

/*5*/
char *_strstr(char *haystack, char *needle);

/*6*/
int _abs(int n);

/*9*/
char *_strcpy(char *dest, char *src);

/*100*/
int _atoi(char *s);

#endif
