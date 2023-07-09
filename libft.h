#ifndef LIBT_H
#define LIBT_H


#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

#define TRUE 1
#define FALSE 0
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define ULONG_MAX 18446744073709551615UL
#define NULL_BYTE 1

size_t  ft_strlen(const char *str);

char    *ft_strncat(char *dest, const char *src, size_t n);

void    ft_bzero(void* buffer, size_t len);

void*   ft_memccpy(void* dest, const void* src, int stop, size_t len);

void*   ft_memchr(const void *ptr, int value, size_t num);

int     ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

void*   ft_memcpy(void  *dest, const void *source, size_t n);

void*   ft_memmove(void* dest, const void* src, size_t len);

void*   ft_memset(void* buffer,int value, size_t len);

char    *ft_strcat(char *dest, const char *src);

char    *ft_strchr(const char *str, int c);

char    *ft_strcpy(char *s1, char *s2);

char    *ft_strdup(const char *str);

size_t    ft_strlcat(char *dest, const char *src, size_t size);

char    *ft_strncat(char *dest, const char *src, size_t n);

char    *ft_strncpy(char *dest, const char *src, size_t n);

char    *ft_strrchr(const char *s, int c);

char*   ft_strstr(const char* haystack, const char* needle);

int     ft_strncmp(const char* s1, const char* s2, size_t n);

char*   ft_strnstr(const char *big, const char *little, size_t len);

int     ft_atoi(char *str);

int     ft_strcmp(const char *s1, const char *s2);

int     ft_isalpha(int c);

int     ft_isdigit(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isprint(int c);

int     ft_toupper(int c);

int     ft_tolower(int c);

size_t ft_strlcpy(char *dst, const char *src, size_t size);

#endif