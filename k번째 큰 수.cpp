#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;
int main(){
	vector<int> v;
	int tmp;
	int n, num;
	
	string name;
	cin>>n>>num;
	for(int i = 0; i < n; i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < num; i++){
		cout<<v.at(i)<<" ";
	}
}
