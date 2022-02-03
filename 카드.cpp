#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int main(){
	int a;
	cin>>a;
	for(int i = 1; i <= a; i++){
		q.push(i);
	}
	
	while(q.size() > 1){
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout<<q.front()<<endl;
}
