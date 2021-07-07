#include<bits/stdc++.h>
using namespace std;

namespace myio
{
	struct instream
	{};
	struct oustream
	{};
	struct control
	{
		string type;
		int val;
	};
	string endline="\n";
	string fixed="";
	instream inp;
	oustream oup;
	char chtmp[1100000];
	int precision=0;
	inline
	control setprecision(int x)
	{
		return (control){"setprecision",x};
	}
	inline
	oustream operator << (oustream ou, control c)
	{
		if(c.type=="setprecision")
		{
			precision=c.val;
		}
	}
	inline
	instream operator >> (instream in,int &x)
	{
		scanf("%d",&x);
		return in;
	}
	inline
	instream operator >> (instream in,long long &x)
	{
		scanf("%lld",&x);
		return in;
	}
	inline
	instream operator >> (instream in,double &x)
	{
		scanf("%lf",&x);
		return in;
	}
	inline
	instream operator >> (instream in,char &x)
	{
		scanf(" %c",&x);
		return in;
	}
	inline
	instream operator >> (instream in,string &s)
	{
		s="";
		scanf("%s",chtmp);
		string t="#";
		for(int i=0;chtmp[i]!='\0';i++)
		{
			t[0]=chtmp[i];
			s+=t[0];
		}
		return in;
	}
	inline
	void getformat()
	{
		sprintf(chtmp,"%%.%dlf",precision);
	}
	inline
	oustream operator << (oustream ou,int x)
	{
		getformat();
		printf(chtmp,x);
		return ou;
	}
	inline
	oustream operator << (oustream ou,long long x)
	{
		getformat();
		printf(chtmp,x);
		return ou;
	}
	inline
	oustream operator << (oustream ou,double x)
	{
		getformat();
		printf(chtmp,x);
		return ou;
	}
	inline
	oustream operator << (oustream ou,float x)
	{
		getformat();
		printf(chtmp,x);
		return ou;
	}
	inline
	oustream operator << (oustream ou,char x)
	{
		printf("%c",x);
		return ou;
	}
	inline
	oustream operator << (oustream ou,string s)
	{
		for(int i=0;i<s.size();i++)
		{
			chtmp[i]=s[i];
		}
		chtmp[s.size()]='\0';
		printf("%s",chtmp);
		return ou;
	}
}
using namespace myio;
#define cin (myio::inp)
#define cout (myio::oup)
#define endl (myio::endline)
#define fixed (myio::fixed)
#define setprecision (myio::setprecision)
