#include <stdio.h>
#include <string.h>

int main() {

char * name = "Patrik Ask"; 
char name2[] = "Anna Widen";

printf("Your names are %s and %s\n", name, name2); 

printf("The length of Patrik Ask is %d\n", strlen(name));

if (strncmp(name, "Patrik Ask", 6) == 0)  {
	printf("Hello, Patrik Ask!\n"); }


char first_name[] = "John"; 
char * last_name = "Doe"; 

char full_name[100]; 

first_name[0] = 'P';
sprintf(full_name, "%s %s", first_name, last_name); 
if (strncmp(full_name, "Pohn Doe", 100) == 0) {
	printf("Done!\n");
	}

full_name[0] = '\0';
strncat(full_name, first_name, 4);
strncat(full_name, last_name, 20); 
printf("%s\n", full_name); 
return 0; 


}


