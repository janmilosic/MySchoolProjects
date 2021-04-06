#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;


class Lok{

  protected:
    int moc;
    int dolzinaTetive;
    int dolzinaNatega;

  public:

    Lok(int moc, int dolzinaTetive , int dolzinaNatega):
    moc(moc), dolzinaTetive(dolzinaTetive), dolzinaNatega(dolzinaNatega) {}

    void setMoc(int moc) {
      this-> moc = moc;
    }
     void setDolzinaTetive(int dolzinaTetive) {
      this-> dolzinaTetive = dolzinaTetive;
    }

    void setDolzinaNatega(int dolzinaNatega) {
      this-> dolzinaNatega = dolzinaNatega;
    }

    int GetMoc() const {
        return moc;
    }

    int GetDolzinaTetive() const {
        return dolzinaTetive;
    }

    int GetDolzinaNatega() const {
        return dolzinaNatega;
    }

    void izpis(){
        cout<<"Moc: "<<this-> moc <<endl;
        cout<<"Dolzina tetive: "<<this-> dolzinaTetive <<endl;
        cout<<"Dolzina natega: "<<this-> dolzinaNatega <<endl;
}

};

class SestLok : Lok {

private:

  int prenosMoci;

public: 

  SestLok(int moc, int dolzinaTetive , int dolzinaNatega, int prenosMoci):
  Lok(moc, dolzinaTetive, dolzinaNatega), prenosMoci(prenosMoci) {}

  void setPrenosMoci(int prenosMoci) {
      this-> prenosMoci = prenosMoci;
    }

  int getPrenosMoci() const {
      return prenosMoci;
  }

  void izpis(){
      Lok::izpis();
      cout<<"Prenos moci: "<<this-> prenosMoci <<endl;
  } 
};

int main(int argc, char const *argv[])
{
  Lok a (25,40,20);
  a.izpis();

  /*
  SestLok b (10);
  b.izpis();
  */
  return 0;
}
