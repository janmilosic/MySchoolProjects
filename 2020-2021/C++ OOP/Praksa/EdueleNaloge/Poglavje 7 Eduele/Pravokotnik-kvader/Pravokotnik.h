#ifndef PRAVOKOTNIK_H
#define PRAVOKOTNIK_H


class Pravokotnik {
protected:
    float a, b;

public:
    Pravokotnik();
    ~Pravokotnik();
    Pravokotnik(float, float);
    Pravokotnik(float);

    float povrsina();
    float obseg();
};


#endif //PRAVOKOTNIK_H