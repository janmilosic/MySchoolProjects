#ifndef KVADER_H
#define KVADER_H

#include "Pravokotnik.h"

class Kvader : public Pravokotnik {
private:
    float c;

public:
    Kvader();
    ~Kvader();
    Kvader(float, float, float);

    float povrsina();
    float obseg();
    float volumen();
};


#endif //KVADER_H