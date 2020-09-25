#include <stdio.h>
#include <string.h>
int main()
{
	char name[255];
	printf("Enter your name: ");
	fgets(name, 255, stdin);
	name[strlen(name)-1]='\0'; /* remove the newline at the end */
	printf("Hallo %s!\n", name);
  return 0;
}