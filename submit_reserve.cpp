#include<bits/stdc++.h>
#ifdef LOCAL
	#include<mydebug.h>
#endif
#ifndef LOCAL
	#define dbg(x) ;
	#define adbg(x) ;
#endif

using namespace std;
using ll = long long int;
#define ENDL '\n'
void solve();
int main(int argc,char *argv[]){ 	int t=1; //cin>>t; 
	
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	#ifdef LOCAL
		clock_t tStart = clock();
		cout<<"Running ... "<<argv[0]<<ENDL;
	#endif
	while(t--)
	{
	 solve();
	}

	#ifdef LOCAL

		fprintf(stderr, "\n>> Runtime: %f s\n", (double)((clock() - tStart) / CLOCKS_PER_SEC));
		
	#endif
	
	return 0; 
}

void solve()
{
	int ans=5;
	
	cout<<ans<<ENDL;

}
















