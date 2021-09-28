#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Pravokot
{
public:
    Pravokot(){};
    ~Pravokot(){};
    void setA(float stranica_a)
    {
        a = stranica_a;
    }
    float getA() {
        return this->a;
    }
    void setB(float stranica_b)
    {
        b = stranica_b;
    }
    float getB() {
        return this->b;
    }
    float povrsina()
    {
        return a*b;
    }
    float obseg() {
        return 2 * a + 2 * b;
    }
    float diagonala() {
        return sqrt(a * a + b * b);
    }
private:
    float a;
    float b;
};

int main()
{
    Pravokot prav;
    prav.setA(3.0);
    prav.setB(2.0);
    cout << prav.povrsina();
    return 0;
}