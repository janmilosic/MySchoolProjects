
//Naloga razred krog

/* 
Napiši program, v katerem je definiran predmet razreda krog. Krog je podan s središčem S(x, y) ter radijem R. Napiši metode za prodobivanje in vračanje vrednosti S in R, ter še metodi za izračun obsega in površine kroga.
*/

#include <iostream>
#define PI 3.14159265358979323846264338327950288419

using namespace std;

class Krog
{

private:
    float x, y;
    float R;

public:
    Krog() {}

    void getS()
    {
        cout << "S(" << x << ", " << y << ")" << endl;
    }

    void setS(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    float getR()
    {
        return this->R;
    }

    void setR(float r)
    {
        this->R = r;
    }

    float obseg()
    {
        return 2 * PI * this->R;
    }

    float povrsina()
    {
        return PI * this->R * this->R;
    }
};

int main()
{

    float x, y, R;
    Krog *krog = new Krog;

    cout << "Vnesi x : ";
    cin >> x;
    cout << "Vnesi y : ";
    cin >> y;
    cout << "Vnesi radij: ";
    cin >> R;

    krog->setS(x, y);
    krog->setR(R);

    krog->getS();
    cout << " R: " << krog->getR() << endl;
    cout << " Obseg: " << krog->obseg() << endl;
    cout << " Povrsina: " << krog->povrsina() << endl;

    return 0;
}
