#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int >gr[N];
vector<int >ans;
void bfs(int root) {
	queue<int>q;
	q.push(root);
	q.push(0);
  #include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int >gr[N];
vector<int >ans;
void bfs(int root) {
	queue<int>q;
	q.push(root);
	q.push(0);
	int vis[N];
	vis[root] = 1;
	vector<int>temp;
	while (!q.empty()) {
		auto f = q.front();
		q.pop();
		if (f == 0) {
			sort(temp.begin(), temp.end());
			for (auto x : temp)
				ans.push_back(x);
			temp.clear();
			if (!q.empty())
				q.push(0);
		}

		for (auto x : gr[f]) {
			if (vis[x])continue;
			q.push(x);
			vis[x] = 1;
			temp.push_back(x);
		}
	}
}
vector<int> order(int city_nodes,
                  vector<int>city_from, vector<int>city_to, int company) {

	for (int i = 1; i < city_nodes; i++)gr[i].clear();
	for (int i = 0; i < city_to.size(); i++) {
		int u = city_to[i], v = city_from[i];
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	for (int i = 1; i < city_nodes; i++)sort(gr[i].begin(), gr[i].end());

	bfs(company);
	return ans;

}
int main() {
  #include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int >gr[N];
vector<int >ans;
void bfs(int root) {
	queue<int>q;
	q.push(root);
	q.push(0);
	int vis[N];
	vis[root] = 1;
	vector<int>temp;
	while (!q.empty()) {
		auto f = q.front();
		q.pop();
		if (f == 0) {
			sort(temp.begin(), temp.end());
			for (auto x : temp)
				ans.push_back(x);
			temp.clear();
			if (!q.empty())
				q.push(0);
		}

		for (auto x : gr[f]) {
			if (vis[x])continue;
			q.push(x);
			vis[x] = 1;
			temp.push_back(x);
		}
	}
}
vector<int> order(int city_nodes,
                  vector<int>city_from, vector<int>city_to, int company) {

	for (int i = 1; i < city_nodes; i++)gr[i].clear();
	for (int i = 0; i < city_to.size(); i++) {
		int u = city_to[i], v = city_from[i];
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	for (int i = 1; i < city_nodes; i++)sort(gr[i].begin(), gr[i].end());

	bfs(company);
	return ans;

}
int main() {
	int n, m, st;
	cin >> n >> m;
	vector<int>a(m), b(m);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[i] = u, b[i] = v;
	}
	cin >> st;
	vector<int>ans = order(n, a, b, st);

	for (auto x : ans)
		cout << x << " ";
}
	int n, m, st;
	cin >> n >> m;
	vector<int>a(m), b(m);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[i] = u, b[i] = v;
	}
	cin >> st;
	vector<int>ans = order(n, a, b, st);

	for (auto x : ans)
		cout << x << " ";
}
	int vis[N];
	vis[root] = 1;
	vector<int>temp;
	while (!q.empty()) {
		auto f = q.front();
		q.pop();
		if (f == 0) {
			sort(temp.begin(), temp.end());
			for (auto x : temp)
				ans.push_back(x);
			temp.clear();
			if (!q.empty())
				q.push(0);
		}
    #include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int >gr[N];
vector<int >ans;
void bfs(int root) {
	queue<int>q;
	q.push(root);
	q.push(0);
	int vis[N];
	vis[root] = 1;
	vector<int>temp;
	while (!q.empty()) {
		auto f = q.front();
		q.pop();
		if (f == 0) {
			sort(temp.begin(), temp.end());
			for (auto x : temp)
				ans.push_back(x);
			temp.clear();
			if (!q.empty())
				q.push(0);
		}

		for (auto x : gr[f]) {
			if (vis[x])continue;
			q.push(x);
			vis[x] = 1;
			temp.push_back(x);
		}
	}
}
vector<int> order(int city_nodes,
                  vector<int>city_from, vector<int>city_to, int company) {

	for (int i = 1; i < city_nodes; i++)gr[i].clear();
	for (int i = 0; i < city_to.size(); i++) {
		int u = city_to[i], v = city_from[i];
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	for (int i = 1; i < city_nodes; i++)sort(gr[i].begin(), gr[i].end());

	bfs(company);
	return ans;

}
int main() {
	int n, m, st;
	cin >> n >> m;
	vector<int>a(m), b(m);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[i] = u, b[i] = v;
	}
	cin >> st;
	vector<int>ans = order(n, a, b, st);

	for (auto x : ans)
		cout << x << " ";
}

		for (auto x : gr[f]) {
			if (vis[x])continue;
			q.push(x);
			vis[x] = 1;
			temp.push_back(x);
		}
	}
}

int main() {
	int n, m, st;
	cin >> n >> m;
	vector<int>a(m), b(m);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[i] = u, b[i] = v;
	}
	cin >> st;
	vector<int>ans = order(n, a, b, st);

	for (auto x : ans)
		cout << x << " ";
}
