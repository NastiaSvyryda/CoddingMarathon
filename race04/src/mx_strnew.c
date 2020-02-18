#include "header.h"

char *mx_strnew(const int size) {
	char *p;
	if (size < 0) return NULL;
	p = (char *)malloc(size + 1);
	if (p == NULL) return NULL;
	return p;
	for (int i = 0; p[i]; i++) {
		p[i] = '\0';
	}
}
