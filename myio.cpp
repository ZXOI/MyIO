namespace myio{
	struct instream{};
	struct oustream{};
	struct control{string type;int val;};

	string endline="\n",fixed="";
	instream inp;oustream oup;
	char chtmp[1100000];int precision=123321123;

	inline instream operator >> (instream in,int &x){scanf("%d",&x);return in;}
	inline instream operator >> (instream in,bool &x){scanf("%d",&x);return in;}
	inline instream operator >> (instream in,double &x){scanf("%lf",&x);return in;}
	inline instream operator >> (instream in,long long &x){scanf("%lld",&x);return in;}
	inline instream operator >> (instream in,unsigned long long &x){scanf("%llu",&x);return in;}
	inline instream operator >> (instream in,float &x){scanf("%lf",&x);return in;}
	inline instream operator >> (instream in,char &x){scanf(" %c",&x);return in;}
	inline instream operator >> (instream in,string &s){s="";scanf("%s",chtmp);string t="#";for(int i=0;chtmp[i]!='\0';i++){t[0]=chtmp[i];s+=t[0];}return in;}

	inline control setprecision(int x){return (control){"setprecision",x};}
	inline oustream operator << (oustream ou, control c){if(c.type=="setprecision"){precision=c.val;}return ou;}
	inline void getformat(){sprintf(chtmp,"%%.%dlf",precision);}
	inline oustream operator << (oustream ou,int x){if(precision==123321123){printf("%d",x);return ou;}getformat();printf(chtmp,x);return ou;}
	inline oustream operator << (oustream ou,long long x){if(precision==123321123){printf("%lld",x);return ou;}getformat();printf(chtmp,x);return ou;}
	inline oustream operator << (oustream ou,unsigned long long x){if(precision==123321123){printf("%llu",x);return ou;}getformat();printf(chtmp,x);return ou;}
	inline oustream operator << (oustream ou,double x){if(precision==123321123){printf("%.6lf",x);return ou;}getformat();printf(chtmp,x);return ou;}
	inline oustream operator << (oustream ou,float x){if(precision==123321123){printf("%.6lf",x);return ou;}getformat();printf(chtmp,x);return ou;}
	inline oustream operator << (oustream ou,char x){printf("%c",x);return ou;}
	inline oustream operator << (oustream ou,string s){for(int i=0;i<s.size();i++){chtmp[i]=s[i];}chtmp[s.size()]='\0';printf("%s",chtmp);return ou;}
	inline oustream operator << (oustream ou,bool x){printf("%d",(x?1:0));return ou;}
	inline oustream operator << (oustream ou,const char *s){printf("%s",s);return ou;}
}
using namespace myio;
#define cin (myio::inp)
#define cout (myio::oup)
#define endl (myio::endline)
#define fixed (myio::fixed)
#define setprecision (myio::setprecision)
