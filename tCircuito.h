#include <fstream>
using namespace std;

namespace crt{
  void calculos()
  {
  float R1,R2;
  float Rs, Rp;
  float V,I,P;
  int R;

  cout << "Analise de Circuito Serie-Paralelo" << endl;
  cout<<"Insira o valor da fonte (volts):"<<endl;
  cin>> V;
  cout << "Insira os valores das resistencias (ohms)\nR1:\t";
  cin >> R1;
  cout << "R2:\t";
  cin >> R2;
  cout<< "Os resistores estão em série ou paralelo?"<<endl;
  cout<< "Digite 1 para série ou 2 para paralelo"<<endl;
  cin>>R;
  
  if(R==1){
   Rs=R1+R2;
   I= V/Rs;
   P=V/I;
  
  //CRIANDO ARQUIVO TXT
  ofstream saida;
  ifstream entrada;
  string texto = " ";

  saida.open("arquivo.txt", ios::out);
  saida<<"A resistencia em serie é:"<<Rs<<"ohms"<<endl;
  saida<<"A corrente total é:" << I << "A"<< endl;
  saida<<"A potencia total é:" << P << "W"<< endl;
  saida.close();

//LENDO ARQUIVO TXT
    entrada.open ("arquivo.txt", ios::in);
    while (!entrada.eof())
    {
      entrada>>texto;
      cout<<texto<<" ";
    }
    entrada.close();

  }

  
  if(R==2)
  {

    Rp=((R1*R2)/(R1+R2));
    I= V/Rp;
    P=V/I;
      ofstream saida;
      ifstream entrada;
      string texto = " ";
      saida.open("arquivo.txt", ios::out);
  //CRIANDO ARQUIVO TXT
    saida<<"A resistencia em pararelo é:"<< Rp << "ohms"<<endl;
    
    saida<<"A corrente total é:" << I << "A"<< endl;
    
    saida<<"A potencia total é:" << P << "W"<< endl;

  //LENDO ARQUIVO TXT

    entrada.open ("arquivo.txt", ios::in);
    while (!entrada.eof())
    {
      entrada>>texto;
      cout<<texto<<" ";
    }
    entrada.close();
  }
 
  }

}