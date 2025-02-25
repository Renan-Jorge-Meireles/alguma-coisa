
#include <stdio.h>
int main() {

	int idade;
	printf("digite idade ");
	scanf("%d", &idade);
	
    do{
    printf("digite idade ");
    scanf("%d", &idade);
    }
    while(idade < 0);
	
	if (idade >= 65) {
		printf("boteco\n");
	}
	else if (idade <= 16) {
		printf("ve se cresce\n");
	}
	else if(idade >= 18){
	    printf("entre na festa\n");
	}

	else {
		printf("espiar as meninas\n");
	}
	
	printf("va pra casa");
	return 0;
};
