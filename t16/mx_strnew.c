#include <stdlib.h>

char *mx_strnew(const int size) {
	if(size < 0) {
		return 0;
	}
	char *string = (char*)malloc(size + 1);
	
	if(string == NULL) return string;
	
	for(int i = 0; i < size + 1; i++) {
		string[i] = '\0';
	}
	
	return string;
}


