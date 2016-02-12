#include<bits/stdc++.h>
#define LL long long int
using namespace std;
const LL MOD=1000000007;
LL N,M,K;
set <LL> SET;
map <LL,LL> MAP;
vector <LL> H;
vector < pair<LL,LL> > IN[100005],OUT[100005]; 
LL e1[50005],e2[50005],e3[50005],e4[50005];
map < pair<LL,LL>,LL > Peeche;
vector < pair<LL,LL> > PeecheWaale[100005];
LL ANS[100005];
map < pair<LL,LL>,LL > PahunchnekeTarike;
map <pair<LL,LL> ,LL> INVISITED;
map <pair<LL,LL> ,LL> OUTVISITED;
LL FINAL;
vector <pair<LL,LL> > LAST;
LL modpow(LL base, LL exp) {
	base %= MOD;
	LL result = 1;
	while (exp > 0) {
		if (exp & 1) result = (result * base) % MOD;
		base = (base * base) % MOD;
		exp >>= 1;
	}
	return result;
}

int main(){
	H.clear();
	LAST.clear();
	MAP.clear();
	Peeche.clear();
	PahunchnekeTarike.clear();
	INVISITED.clear();OUTVISITED.clear();
	PahunchnekeTarike[make_pair(0,0)]=1;
	for(int i=0;i<100005;i++){PeecheWaale[i].clear();IN[i].clear();OUT[i].clear();}
	LL x1,y1,x2,y2;
	scanf("%lld %lld %lld",&N,&M,&K);
	SET.insert(0);
	SET.insert(N);
	for(int i=0;i<K;i++){
		scanf("%lld%lld%lld%lld",&e1[i],&e2[i],&e3[i],&e4[i]);
		SET.insert(e1[i]);SET.insert(e3[i]);
	}
	int idx=0;
	for(set <LL> ::iterator it=SET.begin();it!=SET.end();it++){
		H.push_back(*it);
//		cout << "H[" << idx <<"] = " << H[idx] << endl;
		MAP[*it]=idx;
		idx++;
//		cout << "MAP[" << *it << "] = " << MAP[*it] << endl;
	}
//	cout << endl;

	idx = 0;
	for(int i=0;i<K;i++){
		x1=MAP[e1[i]];x2=MAP[e3[i]];
		OUT[x1].push_back(make_pair(e1[i],e2[i]));
		IN[x2].push_back(make_pair(e3[i],e4[i]));
		if(e3[i]==N+1){LAST.push_back(make_pair(e1[i],e2[i]));continue;}

		if(Peeche.find(make_pair(e3[i],e4[i]))==Peeche.end()){
			Peeche[make_pair(e3[i],e4[i])]=idx;
			PeecheWaale[idx].push_back(make_pair(e1[i],e2[i]));
			idx++;continue;
		}
		else{
			int index = Peeche[make_pair(e3[i],e4[i])];
			PeecheWaale[index].push_back(make_pair(e1[i],e2[i]));
		}
	}
/*	for(map <pair<LL,LL>,LL>::iterator it= Peeche.begin();it!=Peeche.end();it++){
		cout << (it->first).first << " " << (it->first).second  << endl;
		int index =Peeche[make_pair((it->first).first,(it->first).second)];
		for(int i=0;i<PeecheWaale[index].size();i++)
			cout << PeecheWaale[index][i].first << " " << PeecheWaale[index][i].second << endl;
	}*/
	ANS[0]=1;FINAL=1LL;
	for(int i=1;i<H.size() && H[i]!=N+1;i++){
		LL diff = H[i] - H[i-1];
		ANS[i] = (ANS[i-1]*modpow(M,diff))%MOD;
	//	cout << i << " " << H[i] << " " << ANS[i] << endl;	
		for(int j=0;j<IN[i].size();j++){
		//	cout << "Inward edge hai " << i << endl;
			LL fir = IN[i][j].first;
			LL sec = IN[i][j].second;
			if(INVISITED[make_pair(fir,sec)])continue;
			LL pp = Peeche[make_pair(fir,sec)];
			for(int k=0;k<PeecheWaale[pp].size();k++){
				LL XX = PeecheWaale[pp][k].first;
				LL YY = PeecheWaale[pp][k].second;
				PahunchnekeTarike[make_pair(fir,sec)]+=PahunchnekeTarike[make_pair(XX,YY)];
			///	cout << "f s xx yy p " << fir << " " << sec << " " << XX << " " << YY  << " " 
				//	<< PahunchnekeTarike[make_pair(XX,YY)]<< endl;						
				PahunchnekeTarike[make_pair(fir,sec)]%=MOD;
			}
			ANS[i]=(ANS[i]+PahunchnekeTarike[make_pair(fir,sec)])%MOD;
			INVISITED[make_pair(fir,sec)]=1;
		}
		for(int j=0;j<OUT[i].size();j++){
		//	cout << "Outward edge hai " << i << endl;
			LL fir = OUT[i][j].first;
			LL sec = OUT[i][j].second;
			if(OUTVISITED[make_pair(fir,sec)])continue;
			PahunchnekeTarike[make_pair(fir,sec)]+=(ANS[i-1]*modpow(M,diff-1))%MOD;
			OUTVISITED[make_pair(fir,sec)]=1;
		}
	//	cout << i << " " << H[i] << " " << ANS[i] << endl;
		FINAL = ANS[i];
	}
	LL F1=0;
	for(int i=0;i<LAST.size();i++){
		F1+=PahunchnekeTarike[make_pair(LAST[i].first,LAST[i].second)];
		F1%=MOD;
	}
	cout << FINAL +F1 << endl;
	return 0;
}