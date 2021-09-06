#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

void gotoxy(short a, short b)           //Introduction of gotoxy function//
{
    COORD pos = {a,b};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void wait(unsigned timeout)
{
    timeout += clock();
    while(clock() < timeout)
        continue;
}

// sensor de gas a 1100m DA CENTRAL
int p_s1_gas(int p)
{
    //trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'q': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'a': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'z': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

//deve ter 20ms de atraso
    wait(56);
     //wait(21);
    return amostra;
}

// sensor de gas a 700m DA CENTRAL
int p_s2_gas(int p)
{
    //trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'w': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 's': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'x': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 40ms de atraso
    wait(36);
     //wait(21);
    return amostra;
}

// sensor de gas a 300m DA CENTRAL
int p_s3_gas(int p)
{
    //trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'e': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'd': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'c': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 60ms de atraso
    //wait(15);
    wait(16);
    return amostra;
}

// sensor de gas a 1100m DA CENTRAL
int p_s1_oleo(int p)
{
    //trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'r': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'f': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'v': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 20ms de atraso
    wait(56);
    //wait(21);
    return amostra;
}

// sensor de gas a 700m DA CENTRAL
int p_s2_oleo(int p)
{

//trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 't': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'g': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'b': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 40ms de atraso
    wait(36);
    //wait(21);
    return amostra;
}

// sensor de gas a 300m DA CENTRAL
int p_s3_oleo(int p)
{
    //trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'y': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'h': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'n': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 60ms de atraso
    wait(16);
    //wait(16);
    return amostra;
}

//sensor a 1500m DA CENTRAL
int poco(int p)
{//trecho para simular um disturbio no duto de gas;
    char tecla;
    int amostra=-1;

    if(kbhit()) //verifica se alguma tecla foi pressionada, caso contrario retorna 0
    {
        tecla = getch();

        switch(tecla)
        {
        case 'u': //simular disturbio, detectação no sensor gas poço 1
            if(p == 1)//ativa somente se for a chamada do sensor gas poço 1
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'j': //simular disturbio, detectação no sensor gas poço 2
            if(p == 2)//ativa somente se for a chamada do sensor gas poço 2
                amostra = 1;
            else
                amostra = 0;
            break;

        case 'm': //simular disturbio, detectação no sensor gas poço 3
            if(p == 3)//ativa somente se for a chamada do sensor gas poço 3
                amostra = 1;
            else
                amostra = 0;
            break;

        default:
            amostra = 0;
            break;
        }
    }
    else //caso nenhuma techa de simulação seja pressionada então não há nenhum problema, amostra retorna zero
        amostra = 0;

    //deve ter 60ms de atraso
    wait(76);
    //wait(21);
    return amostra;
}

void display(bool stat0,bool gas_stat1, bool gas_stat2, bool gas_stat3,bool oleo_stat1, bool oleo_stat2, bool oleo_stat3,int NUM)
{
    wait(500);
    //wait(89);
    int p=0;
    if(NUM == 1)
    {
        p=5;
    }
    else if(NUM == 2)
    {
        p=14;
    }
    else
    {
        p=24;
    }
    gotoxy(3,p);
    cout<<"|      POÇO    "<<NUM<<" : STATUS  |";
    gotoxy(3,p+1);
    cout<<"| Sensor POÇO    :   "<<stat0<<"     |";
    if(stat0){
        gotoxy(32,p+1);
        cout<<"INSTABILIDADE DETECTADA! POÇO DESLIGADO  ";
    }
    else
        cout<<"                                                        ";

    gotoxy(3,p+2);
    cout<<"| Sensor GAS   1 :   "<<gas_stat1<<"     |";
    if(gas_stat1){
        gotoxy(32,p+2);
        cout<<"INSTABILIDADE DETECTADA! CONTRAMEDIDA: AJUSTE DE PRESSÃO APLICADO   ";
    }
    else if(stat0){
        gotoxy(32,p+2);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";
    gotoxy(3,p+3);
    cout<<"| Sensor GAS   2 :   "<<gas_stat2<<"     |";
    if(gas_stat2){
        gotoxy(32,p+3);
        cout<<"INSTABILIDADE DETECTADA! PRESSÃO AJUSTADA PELO SISTEMA  ";
    }
    else if(stat0){
        gotoxy(32,p+3);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";

    gotoxy(3,p+4);
    cout<<"| Sensor GAS   3 :   "<<gas_stat3<<"     |";
    if(gas_stat3){
        gotoxy(32,p+4);
        cout<<"INSTABILIDADE DETECTADA! PRESSÃO AJUSTADA PELO SISTEMA  ";
    }
    else if(stat0){
        gotoxy(32,p+4);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";

    gotoxy(3,p+5);

    cout<<"| Sensor OLEO  1 :   "<<oleo_stat1<<"     |";
    if(oleo_stat1){
        gotoxy(32,p+5);
        cout<<"INSTABILIDADE DETECTADA! PRESSÃO AJUSTADA PELO SISTEMA  ";
    }
    else if(stat0){
        gotoxy(32,p+5);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";

    gotoxy(3,p+6);
    cout<<"| Sensor OLEO  2 :   "<<oleo_stat2<<"     |";
    if(oleo_stat2){
        gotoxy(32,p+6);
        cout<<"INSTABILIDADE DETECTADA! PRESSÃO AJUSTADA PELO SISTEMA  ";
    }
    else if(stat0){
        gotoxy(32,p+6);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";

    gotoxy(3,p+7);
    cout<<"| Sensor OLEO  3 :   "<<oleo_stat3<<"     |";
    if(oleo_stat3){
        gotoxy(32,p+7);
        cout<<"INSTABILIDADE DETECTADA! PRESSÃO AJUSTADA PELO SISTEMA  ";
    }
    else if(stat0){
        gotoxy(32,p+7);
        cout<<"FORA DE SERVIÇO!                                        ";
    }
     else
        cout<<"                                                        ";
}

//Não sei se precisaria disso mas é uma sub rotina pra informar o sistema pra ajustar a pressão
bool contramedida(bool s0,bool s1,bool s2,bool s3){
 bool check = false;
    if(s0 || s1 || s2 || s3){
        check = true;
    }
    //wait(20);
    return check;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"portuguese");
    bool check_status = false;

    //inicializa display
    display(0,0,0,0,0,0,0,1);
    display(0,0,0,0,0,0,0,2);
    display(0,0,0,0,0,0,0,3);
    while(true)
    {
        unsigned init_time = clock(); // tempo antes de realizar as requisições dos sensores

        //Bloco do poço 1
        bool P1_stat0 = poco(1); // 75ms
        bool P1_gas_stat1 = p_s1_gas(1);// 55 ms
        bool P1_gas_stat2 = p_s2_gas(1); // 35 ms
        bool P1_gas_stat3 = p_s3_gas(1); // 15 ms
        //somando
        bool check_p1_gas = contramedida(P1_stat0,P1_gas_stat1,P1_gas_stat2,P1_gas_stat3);

        bool P1_oleo_stat1 = p_s1_oleo(1); // 55 ms
        bool P1_oleo_stat2 = p_s2_oleo(1); // 35 ms
        bool P1_oleo_stat3 = p_s3_oleo(1); // 15 ms

        bool check_p1_oleo = contramedida(P1_stat0,P1_oleo_stat1,P1_oleo_stat2,P1_oleo_stat3);

        //Bloco do poço 2 Gas
        bool P2_stat0 = poco(2); // 75ms
        bool P2_gas_stat1 = p_s1_gas(2);// 55 ms
        bool P2_gas_stat2 = p_s2_gas(2); // 35 ms
        bool P2_gas_stat3 = p_s3_gas(2); // 15 ms

        bool check_p2_gas = contramedida(P2_stat0,P2_gas_stat1,P2_gas_stat2,P2_gas_stat3);

        bool P2_oleo_stat1 = p_s1_oleo(2); // 55 ms
        bool P2_oleo_stat2 = p_s2_oleo(2); // 35 ms
        bool P2_oleo_stat3 = p_s3_oleo(2); // 15 ms

        bool check_p2_oleo = contramedida(P2_stat0,P2_oleo_stat1,P2_oleo_stat2,P2_oleo_stat3);

        //Bloco do poço 3 Gas
        bool P3_stat0 = poco(3); // 75ms
        bool P3_gas_stat1 = p_s1_gas(3);// 55 ms
        bool P3_gas_stat2 = p_s2_gas(3); // 35 ms
        bool P3_gas_stat3 = p_s3_gas(3); // 15 ms

        bool check_p3_gas = contramedida(P3_stat0,P3_gas_stat1,P3_gas_stat2,P3_gas_stat3);

        bool P3_oleo_stat1 = p_s1_oleo(3); // 55 ms
        bool P3_oleo_stat2 = p_s2_oleo(3); // 35 ms
        bool P3_oleo_stat3 = p_s3_oleo(3); // 15 ms

        bool check_p3_oleo = contramedida(P3_stat0,P3_oleo_stat1,P3_oleo_stat2,P3_oleo_stat3);

        unsigned finish_time = clock(); // tempo depois de realizar as requisições dos sensores
        gotoxy(6,34);
        cout<<"TEMPO DE EXECUÇÃO: "<<finish_time-init_time;

        //informa se o sistema precisou aplicar alguma contramedida
        if(check_p1_gas || check_p2_gas || check_p3_gas || check_p1_oleo || check_p2_oleo || check_p3_oleo){
            gotoxy(5,1);
            cout<<"DISTURBIO DETECTADO!      ";
        }
        else{
            gotoxy(5,1);
            cout<<"STATUS DO SISTEMA NORMAIS ";
        }

        display(P1_stat0,P1_gas_stat1,P1_gas_stat2,P1_gas_stat3,P1_oleo_stat1,P1_oleo_stat2,P1_oleo_stat3,1);
        display(P2_stat0,P2_gas_stat1,P2_gas_stat2,P2_gas_stat3,P2_oleo_stat1,P2_oleo_stat2,P2_oleo_stat3,2);
        display(P3_stat0,P3_gas_stat1,P3_gas_stat2,P3_gas_stat3,P3_oleo_stat1,P3_oleo_stat2,P3_oleo_stat3,3);
    }

    return 0;
}
