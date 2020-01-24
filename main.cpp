#include <iostream>
using namespace std;

class Perro
{
    public:
        string name;
        int edad;
        void printname ()
        {
            cout<< "Mi nombre es: "<< name;
        }
        void printedad ()
        {
            cout<< "Tengo "<< edad<< " agnos";
        }
        void printedadcanina ()
        {
            cout<< "Tengo "<< edad*7 << " agnos caninos"<< endl;
        }
};

int main(){
    Perro isabelle;
    isabelle.name = "Isabelle";
    isabelle.printname();
    cout << endl;

    isabelle.edad = 9;
    isabelle.printedad();
    cout << endl; 

    isabelle.printedadcanina();

    Perro robin;
    robin.name= "Robin";
    robin.printname();
    cout << endl;

    robin.edad;
    robin.edad= 2;
    robin.printedad();
    cout<<endl;

    robin.printedadcanina();

    return 0;
}