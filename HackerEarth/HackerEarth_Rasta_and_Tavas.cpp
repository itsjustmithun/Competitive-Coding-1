/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/august-clash-15/algorithm/rasta-and-tavas/

#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

int p[1000001];

void seiv(){

	ll int i, j, lim = sqrt(1000001);
	for (i = 2; i<1000001; i++){
		if (!p[i]){
			for (j = i; j<1000001; j += i)
				p[j] += i;
		}
	}
}

int main(){

	seiv();
	int n, k,ans=0;
	scanf("%d%d", &n, &k);
	FOR(i, 1, n){
		if (p[i]==k)
			ans++;
	}
	printf("%d\n", ans);
	sp;
	return 0;
}

//Solved