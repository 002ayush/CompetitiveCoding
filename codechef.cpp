#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long long double
#define f_loop(a,b) for(int i = a;i < b;i++)

#define maxE(v) *max_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define SortG(v) sort(v.begin(),v.end(),greater<ll>())
#define pb push_back
#define pbk pop_back
#define mk make_pair
#define SortR(v) sort(v.rbegin(),v.rend())
void fast_io(){
	ios_base::sync_with_stdio(false);
  	cin.tie(nullptr);
  	cout.tie(nullptr);
}
bool isPrime(int val){
	for(int i = 2;i*i <= val;++i){
		if (val % i == 0){
			return false;
		}
	}
	return true;
}
void solve(int N,vector<char> arr,char ch)
{
	
	vector<int> a1;
	for(int i = 0;i < N;++i){
		if (arr[i] != ch){
			a1.push_back(i+1);
		}
	}
	int cnt = 0;
	bool lst = false;
	for(auto val : a1){
		if (val == N){
			cnt++;
			lst = true;
		}else{
			cnt = 1;
		}
	}
	if (cnt == 0){
		cout << 0 << endl;
		return;
	}
	if (cnt == 1 && lst){
		cout << 1 << endl;
		cout << N-1 << endl;
		return;
	}
	if (cnt == 1){
		cout << 1 << endl;
		cout << N << endl;
		return;
	}
	if (cnt == 2){
		cout << 2 << endl;
		cout << N-1 << " " << N << endl;
		return;
	}
	return;
}

int main(){
	

	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;
		char ch;
		cin >> ch;
		vector<char> arr(N);
		for(int i = 0;i < N;++i){
			cin >> arr[i];
		}
		
		solve(N,arr,ch);
	}
	return 0;
}