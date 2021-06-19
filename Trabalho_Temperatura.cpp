#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>
#include "temp.h"
using namespace std;
int const TAM=2;
float temp [TAM],maio,meno;
int dia[TAM],mes[TAM],ano[TAM];
int i,x,y,op,vetor;
void mostra_vetor (float temp[],int dia[],int mes[],int ano[]);
void vetores_lidos (float temp[],int dia[],int mes[],int ano[]);
main()
{//inicio main
	setlocale(LC_ALL, "Portuguese");
	cout<<" \n=========================================  ";
    cout<<" \n\t\a\a VETORES TEMPERATURA ";
    cout<<" \n=========================================  ";
    for (i=0;i<TAM;i++)
    {//inicio da coleta de dados       
        do{
            cout<<" \n Informe o dia (número): ";
            cin>>dia[i];
        }while((dia[i]<1)||(dia[i]>30));
        do{
            cout<<"\n Informe o mês (número): ";
            cin>>mes[i];
        }while((mes[i]<1)||(mes[i]>12));
        do{
            cout<<"\n Informe o ano: ";
            cin>>ano[i];
        }while((ano[i]<1850)||(ano[i]>2021));     
		do{
			cout<<"\n Informe a temperatura: ";
			cin>>temp[i];
		}while((temp[i]<-50)||(temp[i]>65));
}		//fim da coleta de dados
		do{
		system ("cls");
		cout<<"\n QUAL DOS DADOS ABAIXO VOCÊ DESEJA SABER? ";//Abaixo a área de escolha 
		cout<<"\n [1] MÉDIA DAS TEMPERATURAS";
		cout<<"\n [2] TEMPERATURA MAIS ALTA";
		cout<<"\n [3] TEMPERATURA MAIS BAIXA";
		cout<<"\n [4] QUANTIDADE DE TEMPERATURAS NEGATIVAS";
		cout<<"\n [5] QUANTIDADE DE TEMPERATURAS POSITIVAS";
		cout<<"\n [6] TODAS AS TEMPERATURAS DO DIA 15/06";
		cout<<"\n [7] ANO COM TEMPERATURA MAIS BAIXA";
		cout<<"\n [8] MÊS COM TEMPERATURA MAIS ALTA";
		cout<<"\n [9] QUANTOS DIAS A TEMPERTATURA FICOU ABAIXO DA MÉDIA";
		cout<<"\n [10] TODOS OS VETORES LIDOS";
		cout<<"\n [11] VETOR DESEJADO";
		cout<<"\n [12] ENCERRAR A COLETA DE DADOS";
		cout<<"\n DIGITE SUA ESCOLHA AQUI: ";
		cin>>op;
		switch (op)
		{//Inicio switch
		 	case 1:{//inicio case1
		 		cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a MÉDIA TEMPERATURA ";
    			cout<<" \n=========================================  ";
		 		float result=0;
		    	  result=media(temp,TAM);
                  cout<<"\n A MÉDIA DAS TEMPERATURAS REGISTRADAS É: " <<result<< " GRAUS.";
		 		getch();
				break;
			}//fim case1
		 	case 2:{
		 		cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a TEMPERATURA MAIS ALTA ";
    			cout<<" \n=========================================  ";
    			float result=0;
    				result=maior(temp,TAM,maio);
    				cout<<"\n A MAIOR TEMPERATURA REGISTRADA É: " <<result<< " GRAUS";
		 		getch();
				break;
			}
			case 3:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a TEMPERATURA MAIS BAIXA ";
    			cout<<" \n=========================================  "; 
				float result=0;
    				result=menor(temp,TAM,meno);
    				cout<<"\n A MENOR TEMPERATURA REGISTRADA É: " <<result<< " GRAUS"; 			
				getch();
				break;
			}
			case 4:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a QUANTIDADE DE TEMPERATURAS NEGATIVAS ";
   				cout<<" \n=========================================  ";
   				float result=0;
   					result=qtde_negativa(temp,TAM);
   					cout<<"\n A QUANTIDADE DE TEMPERATURAS NEGATIVAS REGISTRADAS É: " <<result;
				getch();
				break;
			}
			case 5:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a QUANTIDADE DE TEMPERATURAS POSITIVAS ";
    			cout<<" \n=========================================  ";
    			float result=0;
    				result=qtde_positiva(temp,TAM);
    				cout<<"\n A QUANTIDADE DE TEMPERATURAS POSITIVAS REGISTRADAS É: " <<result;
				getch();
				break;
			}
			case 6:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a TODAS AS TEMPERATURAS DO DIA 15/06";
    			cout<<" \n=========================================  ";	
				float result=0;
					result=quinze_seis(TAM,temp,dia,mes);
					cout<< "\n TEMPERATURA DO DIA 15/06: "	<<result;		
				getch();
				break;
			}
			case 7:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a ANO COM TEMPERATURA MAIS BAIXA";
    			cout<<" \n=========================================  ";
    			int result=0;
    				result=menor_ano(temp,ano,TAM,meno);
    				cout<<"\n O ANO COM A TEMPERATURA MAIS BAIXA FOI:" <<result;
				getch();
				break;
			}
			case 8:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a MÊS COM TEMPERATURA MAIS ALTA";
    			cout<<" \n=========================================  ";
    			int result=0;
    				result=maior_mes(temp,mes,TAM,maio);
    				cout<<"\n O MÊS COM A TEMPERATURA MAIS ALTA FOI:" <<result;
				getch();
				break;
			}
			case 9:{
				cout<<" \n===========================================================  ";
    			cout<<" \n\t\a\a QUANTOS DIAS A TEMPERTATURA FICOU ABAIXO DA MÉDIA";
    			cout<<" \n===========================================================  ";
    			int result=0;
    				result=baixo_media(temp,TAM);
    				cout<<"\n A TEMPERATURA FICOU ABAIXO DA MÉDIA POR " <<result<< " Dias";    			
				getch();
				break;
			}
			case 10:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a TODOS OS VETORES LIDOS";
    			cout<<" \n=========================================  ";
    			vetores_lidos(temp,dia,mes,ano);
				getch();
				break;
			}
			case 11:{
				cout<<" \n=========================================  ";
    			cout<<" \n\t\a\a VETOR DESEJADO";
    			cout<<" \n=========================================  ";
    			cout<<"\n QUAL VETOR VOCÊ DESEJA VER? ";
    			cout<<"\n [1] - DIA ";
    			cout<<"\n [2] - MES ";
    			cout<<"\n [3] - ANO ";
    			cout<<"\n [4] - TEMPERATURA ";
    			cout<<"\n DIGITE AQUI A SUA ESCOLHA: ";
    			cin>>vetor;
    			mostra_vetor(temp,dia,mes,ano);
				getch();
				break;
			}
        }//Fim switch
   }while(op!=12);
   cout<<"\n VOCÊ ENCERROU A BUSCA POR DADOS RELACIONADOS A TEMPERATURA ";
}//fim main

//Área das funções
//=======================================
//Função 10
//=======================================
void vetores_lidos (float temp[],int dia[],int mes[],int ano[])
{
	for (i=0;i<TAM;i++)
	{
		cout<< "\n DIA INFORMADO: " <<dia[i];
		cout<< "\n MÊS INFORMADO: " <<mes[i];
		cout<< "\n ANO INFORMADO: " <<ano[i];
		cout<< "\n TEMPERATURA INFORMADA: " <<temp[i];
	}
}
//=======================================
//Função 11
//=======================================
void mostra_vetor (float temp[],int dia[],int mes[],int ano[])
{
	for (i=0;i<TAM;i++)
	if (vetor==1)
	{
       cout<< "\n DIA INFORMADO: " <<dia[i];
    }
    for (i=0;i<TAM;i++)
    if (vetor==2)
    {
       cout<< "\n MÊS INFORMADO: " <<mes[i];
	}
	for (i=0;i<TAM;i++)
	if (vetor==3)
	{
	   cout<< "\n ANO INFORMADO: " <<ano[i];
	}
	for (i=0;i<TAM;i++)
	if (vetor==4)
	{
	   cout<< "\n TEMPERATURA INFORMADA: " <<temp[i];
	}
}
