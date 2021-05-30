---
title: Notes on divide and conquer problems
published: true
date: 2020-05-29 23:59:59
tags: algorithm,collective
description: Collective Notes
image:
---
## Generic Method
Solving sub-problem recursively by using Data Structures cleverly

## Problemset
[x] Codeforces 1483C - Skyline Photo





## CF 1483C - Skyline Photo
Basically, we are given an array with given "heights" and "value"
for each array.
We want to divide it into non overlapping subarrays and maximize the
sum of value.
For each subarray, the value we achieve is the value of the smallest
height element in the subarray.

Hint : Divide and Conquer,Sparse Table

### Solution
We define solve(l,r) as the maximum value we can achieve by "filling" range
[L,R], and mid as the index of minimal height value in the subarray.
Here we are divided into several scenarios.

[1] B[mid] is included in the answer then ans = B[mid] + solve(l,mid - 1) +
solve(mid + 1,r).

[2] B[mid] is not included in the answer:

+ if 'mid' is in the same picture with l-1 then the answer would be solve(mid + 1,r)

+ if 'mid' is in the same picture with r+1 then the answer would be solve(l,mid - 1)

+ if 'mid' is in the same picture with l-1,r+1 then the answer is 0.

As the following illustration describes...

![original](./img/1483C/ori.png)

![first](./img/1483C/one.png)

![second](./img/1483C/two.png)

![third](./img/1483C/three.png)

![fourth](./img/1483C/four.png)

### Implementation
Given the divide and conquer concept of this problem, it should be easy to implement this problem.

```c++

ll solve (ll l,ll r){
	ll mid = query(l,r) ; // can be done by usage of Sparse Table
	ll lf = solve(l,mid - 1);
	ll rt = solve(mid + 1,rt);
	ll ans = lf + rt + b[mid];
	if (l != 1 && r != n){
		ans = max(ans,0ll);
		// l - 1 , mid , r + 1 in the same picture
	}
	if (l != 1){
		ans = max(ans,rt);
		// l - 1, mid in the same picture
	}
	if (r != n){
		ans = max(ans,lf);
		// mid , r + 1 in the same picture
	}
	return ans;
}

```

