#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
#include <conio.h>
using namespace std; 
int i,escolha,cont_respostas;
char letra,resposta1,resposta2,resposta3,resposta4,resposta5;
float num,resultado,horas,salario,bruto,inss,sindicato,ir,liquido,metros,tempo,calorias;
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 do{
 // Entrada dos Dados
 system ("cls"); // SERVE PARA LIMPAR A TELA
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a  PROGRAMA AVALIAÇÃO  ";
 cout<<" \n=========================================  ";
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [1] - Tribunal virtual ";
 cout<<"\n [2] - Simulador de folha de pagamento ";
 cout<<"\n [3] - Conversor de medidas ";
 cout<<"\n [4] - Simulador de caminhada ";
 cout<<"\n [5] - Encerrar sessão ";
 cout<<"\n Sua escolha é ?: ";
 cin>>escolha;

 switch (escolha) // escolha uma oção - usar int ou char
 {
     case 1:{
     	cont_respostas=0;
     	cout<<"\n Seja bem vindo ao Tribunal Virtual do Crime (TVC) ";
     	cout<<"\n No dia 03/04/2021 ocorreu um assassinato em frente ao mercado “Pão de Sal”, a pessoa que cometeu o crime estava dentro de um carro e deu três tiros na vitima. ";
     	cout<<"\n É necessário que você responda as perguntas abaixo: Sim (S) ou Não (N) ";
     	cout<<"\n Conhecia a vitima? ";
     	cin>>resposta1;
     	resposta1=toupper(resposta1);
     	cout<<"\n Telefonou para vitima? ";
     	cin>>resposta2;
     	resposta2=toupper(resposta2);
     	cout<<"\n Esteve no local do crime? ";
     	cin>>resposta3;
     	resposta3=toupper(resposta3);
     	cout<<"\n Mora perto da vitima? ";
     	cin>>resposta4;
     	resposta4=toupper(resposta4);
     	cout<<"\n Ja trabalhou com a vitima? ";
     	cin>>resposta5;
     	resposta5=toupper(resposta5);
     	
     	if(resposta1=='S')
     	{
     	cont_respostas++;
		}
     	if(resposta2=='S')
     	{
     	cont_respostas++;	
		}
		if(resposta3=='S')
		{
	    cont_respostas++;	
		}
		if(resposta4=='S')
		{
	    cont_respostas++;
		}
		if(resposta5=='S')
		{
	    cont_respostas++;
		}
		if(cont_respostas==1)
		{
        cout<<"\n Você é inocente! ";
        }else
        if(cont_respostas==2)
        {
        cout<<"\n Você é suspeito! ";
        }else
        if(cont_respostas==3)
        {
        cout<<"\n Você é cúmplice! ";
        }else
        if(cont_respostas==4)
        {
		cout<<"\n Você é cúmplice! ";
        }else
		if(cont_respostas==5)
        {
		cout<<"\n Você é o assassino! ";
        }
		cout<<"\n Obrigado por responder essas perguntas! ";
     	getch();
		break;
	 }
	 case 2:{
	 	cout<<"\n Quantos você recebe por hora? ";
	 	cin>>salario;
	 	cout<<"\n Quantas horas você trabalha no mês? ";
	 	cin>>horas;
	 	bruto=salario*horas;
	 	cout<<"\n Seu salário bruto é " <<bruto<< " reais";
	 	inss=bruto*0.08;
	 	cout<<"\n São descontados " <<inss<< " reais do seu salário para o INSS ";
	 	sindicato=bruto*0.05;
	 	cout<<"\n São descontados " <<sindicato<< " reais do seu salário para o sindicato ";
	 	ir=bruto*0.11;
	 	cout<<"\n São descontados " <<ir<< " reais do seu salário para o Imposto de Renda";
	 	liquido=bruto-(bruto*0.24);
	 	cout<<"\n Seu salário liquido é " <<liquido<< " reais";
	 	getch();
		break;
	 }
	 case 3:{
	 	cout<<"\n Você quer converter Armazenamento de dados (A) ou Peso(P): ";
	 	cin>>letra;
	 	letra = toupper (letra);
		if(letra=='A') 
		{ 
		        cout<<"\n Você quer converter Terabyte (T) ou Gigabyte (G)? ";
		        cin>>letra;
                letra = toupper (letra);
                if(letra=='T')
                {
				cout<<"\n Quantos Terabyte você quer ver em Gigabyte? ";
             	cin>>num;
             	resultado=num*1000; 
             	cout<<" \n " <<num<< " Terabyte(s) equivalem a "<< resultado<< " gigabyte(s).";
                }else
             if(letra=='G')
                {
				cout<<"\n Quantos Gigabyte você quer ver em Terabyte? ";
             	cin>>num;
             	resultado=num/1000; 
             	cout<<" \n " <<num<< " Gigabyte(s) equivalem a "<< resultado<< " terabyte(s).";
		        }
		        }
			 if(letra =='P')
			 {
			    cout<<"\n Você quer converter Kilo (K) ou Gramas (G)? ";
		        cin>>letra;
                letra = toupper (letra);
             if(letra=='K')
                {
				cout<<"\n Quantos Kilos você quer ver em Gramas? ";
             	cin>>num;
             	resultado=num*1000; 
             	cout<<" \n " <<num<< " Kilo(s) equivalem a "<< resultado<< " grama(s).";
                }else
             if(letra=='G')
                {
				cout<<"\n Quantas gramas você quer ver em Kilos? ";
             	cin>>num;
             	resultado=num/1000; 
             	cout<< " \n " <<num<< " Grama(s) equivalem a "<< resultado<< " kilo(s).";
		        }
	            }
	            getch();
		        break;
	        }
	 case 4:{
	 	cout<<"\n Quantos metros você pretende caminhar? ";
	 	cin>>metros;
	 	tempo=metros*1;
	 	calorias=metros*0.0076;
	 	cout<<"\n Você deve alcançar sua meta em aproximadamente " <<tempo<< " segundos ";
	 	cout<<"\n Você deseja saber em horas ou minutos esse tempo? Sim (S) ou Não (N): ";
	 	cin>>letra;
	 	letra = toupper (letra);
	 	if(letra=='S')
	 	        {
	 	        cout<<"\n Você quer saber o tempo em Minutos (M) ou Horas (H)? ";
	 	        cin>>letra;
             	letra = toupper (letra);
             	if(letra=='H')
             	{
             	resultado=tempo/3600; 
             	cout<<num<< " Você deve alcançar sua meta em aproximadamente "<< resultado<< " hora(s). ";
                }else
			 if(letra=='M')
			    {
			 	resultado=tempo/60;
			 	cout<<num<< " Você deve alcançar sua meta em aproximadamente "<< resultado<< " minuto(s). ";
			 	cout<<"\n Você deve perder " <<calorias<< " calorias durante essa caminhada! ";
		        }
		        cout<<"\n Boa caminhada :) ";
		}
		if(letra=='N')
		{
		cout<<"\n Você deve perder " <<calorias<< " calorias durante essa caminhada! ";	
		cout<<"\n Boa caminhada :)";
		}
	 	getch();
		break;
	 }
	 case 5:{
	 	cout<<"\n Obrigado por utilizar este programa! ";
		break;
	 }
}
}while(escolha !=5);
cout<<"\n\n\n";
}


