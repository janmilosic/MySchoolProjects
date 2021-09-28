#include "Pravokotnik.h"

Pravokotnik::Pravokotnik() {}

Pravokotnik::~Pravokotnik() {}

Pravokotnik::Pravokotnik(float a, float b) {
    this->a = a;
    this->b = b;
}

Pravokotnik::Pravokotnik(float a) {
    this->a = a;
}

float Pravokotnik::povrsina() {
    return 0;
}

float Pravokotnik::obseg() {
    return 2 * this->a + 2 * this->b;
}