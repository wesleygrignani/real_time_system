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
int p1_s1_gas(){
    //deve ter 20ms de atraso
    wait(20);
    return 1;
}

// sensor de gas a 800m
int p1_s2_gas(){
    //deve ter 40ms de atraso
    wait(40);
    return 1;
}

// sensor de gas a 1200m
int p1_s3_gas(){
    //deve ter 60ms de atraso
    wait(60);
    return 1;
}

void display(bool stat1, bool stat2, bool stat3){
    wait(500);
    cout<<"\nSensor 1:"<<stat1;
    cout<<"\nSensor 2:"<<stat2;
    cout<<"\nSensor 3:"<<stat3;
}


int main(int argc, char const *argv[])
{
    while(true){

        unsigned init_time = clock(); // tempo antes de realizar as requisições dos sensores

        bool stat1 = p1_s1_gas(); //20ms
        bool stat2 = p1_s2_gas(); //40ms
        bool stat3 = p1_s3_gas(); //60ms

        unsigned finish_time = clock(); // tempo depois de realizar as requisições dos sensores

        display(stat1,stat2,stat3);

        
        
    }

    return 0;
}
