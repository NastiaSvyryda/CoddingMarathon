#include "header.h"

char *mx_strdup(const char *str) {
	int a = mx_strlen(str);
	char *s = mx_strnew(a);
	mx_strcpy(s, str);
	return s;
}
