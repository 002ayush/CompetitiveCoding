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
bool solve(int N,vector<int> arr)
{
	int bkp = -1;
	int lower = INT_MIN;
	int upper = -1;
	for(int i = 0;i < N-1;++i){
		if (arr[i] > arr[i+1]){
			bkp = i;
			lower = (arr[i] - arr[i+1]);
			if (i+2 < N){
				upper = (arr[i+2] - arr[i+1]);

			}
			break;
		}
	}
	if (bkp == -1 || bkp == N-2){
		return true;
	}
	int i = bkp+2;
	while(i < N-1){
		if (arr[i] > arr[i+1]){
			lower = max(lower,arr[i] - arr[i+1]);
			if (i+2 < N){
				upper = min(upper,arr[i+2] - arr[i+1]);
			}
			i = i+2;
		}else{
			i++;
		}

	}
	if (lower > upper){
		return false;
	}
	return true;
}

int main(){
	

	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;
		
		vector<int> arr(N);
		for(int i = 0;i < N;++i){
			cin >> arr[i];
		}
		
		cout<< (solve(N,arr) ? "Yes":"No") << endl;
	}
	return 0;
}