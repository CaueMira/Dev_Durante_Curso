#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>
using namespace std;
int const TAM = 10;
int i;
int escolha, acumula=0;
float peso,altura[TAM],maior,menor,acum=0,media,nota[TAM];
void gera_vetor (int vetor[], int TAM, float peso);
void mostra_vetor (int vetor[], int TAM, float peso);
void gera_vetor2(int vetor[]);
void mostra_vetor2 (int vetor[]);
void gera_vetor3(int vetor[]);
void mostra_vetor3(int vetor[]);
int valor, vetor[20];
#define MAX 1000 //quero gerar elementos entre 1 e 100 
int limite;
main()
    {
   	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	do{
		system ("cls"); // SERVE PARA LIMPAR A TELA
		system("color fc");
        cout<<" \n=========================================  ";
        cout<<" \n\t\a\a  FUN��ES VETORES ";
        cout<<" \n=========================================  ";
        cout<<"\n Escolha uma Op��o: ";
        cout<<"\n [1] - VETOR ALTURAS COM M�DIA DE ALTURAS ";
        cout<<"\n [2] - VETOR DE NOTAS E IMPRIMA A MAIOR NOTA ";
        cout<<"\n [3] - VETOR DE PESOS E QUANTOS EST�O ACIMA ";
        cout<<"\n [4] - ENCERRAR SESS�O ";
        cout<<"\n Sua escolha � ?: ";
        cin>>escolha;
        switch (escolha)
         {
        case 1:{
        	cout<<"\n\t\a\a M�DIA DAS ALTURAS ";
        	gera_vetor2(vetor);
        	mostra_vetor2(vetor);
        	getch();
			break;
		}
		case 2:{
			cout<<"\n\t\a\a MAIOR NOTA ";
			gera_vetor3(vetor);
        	mostra_vetor3(vetor);
			getch();
			break;
		}
		   case 3:{
		   	srand(time(NULL));
            cout<< "\n Digite o peso m�ximo, depois ser�o identificados os pesos acima! ";
            cin>>peso;
            cout<< "\n Digite quantos pesos voc� deseja ver, limite deve ser de 20 n�meros ";
            cin>>limite;
            gera_vetor(vetor, limite, peso);
            mostra_vetor (vetor, limite, peso);
            cout<<"\n\n";
		getch();
		break;
		   }
        }
   }while(escolha != 4);
cout<<"\n\n\n Valeu por usar =)";
} 	
     //Areas de fun��es
   //Gera o vetor
void gera_vetor (int vetor[], int TAM, float peso)
{
	for(i=0; i<TAM;i++)
     { 
      // gera um n�mero aleat�rio entre 1 e 1000 (inclusive)
       vetor[i] =(rand()%300)+1; // f�rmula m�gica
     }
}
//Imprime o vetor
void mostra_vetor (int vetor[], int TAM, float peso)
{
	for (i=0;i<TAM;i++)
	{
       cout << "\n Peso gerado: " << vetor[i];
       if(vetor[i]>peso)
       {
       acumula+1;
       acumula=acumula+1;
	   }
	   cout<<"\n "<<acumula<< " Peso(s) maiore(s) do que voc� indicou";
}
}
//Altura
void gera_vetor2(int vetor[])
{
 for(i=1;i<=TAM;i++)
         {
          cout<<"\n Informe a  " <<i<<"� Altura:  ";
          cin>>altura[i]; //leitura das alturas
          acum=acum+altura[i]; // Acumula as alturas informadas
          if (i==1) // esse if serve para inicializar as vari�veis maior e menor
           { maior = altura[i];
             menor = altura[i];
           }
          if (altura[i] > maior)
              {  maior = altura[i];
                }
          if (altura[i]  < menor)
              {    menor = altura[i];
                }      
         }
} 
//Valor m�dia
void mostra_vetor2(int vetor[])
{
	media= acum/TAM; //Calculando a m~edia das  alturas 
    cout<<"\n A m�dia das Alturas informadas �: "<<media;
}
//Nota
void gera_vetor3(int vetor[])
{
 for(i=1;i<=TAM;i++)
         {
          cout<<"\n Informe a  " <<i<<"� nota:  ";
          cin>>nota[i]; //leitura das alturas
          acum=acum+nota[i]; // Acumula as alturas informadas
          if (i==1) // esse if serve para inicializar as vari�veis maior e menor
           { maior = nota[i];
             menor = nota[i];
           }
          if (nota[i] > maior)
              {  maior = nota[i];
                }
          if (nota[i]  < menor)
              {    menor = nota[i];
                }      
         }
} 
//Valor m�dia
void mostra_vetor3(int vetor[])
{
    cout<<"\n A maior nota informada foi: "<<maior;
}


