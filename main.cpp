#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void wait(unsigned timeout)
{
  timeout += clock();
  while(clock() < timeout) continue;
}

// sensor de gas a 400m
int p_s1_gas(){
    //deve ter 20ms de atraso
    wait(20);
    return 1;
}

// sensor de gas a 800m
int p_s2_gas(){
    //deve ter 40ms de atraso
    wait(40);
    return 1;
}

// sensor de gas a 1200m
int p_s3_gas(){
    //deve ter 60ms de atraso
    wait(60);
    return 1;
}

// sensor de gas a 400m
int p_s1_oleo(){
    //deve ter 20ms de atraso
    wait(20);
    return 1;
}

// sensor de gas a 800m
int p_s2_oleo(){
    //deve ter 40ms de atraso
    wait(40);
    return 1;
}

// sensor de gas a 1200m
int p_s3_oleo(){
    //deve ter 60ms de atraso
    wait(60);
    return 1;
}

int posso(){
    //deve ter 60ms de atraso
    wait(60);
    return 1;
}

void display(bool stat0,bool gas_stat1, bool gas_stat2, bool gas_stat3,bool oleo_stat1, bool oleo_stat2, bool oleo_stat3){
    wait(500);
    cout<<"\nSensor 0:"<<stat0;
    cout<<"\nSensor 1:"<<gas_stat1;
    cout<<"\nSensor 2:"<<gas_stat2;
    cout<<"\nSensor 3:"<<gas_stat3;

    cout<<"\nSensor 1:"<<oleo_stat1;
    cout<<"\nSensor 2:"<<oleo_stat2;
    cout<<"\nSensor 3:"<<oleo_stat3;
}


int main(int argc, char const *argv[])
{
    while(true){

        unsigned init_time = clock(); // tempo antes de realizar as requisições dos sensores

        //Bloco do posso 1
        bool P1_stat0 = posso();

        bool P1_gas_stat1 = p_s1_gas(); //20ms
        bool P1_gas_stat2 = p_s2_gas(); //40ms
        bool P1_gas_stat3 = p_s3_gas(); //60ms

        bool P1_oleo_stat1 = p_s1_oleo(); //20ms
        bool P1_oleo_stat2 = p_s2_oleo(); //40ms
        bool P1_oleo_stat3 = p_s3_oleo(); //60ms

        //Bloco do posso 2 Gas
        bool P2_stat0 = posso();

        bool P2_gas_stat1 = p_s1_gas(); //20ms
        bool P2_gas_stat2 = p_s2_gas(); //40ms
        bool P2_gas_stat3 = p_s3_gas(); //60ms

        bool P2_oleo_stat1 = p_s1_oleo(); //20ms
        bool P2_oleo_stat2 = p_s2_oleo(); //40ms
        bool P2_oleo_stat3 = p_s3_oleo(); //60ms

        //Bloco do posso 3 Gas
        bool P3_stat0 = posso();

        bool P3_gas_stat1 = p_s1_gas(); //20ms
        bool P3_gas_stat2 = p_s2_gas(); //40ms
        bool P3_gas_stat3 = p_s3_gas(); //60ms

        bool P3_oleo_stat1 = p_s1_oleo(); //20ms
        bool P3_oleo_stat2 = p_s2_oleo(); //40ms
        bool P3_oleo_stat3 = p_s3_oleo(); //60ms

        unsigned finish_time = clock(); // tempo depois de realizar as requisições dos sensores

        display(P1_stat0,P1_gas_stat1,P1_gas_stat2,P1_gas_stat3,P1_oleo_stat1,P1_oleo_stat2,P1_oleo_stat3);
        display(P2_stat0,P2_gas_stat1,P2_gas_stat2,P2_gas_stat3,P2_oleo_stat1,P2_oleo_stat2,P2_oleo_stat3);
        display(P3_stat0,P3_gas_stat1,P3_gas_stat2,P3_gas_stat3,P3_oleo_stat1,P3_oleo_stat2,P3_oleo_stat3);

    }

    return 0;
}
