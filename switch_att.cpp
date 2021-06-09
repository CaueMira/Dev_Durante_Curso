/* Exemplo Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
#include <conio.h>
using namespace std; // OBRIGATÓRIO
int i,j,linhas,escolha,num,inicio,fim;
char caracter,letra, sexo;
float altura,resultado;
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 do{
 // Entrada dos Dados
 system ("cls"); // SERVE PARA LIMPAR A TELA
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a  PROGRAMA USANDO O SWITCH  ";
 cout<<" \n=========================================  ";
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [1] - Testando a Letra - Vogal?";
 cout<<"\n [2] - Testando se é PAR ou ÍMPAR";
 cout<<"\n [3] - Tabuada de um Número";
 cout<<"\n [4] - Feminino ou Masculino?";
 cout<<"\n [5] - Peso Ideal";
 cout<<"\n [7] - Tabuada (FOR) ";
 cout<<"\n [8] - Tabuada (DO_WHILE) ";
 cout<<"\n [9] - Todos números impares 0 a 200 (DO_WHILE): ";
 cout<<"\n [10] - Todos números do inicio ao fim (FOR): ";
 cout<<"\n [11] - Todos números do inicio ao fim (DO_WHILE): ";
 cout<<"\n [12] - Torre de caracteres: ";
 cout<<"\n [13] - Conversor de temperaturas: ";
 cout<<"\n [14] - FIM";
 cout<<"\n Sua escolha é ?: ";
 cin>>escolha;

 switch (escolha) // escolha uma oção - usar int ou char
 {
     case 1:{
               cout<<"\n Informe um Caracter:  ";      
              cin>>letra;
              letra=toupper(letra);
              if ((letra=='A')||(letra=='E')||(letra=='I')
                  ||(letra=='O')||(letra=='U'))
                {
                     cout<<" \n O Caracter informado é VOGAL";
                }
              else
                  cout<<" \n O Caracter informado NÃO É VOGAL";
            getch();
             break; // para sair do comando switch
             }
    case 2:{
              cout<<"\n Digite um número e veja se é PAR ou ÍMPAR: ";
             cin>>num;
             if(num%2==0)
                 {
                 cout<<"\n Par ";
                 }
                 else
                 {
                   cout<<"\n Impar";
                 }
                 getch();
               break;
             }
     case 3:{ cout<<"\n\TABUADA  "; // EXEMPLO NDA OTIMIZADO
               cout<<"\n\nInforme um número: "; // IMPRIME NA TELA
              cin>>num;
              cout<<"\n "<<num<<"  * 0 = "<<num*0;
              cout<<"\n "<<num<<"  * 1 = "<<num*1;
              cout<<"\n "<<num<<"  * 2 = "<<num*2;
              cout<<"\n "<<num<<"  * 3 = "<<num*3;
              cout<<"\n "<<num<<"  * 4 = "<<num*4;
              cout<<"\n "<<num<<"  * 5 = "<<num*5;
              cout<<"\n "<<num<<"  * 6 = "<<num*6;
              cout<<"\n "<<num<<"  * 7 = "<<num*7;
              cout<<"\n "<<num<<"  * 8 = "<<num*8;
              cout<<"\n "<<num<<"  * 9 = "<<num*9;
              cout<<"\n "<<num<<"  * 10 = "<<num*10;
              getch();
              break;
             }   
    case 4:{
              cout<<"\n\n\n Informe uma Letra (M) or (F): ";
             cin>>letra;
             letra = toupper (letra); //transforma em maiúsculo
             if  (letra =='M')
             {
                  cout<<"\n\n Você é do Sexo MASCULINO";
             }
             else
             {
                 if  (letra =='F')
                  {
                       cout<<"\n\n Você é do Sexo FEMININO";
                  }
               else
                 cout<<"\n\n Caracter Inválido";
              }
              getch();
               break;
             }
     case 5:{ cout<<"\n\n Informe uma letra para o Sexo:  ";
              cin>>sexo;
              sexo=toupper (sexo); //TRANSFORMA EM MAIUSCULO
              cout<<"\n Informe sua Altura:  ";
              cin>>altura;
              if (sexo=='M')
              {
                resultado = (72.7 * altura ) - 58;
                cout<<"\n Seu peso ideal é: " << resultado << "  quilos";
              }
              if (sexo=='F')
              {
                resultado = (62.1 * altura ) - 44.7;
                cout<<"\n Seu peso ideal é: " << resultado< "  quilos";
            }
                getch();
				break;
             }
    case 14:{
                cout<<"\n  OBRIGADA POR USAR O PROGRAMA";
                cout<<"\n  BOA NOITE";
               break;
          }
               
               
         
	case 7:{
		 cout<<"\n Informe um número:";
		 cin>>num;
         for(i=0;i<=100;i++)
        {
        cout<<"\n "<<num<<"  * "<<i<<" = "<<num * i;
        }
        cout<<"\n\n\n";
        getch();
		break;
	}
	case 8:{
		 cout<<"\n Informe um número: ";
		 cin>>num;
		 i=0;
         do{
        cout<<"\n "<<num<<"  * "<<i<<" = "<<num * i;
        i++;
    }while(i<=10);
 	getch();
	break;
	}
	  
	case 9:{
		i=0;
		do{	
           if(i%2!=0)
           {  cout<< "  " << i ;
           }
  
  i++;
  }while(i<=200);
  getch();
  break;
}
	case 10:{
		cout<<"\n Valor do inicio: ";
		cin>>inicio;
		cout<<"\n Valor final: ";
		cin>>fim;
		for(i=inicio;i<=fim;i++)
		{
		cout<<"   " << i;
	    }
		getch();
		break;
	}         
    case 11:{
    	cout<<"\n Valor inicial: ";
		cin>>inicio;
		cout<<"\n Valor final: ";
		cin>>fim;
		i=inicio;
    	do{
    	{
				cout<<"   " <<i;	
		}
		i++;
	    }while(i<=fim);
    	getch();
		break;
	}
	case 12:{
		cout<<"\n\n Informe a quantidade de Linhas da Torre: ";
		 cin>>linhas;
    cout<<"\n\n Informe o caractere da Torre: ";
    cin>>caracter;
    for(i=1;i<=linhas;i++) {
     for (j=1;j<=i;j++){
           cout<<caracter;
     }
     cout<<" \n";
    }
    for(i=linhas;i>=1;i--) {
     for (j=1;j<=i;j++){
           cout<<caracter;
     }
     cout<<" \n";
    }
		getch();
		break;
	}
	case 13:{
		cout<<"\n Escolha Celsius (C) ou Fahrenheit (F): ";
		cin>>letra;
             letra = toupper (letra); //transforma em maiúsculo
             if(letra =='C')
             {
             	cout<<"\n Quantos graus Celsius você quer ver em Fahrenheit? ";
             	cin>>num;
             	resultado = (num*9/5)+32; 
             	cout<<"Aproximadamente "<< resultado<< " graus Fahrenheit. ";
			 }else
			 if(letra =='F')
			 {
			    cout<<"\n Quantos graus Fahrenheit você quer ver em Celsius? ";
             	cin>>num;
             	resultado = (num-32)*5/9; 
             	cout<<"Aproximadamente "<< resultado<< " graus Celsius.";
		}
		getch();
		break;
	}
 }
}while (escolha != 14);
cout<<"\n\n\n";

}
 
