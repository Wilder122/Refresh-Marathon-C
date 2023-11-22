void mx_printstr(const char *s);

void mx_printchar(char c);

int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
	int isSorted = 0;
	while(!isSorted) {
		isSorted = 1;
		for(int i = 1; i < argc - 1; i++) {
			if(mx_strcmp(argv[i], argv[i + 1]) > 0) {
				isSorted = 0;
				char *s = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = s;
			}
		}
	}
	for(int i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
}


