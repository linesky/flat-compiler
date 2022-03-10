#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[]){
	char c[300];
	char cc[300];
	char *ccc;
	char *cccc;
	char ccccc[2];
	strcpy(ccccc,".");
	cccc=ccccc;
	int i;
	strcpy(cc,argv[1]);
	ccc=strstr(cc,cccc);
	ccc[0]=0;
	strcpy(c,"gcc ");
	strcat(c,argv[1]);
	strcat(c," -o");
	strcat(c,cc);
	strcat(c,".o ");
	system(c);
	strcpy(c,"objcopy ");
	strcat(c,cc);
	strcat(c,".o -O binary ");
	strcat(c,cc);
	strcat(c,".api");
	system(c);
	return 0;
}
