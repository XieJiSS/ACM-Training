/** Micro Mezz Macro Flation -- Overheated Economy ., Last Update: Oct. 23th 2013 **/ //{

/** Header .. **/ //{
#pragma comment(linker, "/STACK:36777216")
//#pragma GCC optimize ("O2")
#define LOCAL
//#include "testlib.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <climits>
#include <cassert>
#include <complex>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include <set>
#include <map>

//#include <tr1/unordered_set>
//#include <tr1/unordered_map>
//#include <array>

using namespace std;

#define REP(i, n) for (int i=0;i<n;++i)
#define FOR(i, a, b) for (int i=a;i<b;++i)
#define DWN(i, b, a) for (int i=b-1;i>=a;--i)
#define REP_1(i, n) for (int i=1;i<=n;++i)
#define FOR_1(i, a, b) for (int i=a;i<=b;++i)
#define DWN_1(i, b, a) for (int i=b;i>=a;--i)
#define REP_C(i, n) for (int n____=n,i=0;i<n____;++i)
#define FOR_C(i, a, b) for (int b____=b,i=a;i<b____;++i)
#define DWN_C(i, b, a) for (int a____=a,i=b-1;i>=a____;--i)
#define REP_N(i, n) for (i=0;i<n;++i)
#define FOR_N(i, a, b) for (i=a;i<b;++i)
#define DWN_N(i, b, a) for (i=b-1;i>=a;--i)
#define REP_1_C(i, n) for (int n____=n,i=1;i<=n____;++i)
#define FOR_1_C(i, a, b) for (int b____=b,i=a;i<=b____;++i)
#define DWN_1_C(i, b, a) for (int a____=a,i=b;i>=a____;--i)
#define REP_1_N(i, n) for (i=1;i<=n;++i)
#define FOR_1_N(i, a, b) for (i=a;i<=b;++i)
#define DWN_1_N(i, b, a) for (i=b;i>=a;--i)
#define REP_C_N(i, n) for (int n____=(i=0,n);i<n____;++i)
#define FOR_C_N(i, a, b) for (int b____=(i=0,b);i<b____;++i)
#define DWN_C_N(i, b, a) for (int a____=(i=b-1,a);i>=a____;--i)
#define REP_1_C_N(i, n) for (int n____=(i=1,n);i<=n____;++i)
#define FOR_1_C_N(i, a, b) for (int b____=(i=1,b);i<=b____;++i)
#define DWN_1_C_N(i, b, a) for (int a____=(i=b,a);i>=a____;--i)

#define ECH(it, A) for (__typeof(A.begin()) it=A.begin(); it != A.end(); ++it)
#define REP_S(i, str) for (char*i=str;*i;++i)
#define REP_L(i, hd, nxt) for (int i=hd;i;i=nxt[i])
#define REP_G(i, u) REP_L(i,hd[u],suc)
#define REP_SS(x, s) for (int x=s;x;x=(x-1)&s)
#define DO(n) for ( int ____n = n; ____n-->0; )
#define REP_2(i, j, n, m) REP(i, n) REP(j, m)
#define REP_2_1(i, j, n, m) REP_1(i, n) REP_1(j, m)
#define REP_3(i, j, k, n, m, l) REP(i, n) REP(j, m) REP(k, l)
#define REP_3_1(i, j, k, n, m, l) REP_1(i, n) REP_1(j, m) REP_1(k, l)
#define REP_4(i, j, k, ii, n, m, l, nn) REP(i, n) REP(j, m) REP(k, l) REP(ii, nn)
#define REP_4_1(i, j, k, ii, n, m, l, nn) REP_1(i, n) REP_1(j, m) REP_1(k, l) REP_1(ii, nn)

#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define BSC(A, x) (lower_bound(ALL(A), x) - A.begin())
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int((A).size())
#define PB push_back
#define MP(A, B) make_pair(A, B)
#define PTT pair<T, T>
#define Ts *this
#define rTs return Ts
#define fi first
#define se second
#define re real()
#define im imag()

#define Rush for(int ____T=RD(); ____T--;)
#define Display(A, n, m) {                      \
REP(i, n){                                    \
REP(j, m-1) cout << A[i][j] << " ";     \
cout << A[i][m-1] << endl;                \
}                                            \
}
#define Display_1(A, n, m) {                    \
REP_1(i, n){                                \
REP_1(j, m-1) cout << A[i][j] << " ";   \
cout << A[i][m] << endl;                \
}                                            \
}

typedef long long LL;
//typedef long double DB;
typedef double DB;
typedef unsigned uint;
typedef unsigned long long uLL;

typedef vector<int> VI;
typedef vector<char> VC;
typedef vector<string> VS;
typedef vector<LL> VL;
typedef vector<DB> VF;
typedef set<int> SI;
typedef set<string> SS;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;

template<class T> inline T& RD(T &);
template<class T> inline void OT(const T &);
//inline int RD(){int x; return RD(x);}
inline LL RD(){LL x; return RD(x);}
inline DB& RF(DB &);
inline DB RF(){DB x; return RF(x);}
inline char* RS(char *s);
inline char& RC(char &c);
inline char RC();
inline char& RC(char &c){scanf(" %c", &c); return c;}
inline char RC(){char c; return RC(c);}
//inline char& RC(char &c){c = getchar(); return c;}
//inline char RC(){return getchar();}

template<class T> inline T& RDD(T &);
inline LL RDD(){LL x; return RDD(x);}

template<class T0, class T1> inline T0& RD(T0 &x0, T1 &x1){RD(x0), RD(x1); return x0;}
template<class T0, class T1, class T2> inline T0& RD(T0 &x0, T1 &x1, T2 &x2){RD(x0), RD(x1), RD(x2); return x0;}
template<class T0, class T1, class T2, class T3> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3){RD(x0), RD(x1), RD(x2), RD(x3); return x0;}
template<class T0, class T1, class T2, class T3, class T4> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4); return x0;}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4), RD(x5); return x0;}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5, T6 &x6){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4), RD(x5), RD(x6); return x0;}
template<class T0, class T1> inline void OT(const T0 &x0, const T1 &x1){OT(x0), OT(x1);}
template<class T0, class T1, class T2> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2){OT(x0), OT(x1), OT(x2);}
template<class T0, class T1, class T2, class T3> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3){OT(x0), OT(x1), OT(x2), OT(x3);}
template<class T0, class T1, class T2, class T3, class T4> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4, const T5 &x5){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4), OT(x5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4, const T5 &x5, const T6 &x6){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4), OT(x5), OT(x6);}
inline char& RC(char &a, char &b){RC(a), RC(b); return a;}
inline char& RC(char &a, char &b, char &c){RC(a), RC(b), RC(c); return a;}
inline char& RC(char &a, char &b, char &c, char &d){RC(a), RC(b), RC(c), RC(d); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e){RC(a), RC(b), RC(c), RC(d), RC(e); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e, char &f){RC(a), RC(b), RC(c), RC(d), RC(e), RC(f); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e, char &f, char &g){RC(a), RC(b), RC(c), RC(d), RC(e), RC(f), RC(g); return a;}
inline DB& RF(DB &a, DB &b){RF(a), RF(b); return a;}
inline DB& RF(DB &a, DB &b, DB &c){RF(a), RF(b), RF(c); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d){RF(a), RF(b), RF(c), RF(d); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e){RF(a), RF(b), RF(c), RF(d), RF(e); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e, DB &f){RF(a), RF(b), RF(c), RF(d), RF(e), RF(f); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e, DB &f, DB &g){RF(a), RF(b), RF(c), RF(d), RF(e), RF(f), RF(g); return a;}
inline void RS(char *s1, char *s2){RS(s1), RS(s2);}
inline void RS(char *s1, char *s2, char *s3){RS(s1), RS(s2), RS(s3);}
template<class T0,class T1>inline void RDD(T0&a, T1&b){RDD(a),RDD(b);}
template<class T0,class T1,class T2>inline void RDD(T0&a, T1&b, T2&c){RDD(a),RDD(b),RDD(c);}

template<class T> inline void RST(T &A){memset(A, 0, sizeof(A));}
template<class T> inline void FLC(T &A, int x){memset(A, x, sizeof(A));}
template<class T> inline void CLR(T &A){A.clear();}

template<class T0, class T1> inline void RST(T0 &A0, T1 &A1){RST(A0), RST(A1);}
template<class T0, class T1, class T2> inline void RST(T0 &A0, T1 &A1, T2 &A2){RST(A0), RST(A1), RST(A2);}
template<class T0, class T1, class T2, class T3> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3){RST(A0), RST(A1), RST(A2), RST(A3);}
template<class T0, class T1, class T2, class T3, class T4> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4), RST(A5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4), RST(A5), RST(A6);}
template<class T0, class T1> inline void FLC(T0 &A0, T1 &A1, int x){FLC(A0, x), FLC(A1, x);}
template<class T0, class T1, class T2> inline void FLC(T0 &A0, T1 &A1, T2 &A2, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x);}
template<class T0, class T1, class T2, class T3> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x);}
template<class T0, class T1, class T2, class T3, class T4> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x), FLC(A5, x);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x), FLC(A5, x), FLC(A6, x);}
template<class T> inline void CLR(priority_queue<T, vector<T>, less<T> > &Q){while (!Q.empty()) Q.pop();}
template<class T> inline void CLR(priority_queue<T, vector<T>, greater<T> > &Q){while (!Q.empty()) Q.pop();}
template<class T> inline void CLR(stack<T> &S){while (!S.empty()) S.pop();}

template<class T0, class T1> inline void CLR(T0 &A0, T1 &A1){CLR(A0), CLR(A1);}
template<class T0, class T1, class T2> inline void CLR(T0 &A0, T1 &A1, T2 &A2){CLR(A0), CLR(A1), CLR(A2);}
template<class T0, class T1, class T2, class T3> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3){CLR(A0), CLR(A1), CLR(A2), CLR(A3);}
template<class T0, class T1, class T2, class T3, class T4> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4), CLR(A5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4), CLR(A5), CLR(A6);}
template<class T> inline void CLR(T &A, int n){REP(i, n) CLR(A[i]);}

template<class T> inline bool EPT(T &a){return a.empty();}
template<class T> inline T& SRT(T &A){sort(ALL(A)); return A;}
template<class T, class C> inline T& SRT(T &A, C B){sort(ALL(A), B); return A;}
template<class T> inline T& RVS(T &A){reverse(ALL(A)); return A;}
template<class T> inline T& UNQQ(T &A){A.resize(unique(ALL(A))-A.begin());return A;}
template<class T> inline T& UNQ(T &A){SRT(A);return UNQQ(A);}


//}

/** Constant List .. **/ //{

const int MOD = int(1e9) + 7;
//int MOD = 99990001;
const int INF = 0x3f3f3f3f;
const LL INFF = 0x3f3f3f3f3f3f3f3fLL;
const DB EPS = 1e-9;
const DB OO = 1e20;
const DB PI = acos(-1.0); //M_PI;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

//}

/** Add On .. **/ //{
// <<= '0. Nichi Joo ., //{

template<class T> inline T& checkMin(T &a,const T b){if (b<a) a=b;return a;}
template<class T> inline T& checkMax(T &a,const T b){if (a<b) a=b;return a;}
template<class T> inline T& checkMin(T &a, T &b, const T x){checkMin(a, x), checkMin(b, x);return a;}
template<class T> inline T& checkMax(T &a, T &b, const T x){checkMax(a, x), checkMax(b, x);return a;}
template <class T, class C> inline T& checkMin(T& a, const T b, C c){if (c(b,a)) a = b;return a;}
template <class T, class C> inline T& checkMax(T& a, const T b, C c){if (c(a,b)) a = b;return a;}
template<class T> inline T min(T a, T b, T c){return min(min(a, b), c);}
template<class T> inline T max(T a, T b, T c){return max(max(a, b), c);}
template<class T> inline T min(T a, T b, T c, T d){return min(min(a, b), min(c, d));}
template<class T> inline T max(T a, T b, T c, T d){return max(max(a, b), max(c, d));}
template<class T> inline T sqr(T a){return a*a;}
template<class T> inline T cub(T a){return a*a*a;}
template<class T> inline T ceil(T x, T y){return (x - 1) / y + 1;}
template<class T> T abs(T x){return x>0?x:-x;}
inline int sgn(DB x){return x < -EPS ? -1 : x > EPS;}
inline int sgn(DB x, DB y){return sgn(x - y);}

inline DB cos(DB a, DB b, DB c){return (sqr(a)+sqr(b)-sqr(c))/(2*a*b);}
inline DB cot(DB x){return 1./tan(x);};
inline DB sec(DB x){return 1./cos(x);};
inline DB csc(DB x){return 1./sin(x);};

//}
// <<= '1. Bitwise Operation ., //{
namespace BO{
    
    inline bool _1(int x, int i){return bool(x&1<<i);}
    inline bool _1(LL x, int i){return bool(x&1LL<<i);}
    inline LL _1(int i){return 1LL<<i;}
    inline LL _U(int i){return _1(i) - 1;};
    
    inline int reverse_bits(int x){
        x = ((x >> 1) & 0x55555555) | ((x << 1) & 0xaaaaaaaa);
        x = ((x >> 2) & 0x33333333) | ((x << 2) & 0xcccccccc);
        x = ((x >> 4) & 0x0f0f0f0f) | ((x << 4) & 0xf0f0f0f0);
        x = ((x >> 8) & 0x00ff00ff) | ((x << 8) & 0xff00ff00);
        x = ((x >>16) & 0x0000ffff) | ((x <<16) & 0xffff0000);
        return x;
    }
    
    inline LL reverse_bits(LL x){
        x = ((x >> 1) & 0x5555555555555555LL) | ((x << 1) & 0xaaaaaaaaaaaaaaaaLL);
        x = ((x >> 2) & 0x3333333333333333LL) | ((x << 2) & 0xccccccccccccccccLL);
        x = ((x >> 4) & 0x0f0f0f0f0f0f0f0fLL) | ((x << 4) & 0xf0f0f0f0f0f0f0f0LL);
        x = ((x >> 8) & 0x00ff00ff00ff00ffLL) | ((x << 8) & 0xff00ff00ff00ff00LL);
        x = ((x >>16) & 0x0000ffff0000ffffLL) | ((x <<16) & 0xffff0000ffff0000LL);
        x = ((x >>32) & 0x00000000ffffffffLL) | ((x <<32) & 0xffffffff00000000LL);
        return x;
    }
    
    template<class T> inline bool odd(T x){return x&1;}
    template<class T> inline bool even(T x){return !odd(x);}
    template<class T> inline T low_bit(T x) {return x & -x;}
    template<class T> inline T high_bit(T x) {T p = low_bit(x);while (p != x) x -= p, p = low_bit(x);return p;}
    template<class T> inline T cover_bit(T x){T p = 1; while (p < x) p <<= 1;return p;}
    template<class T> inline int cover_idx(T x){int p = 0; while (_1(p) < x ) ++p; return p;}
    
    inline int clz(int x){return __builtin_clz(x);}
    inline int clz(LL x){return __builtin_clzll(x);}
    inline int ctz(int x){return __builtin_ctz(x);}
    inline int ctz(LL x){return __builtin_ctzll(x);}
    inline int lg2(int x){return !x ? -1 : 31 - clz(x);}
    inline int lg2(LL x){return !x ? -1 : 63 - clz(x);}
    inline int low_idx(int x){return !x ? -1 : ctz(x);}
    inline int low_idx(LL x){return !x ? -1 : ctz(x);}
    inline int high_idx(int x){return lg2(x);}
    inline int high_idx(LL x){return lg2(x);}
    inline int parity(int x){return __builtin_parity(x);}
    inline int parity(LL x){return __builtin_parityll(x);}
    inline int count_bits(int x){return __builtin_popcount(x);}
    inline int count_bits(LL x){return __builtin_popcountll(x);}
    
} using namespace BO;//}
//}


/** I/O Accelerator Interface .. **/ //{
#define g (c=getchar())
#define d isdigit(g)
#define p x=x*10+c-'0'
#define n x=x*10+'0'-c
#define pp l/=10,p
#define nn l/=10,n
template<class T> inline T& RD(T &x){
    char c;while(!d);x=c-'0';while(d)p;
    return x;
}
template<class T> inline T& RDD(T &x){
    char c;while(g,c!='-'&&!isdigit(c));
    if (c=='-'){x='0'-g;while(d)n;}
    else{x=c-'0';while(d)p;}
    return x;
}
inline DB& RF(DB &x){
    //scanf("%lf", &x);
    char c;while(g,c!='-'&&c!='.'&&!isdigit(c));
    if(c=='-')if(g=='.'){x=0;DB l=1;while(d)nn;x*=l;}
    else{x='0'-c;while(d)n;if(c=='.'){DB l=1;while(d)nn;x*=l;}}
    else if(c=='.'){x=0;DB l=1;while(d)pp;x*=l;}
    else{x=c-'0';while(d)p;if(c=='.'){DB l=1;while(d)pp;x*=l;}}
    return x;
}
#undef nn
#undef pp
#undef n
#undef p
#undef d
#undef g
inline char* RS(char *s){
    //gets(s);
    scanf("%s", s);
    return s;
}

LL last_ans; int Case; template<class T> inline void OT(const T &x){
    //printf("Case #%d: ", ++Case);
    printf("%lld\n", x);
    //printf("%.4f\n", x);
    //printf("%d\n", x);
    //cout << x << endl;
    //last_ans = x;
}
//}



//}/* .................................................................................................................................. */

const int N = int(4e5) + 9, C = 26;


namespace Splay{
    
    struct node{
        
        static node*NIL;node*c[2],*p;
        int ll,ky,rr,dd;
        
#define NIL node::NIL
#define l c[0]
#define r c[1]
#define lx x->l
#define rx x->r
        
        void reset(int v = 0){
            l = r = p = NIL;
            dd = 0, ll = rr = ky = v;
        }
        
        node(int v = 0){
            reset(v);
        }
        
        void upd(){
            dd = 0;
            if (l == NIL) ll = ky; else ll = l->ll, checkMax(dd, max(l->dd, ky-l->rr));
            if (r == NIL) rr = ky; else rr = r->rr, checkMax(dd, max(r->dd, r->ll-ky));;
        }
        
        void setc(int d, node *x){c[d]=x,x->p=this;}
        int sgn(){return p->r==this;}
        
        void rot(int d){
            node*y=p,*z=y->p; z->setc(y->sgn(), this);
            y->setc(d, c[!d]), setc(!d, y), y->upd();
        }
        void rot(){rot(sgn());}
        
        node *splay(){
            int a, b; while(p!=NIL){
                //cout << "!" << endl;
                if (p->p==NIL){rot();break;}
                else a=sgn(),b=p->sgn(),(a^b?this:p)->rot(a),rot(b);
            }
            upd();
            return this;
        }
        
        void insert(node *z){
            node *x=this,*y;  while (x != NIL){
                y = x, x = x->c[z->ky>x->ky];
            }
            y->setc(z->ky>y->ky, z);
            z->splay();
        }
        
    } *NIL, *T[N];
    
    node*merge(node *y, node *x){
        if(x==NIL)return y;
        y = merge(y, lx), y = merge(y, rx);
        lx = rx = NIL, y->insert(x);
        return x;
    }
    
#undef l
#undef r
#undef lx
#undef rx
    
} using namespace Splay;


namespace KMP{
    void get_pi(const char P[], int n, int pi[]){
        for (int i = 2, j = pi[1] = 0; i <= n; ++i){
            while (j && P[i] != P[j+1]) j = pi[j];
            if (P[i] == P[j+1]) ++j;
            pi[i] = j;
        }
    }
} using namespace KMP;


namespace SAM{
    
    int trans[N][C], fail[N], len[N], cnt[N], tail, tot;
    char str[N/2]; int n, pi[N], ll[N], rr[N], dd[N], ml[N];
    
    inline int new_node(){
        RST(trans[tot]); cnt[tot] = 1; tail = tot;
        return tot++;
    }
    
    inline int new_node(int u){
        CPY(trans[tot], trans[u]); fail[tot] = fail[u], cnt[tot] = 0;
        return tot++;
    }
    
#define v trans[u][c]
#define f fail[u]
#define ff fail[uu]
    
    void Ext(int c){
        int u = tail, uu = new_node(); len[uu] = len[u] + 1;
        while (u && !v) v = uu, u = f;
        if (!u && !v) v = uu, ff = 0;
        else{
            if (len[v] == len[u] + 1) ff = v;
            else{
                int _v = v, vv = new_node(_v); len[vv] = len[u] + 1;
                fail[_v] = ff = vv;
                while (v == _v) v = vv, u = f;
            }
        }
    }
    
    void Init(){
        tot = 0, tail = new_node();
    }
    
    int Q[N], CC[N/2];
    
    void Topo(int*key){
        memset(CC, 0, sizeof(int)*(len[tail]+1));
        REP(i, tot) ++CC[key[i]];
        REP_1(i, len[tail]) CC[i] += CC[i-1];
        REP(i, tot) Q[--CC[key[i]]] = i;
    }
    
    void Run(){
        
        REP(u, tot) T[u] = cnt[u] ? new node(len[u]) : NIL;
        
        Topo(len);
        
        FOR(i, 1, tot){
            int u = Q[i];
            pi[u] = cnt[fail[u]] ? len[fail[u]] : pi[fail[u]];
        }
        
        DWN(i, tot, 1){
            int u = Q[i]; if (!cnt[u]) continue;
            ll[u] = T[u]->ll; rr[u] = T[u]->rr; dd[u] = T[u]->dd;
            T[f] = cnt[f] > cnt[u] ? merge(T[f], T[u]) : merge(T[u], T[f]);
            cnt[f] += cnt[u];
        }
        
        Topo(rr);
    }
    
    //#undef v
    //#undef f
    //#undef ff
    
} using namespace SAM;


namespace Segment_Tree{
    
    const int NN = 4 * N;
    
#define lx (x<<1)
#define rx (lx|1)
#define ml (l + r >> 1)
#define mr (ml + 1)
#define lc lx, l, ml
#define rc rx, mr, r
#define root 1, 0, n-1
    
    int T[NN], M[NN], a, b, cur, ss, mm; VI adj[N/2];
    
    inline void Build(int x, int l, int r){
        T[x] = M[x] = 0; if (l < r) Build(lc), Build(rc);
    }
    
    inline void Insert(int x, int l, int r){
        ++T[x], checkMax(M[x], a); if (l == r) return;
        if (a < mr) Insert(lc); else Insert(rc);
    }
    
    inline void Query(int x, int l, int r){
        if (b < l || r < a) return;
        if (a <= l && r <= b) ss += T[x], checkMax(mm, M[x]);
        else Query(lc), Query(rc);
    }
    
    void Insert(int _a){
        a = _a; Insert(root);
    }
    
    void Query(int _a, int _b){
        a = _a, b = _b, ss = 0, mm = 0;
        Query(root);
    }
    
    void Move(int tar){
        while (cur <= tar){
            ECH(it, adj[cur]) Insert(*it);
            ++cur;
        }
    }
    
    void STInit(){
        //REP(i, n) CLR(adj[i]);
        //cur = 0;
    }
    
#undef ml
    
} using namespace Segment_Tree;


namespace SHash{
    
    uLL S[N], P[N];
    LL ans; int minLen;
    
    uLL h(int a, int b){
        return S[b]-S[a-1]*P[b-a+1];
    }
    
    void init(){
        P[0] = 1, S[0] = 0; REP_1(i, n) P[i] = P[i-1] * (C+1), S[i] = S[i-1] * (C+1) + (str[i]-'a'+1);
        ans = 0, minLen = n;
    }
    
    void jud(int &p1, int p2){
        int l = 0, r = minLen; while(l<r){
            int m = l+r>>1;
            if (h(p1,p1+m)==h(p2,p2+m)) l = m+1;
            else r = m;
        }
        if (str[p2+l]<str[p1+l]) p1 = p2;
    }
    
} using namespace SHash;


int main(){
    
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
#endif
    
    NIL = new node(); NIL->reset();
    
    n = strlen(RS(str+1)); reverse(str+1, str+n+1); get_pi(str, n, pi); reverse(str+1, str+n+1);
    REP_1(i, n) adj[n-pi[i]].PB(n-i); Init(); REP_1(i, n) Ext(str[i]-'a'); Run();
    
    init(); FOR(i, 1, tot){
        
        int u = Q[i], L = max(ll[u]-pi[u],dd[u],len[f]+1), R=len[u]; if(L>R) continue;
        
        if(rr[u] == n){
            ans += R - L + 1, ml[u] = L;
        }
        else{
            Move(rr[u]); int l = rr[u]-R, r = rr[u]-L; Query(l, r); if (!ss) continue;
            ans += ss, ml[u] = rr[u] - mm;
        }
        
        checkMin(minLen, ml[u]);
    }
    
    OT(ans);
    
    int st, u; FOR_N(u, 1, tot) if (ml[u] == minLen){st = ll[u]-minLen+1; break;}
    FOR_N(u, u+1, tot) if (ml[u] == minLen) jud(st, ll[u]-minLen+1);
    FOR(i, st, st+minLen) putchar(str[i]); puts("");
}
