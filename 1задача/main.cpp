#include"CRat.h"
using namespace std;

int main(void)
{
 FILE *f=fopen("v.txt","r");

 CRat a1(2,4), a2(6,3);
 try{
  cin>>a1>>a2;
  cout<<"a1 = "<<a1<<endl;
  cout<<"a2 = "<<a2<<endl;
  cout<<"a1+a2 = "<<a1+a2<<endl;
  cout<<"a1-a2 = "<<a1-a2<<endl;
  cout<<"a1*a2 = "<<a1*a2<<endl;
  cout<<"a1/a2 = "<<a1/a2<<endl;
  cout<<"a1+=a2"<<endl;  
  a1+=a2;
  cout<<"a1 = "<<a1<<endl;
  cout<<"a2-=a1"<<endl;
  a2-=a1;
  cout<<"a2 = "<<a2<<endl;
  cout<<"a1*=a2"<<endl;
  a1*=a2;
  cout<<"a1 = "<<a1<<endl;
  cout<<"a2/=a1"<<endl;
  a2/=a1;
  cout<<"a2 = "<<a2<<endl;
  cout<<"______________________________"<<endl;
  cout<<"a1 = "<<a1<<endl;
  cout<<"a2 = "<<a2<<endl;
  cout<<"a1==a2? "<<int(a1==a2)<<endl;
  cout<<"a1!=a2? "<<int(a1!=a2)<<endl;
  cout<<"a1<a2? "<<int(a1<a2)<<endl;
  cout<<"a1>a2? "<<int(a1>a2)<<endl;
  cout<<"a1<=a2? "<<int(a1<=a2)<<endl;
  cout<<"a1>=a2? "<<int(a1>=a2)<<endl;
  cout<<"(int)a1 = "<<a1.go_to_int()<<endl;
  cout<<"(double)a1 = "<<a1.go_to_double()<<endl;
 }catch(int err){cout<<err<<endl;}
 fclose(f);
 cout<<"done"<<endl;
 return 1;
}