#include "opecacoes.h"

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    if(b == 0)
        return 0;
    else
        return a / b;
}