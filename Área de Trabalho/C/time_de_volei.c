#include <stdio.h>
int main(){
	int jogadores,i;
	float ps=0,pb=0,pa=0,ps1=0,pb1=0,pa1=0;
	float r1, r2, r3;

	// entrar com numero de jogadores
	printf("Entre com a quantidade de jogadores \n");
	scanf("%d", &jogadores); 
	// entrar com o nome do jogador
	char nome[jogadores];
	int s[jogadores],b[jogadores],a[jogadores],s1[jogadores],b1[jogadores],a1[jogadores];
	
	for(i=1; i<=jogadores;i++){
	printf("Entre com o nome do jogador\n");		
	scanf("%s", &nome[i]);
	// abaixo do nome de cada jogador qts saques bloqueios e ataques tentados
	printf("Entre com a qtd de saques, bloqueios e ataques tentados\n");
	scanf("%d %d %d", &s[i], &b[i], &a[i]);
	// acertos de saques bloqueios e ataques
	printf("Entre com a qtd de acertos de saques, bloqueios e ataques\n");
	scanf("%d %d %d", &s1[i], &b1[i], &a1[i]);
	}

	// imprimir porcentagem de acertos do time
	for(i=1; i<=jogadores;i++){	  
	ps = ps + s[i];
	pb = pb + b[i];
	pa = pa +a[i];
	}

	for(i=1; i<=jogadores;i++){	  
	ps1= ps1+ s1[i];
	pb1= pb1+ b1[i];
	pa1= pa1+a1[i];
	}
	
	r1 =(ps1/ps)* 100;
	r2 =(pb1/pb)* 100;
	r3 =(pa1/pa)* 100;
	
	printf("Pontos de saque: %.2f %%.\n", r1);
	printf("Pontos de bloqueio: %.2f %%.\n",r2);
	printf("Pontos de ataque: %.2f %%.\n", r3);

	return 0;
}
