#include"CRat.h"
using namespace std;

ostream &operator<<(ostream&f, const CRat &x)
{if(x.ch==0)f<<"0";
 else f<<x.ch<<"/"<<x.zn;
 return f;
}

istream &operator>>(istream&f, CRat &x)
{int ch; U zn;
 f>>x.ch>>x.zn;
 x.sokr();
 return f;
}
