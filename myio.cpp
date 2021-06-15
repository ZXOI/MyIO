namespace myio
{
	struct instream
	{};
	struct oustream
	{};
	string endline="\n";
	instream inp;
	oustream oup;
	char chtmp[1100000];
	instream operator >> (instream in,int &x)
	{
		scanf("%d",&x);
		return in;
	}
	instream operator >> (instream in,long long &x)
	{
		scanf("%lld",&x);
		return in;
	}
	instream operator >> (instream in,char &x)
	{
		scanf(" %c",&x);
		return in;
	}
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
	oustream operator << (oustream ou,int x)
	{
		printf("%d",x);
		return ou;
	}
	oustream operator << (oustream ou,long long x)
	{
		printf("%lld",x);
		return ou;
	}
	oustream operator << (oustream ou,char x)
	{
		printf("%c",x);
		return ou;
	}
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