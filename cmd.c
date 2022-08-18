#include <stdio.h>
#include <unistd.h>
#include <string.h>

void porc(int state, int maxstate) {
	static char ss[400];
	
	if(state == 0) {
		sprintf(ss, "\r|");
	} else {
		ss[strlen(ss)-9] = '\0';
	}
	
	sprintf(ss, "%s*> %%03d %%%%", ss);
	fprintf(stderr, ss, (int) (100.*((float) state/(float)maxstate)));
	
	if (state == maxstate){
		fprintf(stderr, "\n");
	}
	
	return;
}

int main(int argc, char *argv[]) {
	
	int N=100;
	for (int i=0; i<=100; i++){
		usleep(10000);
		porc(i, N);
	}
	return 0;
}
	

