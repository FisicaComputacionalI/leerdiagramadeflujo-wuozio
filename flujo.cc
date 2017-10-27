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
      for (i=2; i<=P/2; ++i){
	if(P%i==0)
	  {primo=0;
	    P=P+2;
	    cout<<"P es "<<P<<endl;
   	  }
	else primo=1;
      }
    } while(primo=0);
    if (P<S) {S=S-P;}
    else {S=S-1;}
    cout<<"S es "<<S<<endl;
    if (S==0) {break;}
    else {P=P+2;}
    cout<<"P es "<<P<<endl;
  }
    while(fl=1);
  
  cout<<"Pfinal es = "<<P<<endl;
  return 0;
}
