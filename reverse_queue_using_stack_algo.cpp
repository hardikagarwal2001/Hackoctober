#include<bits/stdc++.h>

using namespace std;

#define int long long
stack<int> push_to_stack(queue<int> q){
	stack<int> s;
	 while(!q.empty()){
	 	s.push(q.front());

	 	q.pop();
	 }
	 return s;
	 
}
queue<int> push_back_to_queue(stack<int> s ){
	queue<int> q;
	while (!s.empty()) {
        q.push(s.top()) ;
       // cout<<s.top()<<endl;
        s.pop();
    }
    return q;
}
void show(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
signed main(){
	queue<int> q1;
	
	
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x;
		cin>>x;
		q1.push(x);
	}


    cout<<"The queue elements before revrsing:"<<endl;
    show(q1);

	   stack<int> s1 = push_to_stack(q1);
	   queue<int> q=push_back_to_queue(s1);

	  cout<<"The queue elements after revrsing:"<<endl;
       show(q);

	


	

	return 0;
}