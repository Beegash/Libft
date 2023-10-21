#ifndef LIBFT_HEADER
#define LIBFT_HEADER
#include <stdlib.h>
#include <stdio.h>
int ft_atoi(const char *str);
void ft_bzero(void *str, size_t lenght);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int ch);
int ft_isalpha(int ch);
int ft_isascii(int ch);
int ft_isdigit(int ch);
int ft_isprint(int ch);
char *ft_itoa(int n);
void *memchr(const void *str, int ch, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t len);
void ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_memset(void *str, int nb, size_t len);
char *ft_strchr(const char *str, int ch);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int ch);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int ch);
int ft_toupper(int ch);
#endif