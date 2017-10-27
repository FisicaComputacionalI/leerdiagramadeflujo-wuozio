//DIAGRAMA DE FLUJO
//ROCIO FLORES HERNANDEZ
//TAREA LUNES 23 DE OCTUBRE
#include <iostream>
using namespace std;
int main()
{
  int S=12,P,i;
  int primo=1;
  int fl=1;
  cout<<"DAME UN ENTERO POSITIVO:"<<endl;
  cin>> P;
  do{
    do{
      if (P%2==0) P=P+1;
      for (i=2; i<=P/2; i++)
	if(P%i==0)
	  {primo=0;
	    P=P+2;
	  }
	else primo=1;
    } while(primo=0);
    if (P<S) {S=S-P;}
    else {S=S-1;}
    if (S==0) {break;}
    else {P=P+2;}
  }while(fl=1);

  cout<<"P="<<P<<endl;
  return 0;
}
