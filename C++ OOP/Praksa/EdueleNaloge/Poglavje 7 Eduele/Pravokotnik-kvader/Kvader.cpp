#include "Kvader.h"

Kvader::Kvader() {}

Kvader::~Kvader() {}

Kvader::Kvader(float a, float b, float c) : Pravokotnik(a, b) {
    this->c = c;
}

float Kvader::povrsina() {
    return 2 * (a*b + a*c + b*c);
}

float Kvader::obseg() { 
    return 0;
}

float Kvader::volumen() {
    return a * b * c;
}