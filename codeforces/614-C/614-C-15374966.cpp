// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 200005;
const long double pi =  3.141592653589793238462643383279502884197169399375105820974944592307816406286;
pair <LL,LL> P[Maxn];
long double dist(pair<long double,long double> p1, pair<long double,long double> p2){
  long double ret =  ((p1.first-p2.first) * (p1.first-p2.first) + (p1.second-p2.second)* (p1.second-p2.second));
  return ret;
}

typedef  pair<long double, long double> pdd;

pair <long double,long double> C;

long double Ternary_search(pdd p1, pdd p2){
  pdd l = p1, r = p2;
  for(int i=0; i<200; i++) {
    pdd l1, l2;
    l1.first = (l.first*2.0+r.first)/3.0;
    l1.second = (l.second*2.0+r.second)/3.0;
    l2.first = (l.first+2.0*r.first)/3.0;
    l2.second = (l.second+2.0*r.second)/3.0;
    if(dist(l1,C) <= dist(l2,C)) r = l2; else l = l1;
  }
  return dist(l,C);
}

const long double EPS = 0.00000000000001;

int main(){
  fastIO();
  LL n;
  long double Cx,Cy;
  cin >> n;
  cin >> Cx >> Cy;
  C = make_pair(Cx,Cy);
  long double maxd = 0.0,mind=100000000000000000.0;
  LL i2=0;

  for(int i=0;i<n;i++)
    cin >> P[i].first >> P[i].second;

  for(int i=0;i<n;i++){
    long double d = dist(P[i],C);
    if(d-maxd>=EPS){
      maxd = d;
      i2 = i;
    }
    long double x = Ternary_search(P[i],P[(i+1)%n]);
    mind = min(mind,x);
  }

  long double Ans = 0.0;
    cout << fixed;
  cout << setprecision(20);

  Ans += dist(C,P[i2]);
  Ans -= mind;
  Ans *= pi;
  //cout << mind << endl;
  cout << Ans << endl;
  return 0;
}