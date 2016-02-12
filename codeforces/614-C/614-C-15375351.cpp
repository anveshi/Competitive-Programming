#include <bits/stdc++.h>
using namespace std;

typedef pair<double, double> pdd;
const int Maxn = 100005;
const double PI =  3.1415926535897;
pair <long ,long> P[Maxn];
pair <double,double> C;
const double EPS = 0.00000000000001;

double dist(pdd p1, pdd p2){
  return ((p1.first-p2.first) * (p1.first-p2.first) + (p1.second-p2.second)* (p1.second-p2.second));
}


double Ternary_search(pdd p1, pdd p2){
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


int main(){
  long n;
  double Cx,Cy;
  cin >> n >> Cx >> Cy;
  C = {Cx,Cy};

  double maxd = 0.0,mind=100000000000000000.0;
  long i2=0;

  for(int i=0;i<n;i++)
    cin >> P[i].first >> P[i].second;

  for(int i=0;i<n;i++){
    double d = dist(P[i],C);
    if(d-maxd>=EPS){
      maxd = d;
      i2 = i;
    }
    double x = Ternary_search(P[i],P[(i+1)%n]);
    mind = min(mind,x);
  }

  double Ans = 0.0;

  cout << fixed << setprecision(20);
  Ans += dist(C,P[i2]);
  Ans -= mind;

  Ans *= PI;
  cout << Ans << endl;
  return 0;
}