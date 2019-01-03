#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include<stdlib.h>
using namespace std;

void Juego();
string PREGUNTA[15]={"LA CAPITAL DEL ESTADO GUARICO ES:","UNO DE ESTOS EQUIPOS ES DE INGLATERRA:",
"AL QUE MADRUGA...", "UNA DE ESTAS CANCIONES PERTENECE AL GRUPO DE ROCK \"BLINK 182\":", "EL NUMERO DE PARROQUIAS DEL MUNICIPIO CABIMAS ES:",
"EL TENISTA ROGER FEDERER ES NACIDO EN:", "EL MONTE EVEREST, MONTANA MAS ALTA DEL MUNDO, SE ENCUENTRA EN LA CORDILLERA DE:",
"UNO DE ESTOS ARTISTAS NO ES NACIDO EN PUERTO RICO:", "CUAL DE ESTOS VENEZOLANOS LLEGO PRIMERO A LA PRESIDENCIA:",
"LA SELECCION DE FUTBOL DE VENEZUELA, LOGRO AVANZAR A SEMIFINALES POR PRIMERA VEZ EN UNA COPA AMERICA JUGANDO EN:",
"LA COMPANIA DE ELECTRONICOS SAMSUNG TIENE SU SEDE PRINCIPAL EN:", "YO DESCUBRI EL AREA NUNCA ANTES VISITADA...",
"EN EL ARCO DEL TRIUNFO EN PARIS, ESTA GRABADO EL NOMBRE DE UNO DE ESTOS PROCERES DE LA INDEPENDENCIA:",
"EL PRIMER SER HUMANO EN LLEGAR AL ESPACIO EXTERIOR FUE:","UNO DE ESTOS PRESIDENTES VENEZOLANOS INICIO SU GOBIERNO CON EL LEMA: \"UNION, PAZ Y TRABAJO.\":"};
char RESPUESTA[15]={'a','b','c','b','a','d','b','c','d','a','c','b','c','a','d'};
string OTRO[4][15]={{"SAN JUAN DE LOS MORROS", "REAL SALT LAKE", "LE PREPARAN SU AREPA", "BOHEMIAN RHAPSODY", "9","ALEMANIA", "LOS ALPES", "WISIN & YANDEL","CARLOS ANDRES PEREZ","ARGENTINA","ESTADOS UNIDOS","DEL TRIANGULO DE LAS BERMUDAS","SIMON BOLIVAR","YURI GAGARIN","ROMULO BETANCOURT"},
                    {"SAN CARLOS","NEWCASTLE UNITED","SE TOMA UNA DUCHA", "WHAT'S MY AGE AGAIN?", "7", "FRANCIA", "HIMALAYA","TITO EL BAMBINO","JAIME LUSINCHI","CHILE","JAPON","DEL LADO OSCURO DE TU ALMOHADA","ANTONIO JOSE DE SUCRE","NEIL ARMSTRONG","ROMULO GALLEGOS"},
                    {"CALABOZO","NEW ENGLAND REVOLUTION","DIOS LO AYUDA", "THERE IS", "11", "AUSTRIA", "LOS ANDES", "VICO C","RAFAEL CALDERA","BRASIL","COREA DEL SUR","DEL AMAZONAS","FRANCISCO DE MIRANDA","BUZZ ALDRIN","LUIS HERRERA CAMPINS"},
                    {"EL TIGRE","SWANSEA CITY","LE DA MUCHA PEREZA", "INTO THE DEEP", "5", "SUIZA", "MONTES URALES", "DADDY YANKEE", "RAUL LEONI","COLOMBIA","SINGAPUR","DEL CUARTO DE MI HERMANA","JOSE ANTONIO PAEZ","MICHAEL COLLINS","JUAN VICENTE GOMEZ"}};
string LETRA[4]={"A) ","B) ","C) ","D) "};
char Opcion;
int Premio[15]={1000, 2000, 3000, 4000,5000, 7500, 9000, 20000, 25000, 50000, 75000, 100000, 150000, 200000, 300000};  //PREGUNTAR EL "."
void Comodin();
bool aux1=false, aux2=false, aux3=false;
int i,j;
string respuesta[15]={"SAN JUAN DE LOS MORROS", "NEWCASTLE UNITED", "DIOS LO AYUDA", "WHAT'S MY AGE AGAIN?", "9", "SUIZA", "HIMALAYA", "VICO C","RAUL LEONI","ARGENTINA", "COREA DEL SUR", "DEL LADO OSCURO DE TU ALMOHADA","FRANCISCO DE MIRANDA","YURI GAGARIN","JUAN VICENTE GOMEZ"};
char pause;
void RESUMEN();

class Menu
{
public:
    void DisplayMenu()
    {    cout<<"\n\t\t*----------------------------------------*"<<endl;
         cout<<"\t\t\tWO WANTS TO BE A BILLIONAIRE?"<<endl;
         cout<<"\t\t*----------------------------------------*"<<endl;
        return;
    }
};//Menu

main()
{system("color 1F");
  Juego();
  RESUMEN();
 return 0;
}//main

void Juego()
{  Menu Mostrar;
    for(i=0; i<15; i++){
    do{ system("cls");
            Mostrar.DisplayMenu();
    cout<<"\nPREGUNTA NUMERO"<<" "<<(i+1)<<"/"<<"15"<<"\t\t\t"<<"POR UN TOTAL DE: "<<Premio[i]<<" BsF"<<"\n"<<endl;
    cout<<PREGUNTA[i]<<endl;
    cout<<"\n"<<endl;
    for(j=0; j<4; j++){
    cout<<LETRA[j]<<OTRO[j][i]<<endl;
    cout<<"\n";
    }//for j
    cout<<"\nPOR FAVOR SELECCIONE SU OPCION:"<<endl;
    Opcion=getch();
    if(Opcion!='a' && Opcion!='b' && Opcion!='c' && Opcion!='d' && Opcion!='e')
            {
                cout<<"\nPOR FAVOR INGRESE UNA OPCION VALIDA. PRESIONE \"ENTER\" PARA INTENTARLO DE NUEVO."<<endl;
                pause=getch();
            }//if
    }while(Opcion!='a' && Opcion!='b' && Opcion!='c' && Opcion!='d' && Opcion!='e');
    if(Opcion==RESPUESTA[i])
    {
     cout<<"\nRESPUESTA CORRECTA. \n"<<endl;
    cout<<"PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
     pause=getch();
    }
    else
    {
        if(Opcion=='e')
        {Comodin();}
        else{cout<<"\nERROR. RESPUESTA INCORRECTA.\n"<<endl;
        cout<<"POR FAVOR PRESIONE \"ENTER\" PARA VISUALIZAR EL DINERO OBTENIDO."<<endl;
        pause=getch();
       break;
        }
    }
    system("cls");
}//for i
    return;
}//Juego

void Comodin()
{Menu Mostrar;
char c;
string Prueba=OTRO[rand() % 4][i];
do{ system("cls");
Mostrar.DisplayMenu();
cout<<"\nPOR FAVOR SELECCIONE COMODIN A UTILIZAR:\n"<<endl;
cout<<"0.-REGRESAR AL MENU PRINCIPAL"<<endl;
cout<<"1.-50 / 50"<<endl;
cout<<"2.-AUDIENCIA"<<endl;
cout<<"3.-LLAMADA TELEFONICA\n"<<endl;
cout<<"POR FAVOR SELECCIONE SU OPCION:"<<endl;
c=getch();
if(c<'0' || c>='4')
{cout<<"\nPOR FAVOR INGRESE UNA OPCION VALIDA. PRESIONE \"ENTER\" PARA INTENTARLO DE NUEVO."<<endl;
pause=getch();
}//if
}while(c<'0' || c>='4');
switch(c)
{
    case '1': if(aux1==true)
    {system("cls");
Mostrar.DisplayMenu();
cout<<"\n\n\t\t     ESTE COMODIN YA FUE UTILIZADO."<<endl;
cout<<"\n\t\t    PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
pause=getch();}
    else
    {system("cls");
Mostrar.DisplayMenu();
cout<<"\nPREGUNTA NUMERO"<<" "<<(i+1)<<"\t\t\t"<<"POR UN TOTAL DE: "<<Premio[i]<<" BsF"<<"\n"<<endl;
    cout<<PREGUNTA[i]<<endl;
    cout<<"\n"<<endl;
    if(respuesta[i]==Prueba){
    Prueba=OTRO[rand() % 4][i];}
    cout<<respuesta[i]<<"\t<---------"<<"\n"<<endl;
    cout<<Prueba<<"\t<---------"<<endl;
    cout<<"\n\t\tESTE COMODIN FUE TRAIDOS A USTEDES POR:\n"<<endl;
    cout<<"\t\t\t    FACEBOOK, INC.\n"<<endl;
    cout<<"\t\tPOR FAVOR PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
    aux1=true;
    pause=getch();}
        break;
    case '2': if(aux2==true)
    {
system("cls");
Mostrar.DisplayMenu();
cout<<"\n\n\t\t     ESTE COMODIN YA FUE UTILIZADO."<<endl;
cout<<"\n\t\t    PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
pause=getch();
    }
    else{
        system("cls");
Mostrar.DisplayMenu();
cout<<"\nPREGUNTA NUMERO"<<" "<<(i+1)<<"\t\t\t"<<"POR UN TOTAL DE: "<<Premio[i]<<" BsF"<<"\n"<<endl;
    cout<<PREGUNTA[i]<<endl;
    cout<<"\n"<<endl;
    cout<<RESPUESTA[i]<<") "<<respuesta[i]<<"   <----------------------"<<"\n"<<endl;
    cout<<"\t\tESTE COMODIN FUE TRAIDOS A USTEDES POR:\n"<<endl;
    cout<<"\t\t JOSE CABRERA ENTERTAINMENT SOFTWARE.\n"<<endl;
    cout<<"\t      POR FAVOR PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
    aux2=true;
    pause=getch();}
     break;
    case '3': if(aux3==true)
    {system("cls");
Mostrar.DisplayMenu();
cout<<"\n\n\t\t     ESTE COMODIN YA FUE UTILIZADO"<<endl;
cout<<"\n\t\t    PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
pause=getch();}
    else
    {system("cls");
Mostrar.DisplayMenu();
cout<<"\nPREGUNTA NUMERO"<<" "<<(i+1)<<"\t\t\t"<<"POR UN TOTAL DE: "<<Premio[i]<<" BsF"<<"\n"<<endl;
    cout<<PREGUNTA[i]<<endl;
    cout<<"\n"<<endl;
    cout<<RESPUESTA[i]<<") "<<respuesta[i]<<"   <----------------------"<<"\n"<<endl;
    cout<<"\t\tESTE COMODIN FUE TRAIDOS A USTEDES POR:\n"<<endl;
    cout<<"\t\t\t   APPLE COMPUTER.\n"<<endl;
    cout<<"\t\tPOR FAVOR PRESIONE \"ENTER\" PARA CONTINUAR."<<endl;
    aux3=true;
    pause=getch();}
     break;
}//switch
i=i-1;
    return;
}//Comodin

void RESUMEN()
{ system("cls");
    Menu Mostrar;
Mostrar.DisplayMenu();
cout<<"\n\t\t\t     USTED SE LLEVA "<<Premio[i-1]<<" BsF\n"<<endl;
        cout<<"\t\t\t    GRACIAS POR PARTICIPAR.\n"<<endl;
        cout<<"\t\t\t   ALL RIGHTS RESERVED 2014.\n"<<endl;
        system("PAUSE");
    return;
}

