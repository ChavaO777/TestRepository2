// A_DiverseStrings.cpp

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <math.h>
#include <functional>
#include <sstream>
#include <cstring>
#include <set>
#include <map>
#include <cstdio>
#include <algorithm>
#include <bitset>
#include <ctime>
using namespace std;

// Shortcuts for "common" data types in contests

#define rep(i, a, b) for (int i = a; i < b; i++)
#define S(x) scanf("%d", &x)
#define S2(x, y) scanf("%d%d", &x, &y)
#define P(x) printf("%d\n", x)
#define all(v) v.begin(), v.end()
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

isDiverse(string s){

    sort(all(s));

    for(int i = 1; i < s.size(); i++){

        if(s[i] - s[i - 1] != 1){

            return false;
        }
    }

    return true;
}

int main(){

    int tc;
    S(tc);
    getchar();

    string s;

    while(tc--){

        getline(cin, s);

        if(isDiverse(s))
            cout<<"Yes\n";

        else
            cout<<"No\n";
    }

    return 0;
}
