Directory for ALX Dynamic libraries project
Created on 26th March 2024 at 1:32 AM


THIS PROJECT REQUIRED ME TO CREATE A DYNAMIC LIBRARY
CONTAINING A LIST OF FUNCTION DEFINITIONS FOR A LIST OF
PROTOTYPES.
HERE IS A LIST OF THOSE PROTOTYPES:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);


STEP 1: I CREATED SOURCE FILES FOR ALL THE FUNCTIONS
HERE IS A LIST OF THE INDIVIDUAL SOURCE FILES CREATED:

abs.c
putchar.c
islower.c 
isalpha.c 
isupper.c 
isdigit.c 
strlen.c 
puts.c 
strcpy.c 
atoi.c 
strcat.c 
strncat.c 
strncpy.c 
strcmp.c 
memset.c 
memcpy.c 
strchr.c 
strspn.c 
strpbrk.c 
strstr.c 


STEP 2: I THEN CREATED OBJECT FILES FOR EACH INDIVIDUAL SOURCE FILE
HERE ARE THE COMMANDS I USED TO DO THIS:

gcc -c -fpic abs.c -o abs.o
gcc -c -fpic putchar.c -o putchar.o
gcc -c -fpic islower.c -o islower.o
gcc -c -fpic isalpha.c -o isalpha.o
gcc -c -fpic isupper.c -o isupper.o
gcc -c -fpic isdigit.c -o isdigit.o
gcc -c -fpic strlen.c -o strlen.o
gcc -c -fpic puts.c -o puts.o
gcc -c -fpic strcpy.c -o strcpy.o
gcc -c -fpic atoi.c -o atoi.o
gcc -c -fpic strcat.c -o strcat.o
gcc -c -fpic strncat.c -o strncat.o
gcc -c -fpic strncpy.c -o strncpy.o
gcc -c -fpic strcmp.c -o strcmp.o
gcc -c -fpic memset.c -o memset.o
gcc -c -fpic memcpy.c -o memcpy.o
gcc -c -fpic strchr.c -o strchr.o
gcc -c -fpic strspn.c -o strspn.o
gcc -c -fpic strpbrk.c -o strpbrk.o
gcc -c -fpic strstr.c -o strstr.o


STEP 3: I NEEDED TO CREATE A DYNAMIC LIBRARY CONTAINING THE ABOVE OBJECT FILES
THE DYNAMIC LIBRARY WILL BE SAVED AS "libdynamic.so"
TO DO THIS, I USED THE FOLLOWING COMMAND

gcc -shared -o libdynamic.so abs.o atoi.o isalpha.o ....... etc



