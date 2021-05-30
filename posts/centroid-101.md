# Centroid Decomposition 101

## General Implementation
```c++
	bool re[MAXN]; // removed
	ll sz[MAXN];


	// get subtree size
	ll dfs (ll u,ll p = 0){
		sz[u] = 1;
		for (ll v : g[u]){
			if (v != p && !re[v]){
				sz[u] += dfs(v,u);
			}
		}
		return sz[u];
	}


	// find centroid in O(N)
	ll find (ll node,ll ms,ll p = 0){
		// node - subtree size - parent
		for (ll x : g[node]){
			if (x != p && !re[v]){
				if (sz[x] > ms / 2){
					return find (x,ms,node);
				}
			}
		}
		return node;
	}

	// building Centroid Decomposition
	void build (ll n = 1){
		ll C = find(n,dfs(n));

		// divide and conquer work here


		re[C] = true; // removed
		for (ll x : g[C]){
			if (!re[x]) build(x);
		}
	}
```
