---
title: Problems related to Permutations
published: true
date: 2020-08-21 21:59:59
tags: math,logic
description: Collective Notes
image:
---
Link for research : https://en.wikipedia.org/wiki/Permutation.

## Permutation Cycle 
If you build a graph where there is an edge betwen p[i] and i. You will get a graph
of cycles. Those i's which satisfy p[i] = i form cycles with size 1 or self-loops.
In other cycles, if you modify one element of them into p[i] = i, all of them will turn into
self-loops.
