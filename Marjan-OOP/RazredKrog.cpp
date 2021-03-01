#include <iostream>
#define PI 3.14159265358979323846264338327950288419
using namespace std;

class Krog {

private:
    float x, y;
    float R;

public:

    Krog() {}

    void getS() {
        cout << "S(" << x << ", " << y << ")" << endl;
    }

    void setS(float x, float y) {
        this->x = x;
        this->y = y;
    }

    float getR() {
        return this->R;
    }

    void setR(float r) {
        this->R = r;
    }

    float obseg() {
        return 2 * PI * this->R;
    }

    float povrsina() {
        return PI * this->R * this->R;
    }

};

int main() {

    float x, y, R;
    Krog *krog = new Krog;

    cout << "Podaj x koordinato: ";
    cin >> x;
    cout << "Podaj y koordinato: ";
    cin >> y;
    cout << "Podaj radij: ";
    cin >> R;

    krog->setS(x, y);
    krog->setR(R);

    krog->getS();
    cout << krog->getR() << endl;
    cout << krog->obseg() << endl;
    cout << krog->povrsina() << endl;

    return 0;
}