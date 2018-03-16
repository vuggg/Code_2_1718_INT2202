#include <iostream>
#include <cstring>

using namespace std;
int tandem(char *s, char *ss,int x, int step);

int main()
{
	int N,M; cin >> N >> M;
	char s[10000]; cin >> s;
	int toado[M][2];
	for(int i=0;i<M;i++)
	{
		cin >> toado[i][0] >> toado[i][1];
	}
	char ss[M][2000];
	for(int i=0;i<M;i++)
	{
		int len = toado[i][1]-toado[i][0]+1;
		strncpy(ss[i]+0,s+toado[i][0]-1,len);
		ss[i][len] = '\0';	
	}
	for(int i=0;i<M;i++)
	{
		cout << tandem(s,ss[i],toado[i][0]-1,toado[i][1] - toado[i][0]+1) << endl;
	}	
}

int tandem(char *s, char *ss,int x, int step)
{
	int count = 0;
	int lenS = strlen(s);
	char t[step];
	for(int i=x;i<=lenS;)
	{
		strncpy(t+0,s+i,step);
		t[step] = '\0';
		if(strncmp(t,ss,step)==0)
		{
			count = count +1;
			i+=step;
		}
		else
		{
			return count;
		}
	}
	return count;
}
