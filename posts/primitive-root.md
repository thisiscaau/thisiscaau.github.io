---
title: Math chroncile - Primitive Root
published: true
date: 2020-05-30 23:59:59
tags: algorithm,collective,math
description: Collective Notes
image:
---

Resources :
[CP Algorithm](https://cp-algorithms.com/algebra/primitive-root.html)
[OI Wiki](https://oi-wiki.org/math/primitive-root/)

## Definition of primitive root
G is the primitive root modulo n if and only if
for any integer a such that gcd(a,n) = 1, there exist
some k that : g^k - a is divisible by n.

k is then called the index or discrete logarithm of a
to the base g modulo n. G is also called the generator
of multiplicative group of integers modulo n.

In particular, for the case where n is a prime number,
the powers of primitive root runs through all numbers
from 1 to n - 1.

## Existence of primitive root
Primitive root modulo n exists if and only if:
- n is 1,2,4
- n is power of an odd prime number
- n = 2 * (p ^ k) (p is prime)
