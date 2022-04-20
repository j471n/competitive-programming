'''
 * Solution By : Jatin Sharma
 * Language : C++
 * Problem Name : Admins and Shopping
 * Problem : https://www.codechef.com/START35B/problems/ADMINSHOP
'''

import math as m
for _ in range(int(input())):
    n, x = map(int, input().split())

    arr = list(map(int, input().split()))
    ans = max(n, m.ceil(x / min(arr)))

    print(ans)
