#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_it_up(int *v1, int *v2){
		int resultado=*v1 + *v2;
		
		*v1=0;
		*v2=0;
		
		return resultado;
	}

char *muda(char *text, char c1, char c2, int *ntrocados){
	
	static char tmp[200];
	*ntrocados=0;
	int i=0;
	
	while(i<strlen(text)){
		if (text[i]==c1){
			tmp[i]=c2;
			(*ntrocados)++;
		} else {
			tmp[i]=text[i];
			}
		i++;
	}
	
	return tmp;
}

int *aponta(int *l, int i, int NX, int NY){
		return &l[i*NY];
	}

int main(int argc, char *argv[]){
	
	int NX=100;
	int NY=100;
	int linear[NX*NY];
	int *matriz[NX];
	
	for (int i=0; i<NX*NY; i++) {
		linear[i] = i;
		}
	
	for (int i=0; i<NX; i++) {
			matriz[i]=aponta(linear, i, NX, NY);
		}
		
		int i=2;
		int j=10;
		
		printf("i (linha) = %d j (coluna) = %d => %d / %d\n", i, j, matriz[i][j], linear[i*NY+j]);
	
	//~ char text[200] = "eeeeeee";
	//~ int n;
	
	//~ char *text_cpy=muda(text, 'e', 'j', &n);
	//~ printf("%s  %s  %d\n", text, text_cpy, n);
	
	//~ return 0;
	
	
	
	//~ int a,b;
	
	//~ a=1;
	//~ b=2;
	
	//~ int soma = add_it_up(&a, &b);
	//~ printf("%d + %d = %d\n", a, b, soma);
	
	//~ return 0;
	}
