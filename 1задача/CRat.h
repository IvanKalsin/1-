#pragma once
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <memory>                                
typedef unsigned U;
using namespace std;

class CRat
{int NOD(int a,int b)
 {int Max,Min;
  if(a==0||a==b)
  {
   return abs(b);
  }
  else
  {
   if(abs(a)<abs(b)){Min=abs(a);Max=(b);}
   else{Min=abs(b);Max=abs(a);}
   return NOD(Max%Min,Min);
  }
 }
public:
 int ch;
 U zn;
 CRat(){this->ch=0;this->zn=1;}
 CRat(int ch_,U zn_){if(zn_==0) throw -1; this->ch=ch_; this->zn=zn_; this->sokr();}
 CRat operator+ (const CRat &x){CRat t; t.ch=(this->ch)*((int)(x.zn))+(x.ch)*((int)(this->zn)); t.zn=(this->zn)*x.zn; return t.sokr();}
 CRat operator- (const CRat &x){CRat t; t.ch=(this->ch)*((int)(x.zn))-(x.ch)*((int)(this->zn)); t.zn=(this->zn)*x.zn; return t.sokr();}
 CRat operator* (const CRat &x){CRat t; t.ch=(this->ch)*x.ch; t.zn=(this->zn)*x.zn; return t.sokr();}
 CRat operator+= (const CRat &x){this->ch=(this->ch)*((int)(x.zn))+(x.ch)*((int)(this->zn)); this->zn=(this->zn)*x.zn; (*this).sokr(); return (*this);}
 CRat operator-= (const CRat &x){this->ch=(this->ch)*((int)(x.zn))-(x.ch)*((int)(this->zn)); this->zn=(this->zn)*x.zn; (*this).sokr(); return (*this);}
 CRat operator*= (const CRat &x){this->ch=(this->ch)*x.ch; this->zn=(this->zn)*x.zn; this->sokr(); return (*this);}
 CRat operator/ (const CRat &x){CRat t; t.ch=(x.ch>0?(int)x.zn:-(int)x.zn); t.zn=abs(x.ch); t*=(*this); return t.sokr();}
 CRat operator/= (const CRat &x){CRat t; t.ch=(x.ch>0?(int)x.zn:-(int)x.zn); t.zn=abs(x.ch); (*this)*=t; this->sokr(); return (*this);}
 CRat sokr(){if(NOD(ch,(int)zn)!=1){int a=NOD(ch,(int)zn);ch=ch/a; zn=zn/a;}return (*this);}
 
 bool operator==(const CRat &a)const{return ((this->ch)*((int)a.zn))==((int)(this->zn)*(a.ch));}
 bool operator!=(const CRat &a)const{return ((this->ch)*((int)a.zn))!=((int)(this->zn)*(a.ch));}
 bool operator>(const CRat &a)const{return ((this->ch)*((int)a.zn))>((int)(this->zn)*(a.ch));}
 bool operator<(const CRat &a)const{return ((this->ch)*((int)a.zn))<((int)(this->zn)*(a.ch));}
 bool operator>=(const CRat &a)const{return ((this->ch)*((int)a.zn))>=((int)(this->zn)*(a.ch));}
 bool operator<=(const CRat &a)const{return ((this->ch)*((int)a.zn))<=((int)(this->zn)*(a.ch));}

 int go_to_int(){return ch/(int)zn;}
 double go_to_double(){return ((double)ch)/((double)zn);}
 
 friend ostream &operator<<(ostream&f, const CRat &x);
 friend istream &operator>>(istream&f, CRat &x);
};
