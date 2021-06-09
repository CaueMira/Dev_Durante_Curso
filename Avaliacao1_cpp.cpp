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
 cout<<" \n\t\a\a  PROGRAMA AVALIA��O  ";
 cout<<" \n=========================================  ";
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [1] - Tribunal virtual ";
 cout<<"\n [2] - Simulador de folha de pagamento ";
 cout<<"\n [3] - Conversor de medidas ";
 cout<<"\n [4] - Simulador de caminhada ";
 cout<<"\n [5] - Encerrar sess�o ";
 cout<<"\n Sua escolha � ?: ";
 cin>>escolha;

 switch (escolha) // escolha uma o��o - usar int ou char
 {
     case 1:{
     	cont_respostas=0;
     	cout<<"\n Seja bem vindo ao Tribunal Virtual do Crime (TVC) ";
     	cout<<"\n No dia 03/04/2021 ocorreu um assassinato em frente ao mercado �P�o de Sal�, a pessoa que cometeu o crime estava dentro de um carro e deu tr�s tiros na vitima. ";
     	cout<<"\n � necess�rio que voc� responda as perguntas abaixo: Sim (S) ou N�o (N) ";
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
        cout<<"\n Voc� � inocente! ";
        }else
        if(cont_respostas==2)
        {
        cout<<"\n Voc� � suspeito! ";
        }else
        if(cont_respostas==3)
        {
        cout<<"\n Voc� � c�mplice! ";
        }else
        if(cont_respostas==4)
        {
		cout<<"\n Voc� � c�mplice! ";
        }else
		if(cont_respostas==5)
        {
		cout<<"\n Voc� � o assassino! ";
        }
		cout<<"\n Obrigado por responder essas perguntas! ";
     	getch();
		break;
	 }
	 case 2:{
	 	cout<<"\n Quantos voc� recebe por hora? ";
	 	cin>>salario;
	 	cout<<"\n Quantas horas voc� trabalha no m�s? ";
	 	cin>>horas;
	 	bruto=salario*horas;
	 	cout<<"\n Seu sal�rio bruto � " <<bruto<< " reais";
	 	inss=bruto*0.08;
	 	cout<<"\n S�o descontados " <<inss<< " reais do seu sal�rio para o INSS ";
	 	sindicato=bruto*0.05;
	 	cout<<"\n S�o descontados " <<sindicato<< " reais do seu sal�rio para o sindicato ";
	 	ir=bruto*0.11;
	 	cout<<"\n S�o descontados " <<ir<< " reais do seu sal�rio para o Imposto de Renda";
	 	liquido=bruto-(bruto*0.24);
	 	cout<<"\n Seu sal�rio liquido � " <<liquido<< " reais";
	 	getch();
		break;
	 }
	 case 3:{
	 	cout<<"\n Voc� quer converter Armazenamento de dados (A) ou Peso(P): ";
	 	cin>>letra;
	 	letra = toupper (letra);
		if(letra=='A') 
		{ 
		        cout<<"\n Voc� quer converter Terabyte (T) ou Gigabyte (G)? ";
		        cin>>letra;
                letra = toupper (letra);
                if(letra=='T')
                {
				cout<<"\n Quantos Terabyte voc� quer ver em Gigabyte? ";
             	cin>>num;
             	resultado=num*1000; 
             	cout<<" \n " <<num<< " Terabyte(s) equivalem a "<< resultado<< " gigabyte(s).";
                }else
             if(letra=='G')
                {
				cout<<"\n Quantos Gigabyte voc� quer ver em Terabyte? ";
             	cin>>num;
             	resultado=num/1000; 
             	cout<<" \n " <<num<< " Gigabyte(s) equivalem a "<< resultado<< " terabyte(s).";
		        }
		        }
			 if(letra =='P')
			 {
			    cout<<"\n Voc� quer converter Kilo (K) ou Gramas (G)? ";
		        cin>>letra;
                letra = toupper (letra);
             if(letra=='K')
                {
				cout<<"\n Quantos Kilos voc� quer ver em Gramas? ";
             	cin>>num;
             	resultado=num*1000; 
             	cout<<" \n " <<num<< " Kilo(s) equivalem a "<< resultado<< " grama(s).";
                }else
             if(letra=='G')
                {
				cout<<"\n Quantas gramas voc� quer ver em Kilos? ";
             	cin>>num;
             	resultado=num/1000; 
             	cout<< " \n " <<num<< " Grama(s) equivalem a "<< resultado<< " kilo(s).";
		        }
	            }
	            getch();
		        break;
	        }
	 case 4:{
	 	cout<<"\n Quantos metros voc� pretende caminhar? ";
	 	cin>>metros;
	 	tempo=metros*1;
	 	calorias=metros*0.0076;
	 	cout<<"\n Voc� deve alcan�ar sua meta em aproximadamente " <<tempo<< " segundos ";
	 	cout<<"\n Voc� deseja saber em horas ou minutos esse tempo? Sim (S) ou N�o (N): ";
	 	cin>>letra;
	 	letra = toupper (letra);
	 	if(letra=='S')
	 	        {
	 	        cout<<"\n Voc� quer saber o tempo em Minutos (M) ou Horas (H)? ";
	 	        cin>>letra;
             	letra = toupper (letra);
             	if(letra=='H')
             	{
             	resultado=tempo/3600; 
             	cout<<num<< " Voc� deve alcan�ar sua meta em aproximadamente "<< resultado<< " hora(s). ";
                }else
			 if(letra=='M')
			    {
			 	resultado=tempo/60;
			 	cout<<num<< " Voc� deve alcan�ar sua meta em aproximadamente "<< resultado<< " minuto(s). ";
			 	cout<<"\n Voc� deve perder " <<calorias<< " calorias durante essa caminhada! ";
		        }
		        cout<<"\n Boa caminhada :) ";
		}
		if(letra=='N')
		{
		cout<<"\n Voc� deve perder " <<calorias<< " calorias durante essa caminhada! ";	
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


