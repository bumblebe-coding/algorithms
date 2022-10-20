#include<iostream>
#include <bits/stdc++.h>


using namespace std;

//data types
typedef long long ll;
typedef long double lld;

//constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define newl cout<<"\n";


//int c = 1;
//solution area

void solve(){
	int n;
	char c;
	string s;
	cin>>n>>c>>s;

	vector<int>color;
	vector<int> green;

	if(c == 'g'){
		cout<<0<<endl;
		return;
	}

	for(int i = 0; i < n; i++){
		if(s[i] == c) color.pb(i);
		if(s[i] == 'g')green.pb(i);
	}

	int max = 0;

	if(color.end()>green.end()){
		max = green.begin()+n-color.end();
	}

	for(int i = 0; i < color.size(); i++){
		for(int j = 0; j < green.size(); j++){
			if(color[i] < green[j]){
				int val = green[i] - color[i];
				if(val > max) max = val;
			}
		}
	}

	cout<<max<<endl;

}


//main function area
int main(){
    //faster input and output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
   }
}
