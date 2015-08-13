#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
//#define pi 3.141

using namespace std;

int main(int argc, char *argv[])
{
    FILE *cfPtr;
    FILE *cfPtr_O;
    float pi=3.141;
    float r;
    float h;
    float volume, s, lateral, base;
    cfPtr = fopen("entrada.txt", "r");
    fscanf(cfPtr, "%f", &r);
//    printf(r)
    cout<<r<<endl;  
    fscanf(cfPtr, "%f", &h);
    cout<<h<<endl;
    fclose(cfPtr);
//    fopen("entrada.txt")
    volume = pi*r*r*h/3;
    s = sqrt(r*r+h*h);
    lateral = pi*r*s;
    base = pi*r*r;
    cout<<volume<<endl;
    cout<<base<<endl;
    cout<<lateral<<endl;
    
    
    
    cfPtr_O = fopen("saida.txt", "w");
    fprintf(cfPtr_O, "%f\n", base);
    fprintf(cfPtr_O, "%f\n", lateral);
    fprintf(cfPtr_O, "%f\n", volume);
    fclose(cfPtr_O);
    
//    system("PAUSE");
    return EXIT_SUCCESS;
}
