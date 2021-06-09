#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
char letra,sexo;
float altura,resultado,numb1,numb2,numb3,numb4,media_notas,lado1,lado2,lado3;
void peso_ideal(float altura,char sexo);
int i,num1,num2,num3,num4,inicio,fim,result,dia,mes,ano,num,bin[8],temp,escolha;
void tabuada(int num1);
void maior_menor(int num1,int num2);
void inicio_fim(int inicio,int fim,int num1);
void vogal(char letra);
void caractere(char letra,int num1);
int par_ou_impar (int num1);
int valida_data(int dia,int mes,int ano);
void media(float numb1,float numb2,float numb3,float numb4);
int triangulo(float lado1,float lado2,float lado3);
void decrescente(int num1,int num2,int num3,int temp);
int binario(int num,int i,int bin[8]);
int par_reverso(int num1);
main()
   {
   	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	do{
		system ("cls"); // SERVE PARA LIMPAR A TELA
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a  TESTANDO FUNÇÕES  ";
 cout<<" \n=========================================  ";
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [1] - RETORNAR NUMERO PAR OU IMPAR (CONTRÁRIO)";
 cout<<"\n [2] - ORDEM DECRESCENTE";
 cout<<"\n [3] - DECIMAL PARA BINÁRIO";
 cout<<"\n [4] - TIPO DE TRIÂNGULO";
 cout<<"\n [5] - MÉDIA NOTAS";
 cout<<"\n [6] - VOGAL";
 cout<<"\n [7] - TABUADA ";
 cout<<"\n [8] - MAIOR E MENOR NÚMERO ";
 cout<<"\n [9] - TABUADA COM VALOR INICIAL E FINAL ESCOLHIDO PELO USUÁRIO";
 cout<<"\n [10] - PESO IDEAL ";
 cout<<"\n [11] - CARACTERE ";
 cout<<"\n [12] - PAR OU IMPAR ";
 cout<<"\n [13] - FIM";
 cout<<"\n Sua escolha é ?: ";
 cin>>escolha;
 switch (escolha)
 {
   case 1:{
	cout<<"Digite um número: ";
	cin>>num1;
	result=par_reverso(num1);
	cout<<"\n " <<result;
    getch();
    break;
    }
    case 2:{
    cout<<"\nDigite um numero: ";
    cin>>num1;
    cout<<"\nDigite outro numero: ";
    cin>>num2;
    cout<<"\nDigite o ultimo numero: ";
    cin>>num3;
    decrescente(num1,num2,num3,temp);
    getch();
	break;
	}
	case 3:{	
    cout<<"\nDigite um numero (base decimal) para ser convertido: ";
    cin>>num;
    result=binario(num,i,bin);
    getch();
	break;
	}
	case 4:{
   	cout<<"\n Informe o 1o lado: ";
   	cin>>lado1;
   	cout<<"\n Informe o 2o lado: ";
   	cin>>lado2;
   	cout<<"\n Informe o 3o lado: ";
   	cin>>lado3;
   	result=triangulo(lado1,lado2,lado3);
   	cout<<"\n "<<result;
   	getch();
	break;
	}
	case 5:{
   	cout<<"\n Informe a 1a nota: ";
   	cin>>numb1;
   	cout<<"\n Informe a 2a nota: ";
   	cin>>numb2;
   	cout<<"\n Informe a 3a nota: ";
   	cin>>numb3;
   	cout<<"\n Informe a 4a nota: ";
   	cin>>numb4;
   	media(numb1,numb2,numb3,numb4);
   	getch();
	break;
	}
	case 6:{
   	cout<<"\n Informe uma letra: ";
   	cin>>letra;
   	letra=toupper(letra);
   	vogal(letra);
   	getch();
	break;
	}
	case 7:{
   	cout<<"\n Informe um numero para utilizar a tabuada: ";
   	cin>>num1;
   	tabuada(num1);
   	getch();
	break;
	}
	case 8:{
   	cout<<"\n Informe um numero: ";
   	cin>>num1;
   	cout<<"\n Informe outro numero: ";
   	cin>>num2;
   	maior_menor(num1,num2);
   	getch();
	break;
	}
	case 9:{
   	cout<<"\n Valor inicial da tabuada: ";
	cin>>inicio;
	cout<<"\n Valor final da tabuada: ";
	cin>>fim;
	cout<<"\n Digite o numero que voce deseja fazer a tabuada: ";
	cin>>num1;
	inicio_fim(inicio,fim,num1);
	getch();
	break;
	}
	case 10:{
	cout<<"\n\n Favor digite a sua altura: ";
    cin>>altura;
    cout<<"\n\n Favor digite [F] - Feminino  [M] - Masculino ";
    cin>>sexo;
    sexo = toupper(sexo);
    peso_ideal(altura,sexo);
    getch();
	break;
	}
	case 11:{
    cout<<"\n Digite um caractere: ";
    cin>>letra;
    cout<<"\n Quantas vezes voce deseja ver esse caractere? ";
    cin>>num1;
    caractere(letra,num1);
    getch();
	break;
	}
    case 12:{
    cout<<"\n Informe um numero e vamos ver se e par ou impar ";
    cin>>num1;
    result=par_ou_impar(num1);
    cout<<"\n\n " <<result;
    getch();
	break;
	}
}
   }while(escolha != 13);
cout<<"\n\n\n";
}
   //Areas de funções
   //funcao vogal
   int par_reverso(int num1)
   {
   	if(num1%2==0)
   	{
   		cout<<"\n O numero informado é par, e foi retornado um impar!"; 
   		return(num1+1);
    }
   	else{
   	    cout<<"\n O numero informado é impar, e foi retornado um par!"; 
   	    return(num1+1);
}
}
   int binario(int num,int i,int bin[8])
   {
   	for(i==0;i<=7;i++)
   	{
   	if(num>=1)	
   	{
   	bin[i]=(num%2);
   	num/=2;
	}
	else{
	bin[i]=0;
	}
	}
	for(i=7;i>=0;i--)
	{
	cout<<bin[i];	
	}
	return 0;
   }
   void decrescente(int num1,int num2,int num3,int temp)
   {
   	if(num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    cout <<num3<<" => "<<num2<<" => "<<num1;
}
   int triangulo(float lado1,float lado2,float lado3)
   {
   	if((lado1+lado2+lado3)/3==lado1)
   	{
   	 return 1;//retornar 1 se for equilátero
	}
	if((lado1!=lado2&&lado2!=lado3&&lado3&&lado1))
	{
	 return 2;//retornar 2 se for escaleno
	}
	if((lado1!=lado2&&lado3==lado1||lado2!=lado3&&lado1==lado2||lado3!=lado1&&lado2==lado3))
	{
	 return 3;//retornar 3 se for isósceles	
	}
   }
   void media(float numb1,float numb2,float numb3,float numb4)
   {
   	media_notas=(numb1+numb2+numb3+numb4)/4;
   	cout<<"\n A media das notas e: "<<media_notas;
   }
    void vogal(char letra)
    {
    if ((letra=='A')||(letra=='E')||(letra=='I')
                  ||(letra=='O')||(letra=='U'))
                {
                     cout<<" \n O Caracter informado E VOGAL";
                }
              else
                  cout<<" \n O Caracter informado NAO E VOGAL";
    }
    //funcao tabuada
    void tabuada (int num1)
    {
		for(i=0;i<=100;i++)
        {
        cout<<"\n "<<num1<<"  * "<<i<<" = "<<num1 * i;
        }
        cout<<"\n\n\n";
	}
	//funcao maior e menor num
	void maior_menor(int num1,int num2)
	{
        if(num1>num2)
        {
	    cout<<"\n\n O primeiro numero e o maior e o segundo o menor! ";
        }else
        cout<<"\n O segundo numero e o maior e o primeiro o menor! ";
	}
	//função inicio e fim
	void inicio_fim (int inicio,int fim,int num1)
	{
        for(i=inicio;i<=fim;i++)
        {
        cout<<"\n "<<num1<<"  * "<<i<<" = "<<num1 * i;
        }
        cout<<"\n\n\n";
	}
	//funcao peso ideal
	void peso_ideal (float altura,char sexo)
	{
		if (sexo == 'M')
      {
	resultado = ((72.7 * altura) - 58);
	cout<<"\n\n Sendo homem seu peso ideal deve ser: "  <<resultado;	"quilos";
      }  else
   if (sexo == 'F')
   {
   	resultado = ((62.1 * altura) - 44.7);
	cout<<"\n\n Sendo mulher seu peso ideal deve ser: "  <<resultado;   "quilos";
   }
	}
	//funcao caractere
	void caractere (char letra,int num1)
	{
		for(i=1;i<=num1;i++)
 {
  cout<<"   "<<caractere;
 }
cout<<"\n\n\n";
}
   //funcao verifica se é par ou impar
   int par_ou_impar (int num1)
   {
   	if(num1%2==0)
   		return 1; //retorne 1 se é par
   	else
   	    return 0; //retorne 0 se é impar
   }
   


   
	
    
    
    
