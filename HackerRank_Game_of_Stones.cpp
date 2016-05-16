/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/a-game-of-stones

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

int winner[110][2];

int solve(int n, int player) {

	if (winner[n][player-1])
		return winner[n][player-1];

	if ( n<0 ) {
		return player;
	}
	else {

		int w2 = solve(n-2, player==1?2:1);
		int w3 = solve(n-3, player==1?2:1);
		int w5 = solve(n-5, player==1?2:1);

		if (w2==player || w3==player || w5==player)
			winner[n][player-1] = player;
		else
			winner[n][player-1] = player==1?2:1;
		
		return winner[n][player-1];
	}


}

int main(){

	int t, n;
	scanf("%d", &t);
	REP(tc, t){
		scanf("%d", &n);
		puts(solve(n, 1)==1?"First":"Second");
	}
	sp;
	return 0;
}

//Solved