#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#define aMayus(c) ((c)>='a' && (c)<='z' ? (c)-('a'-'A'): (c)) //me fijo si es minuscula. si es sumo la dif de ascii
#define aMinus(c) ((c)>='A'&& (c)<='Z' ? (c)+ ('a'-'A'):(c))

size_t mi_strlen(const char* str);
char* mi_strcat(char* str, const char* str2);
void mi_strcpy(char* str, const char* str2);
int mi_strcmp(const char* str, const char* str2);
int mi_strcmpi(const char* str,const char* str2);
char* mi_strncat (char* str, const char* str2,int n);
char* cambiarIncitu(char* str);
int esPalindromo(const char* str);

#endif // STRING_H_INCLUDED
