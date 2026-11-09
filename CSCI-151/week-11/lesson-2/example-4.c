/*
Math induction and recursion
recursion approach:
S(n) = 1 + 2 + 3 + ... + n 
S(n) = S(n-1) + n
S(1) = 1

S(1) = 1
S(2) = S(1) + 2 = 3
S(3) = S(2) + 3 = 6
...
	 n(n + 1)
 S(n) =  ________
	     2

n = 1, 1( 1 + 1) / 2 = 1

n = k, S(k) = k(k + 1)/2;

n = k+1, S(k) + (k+1)

S(k+1) = k(k+1)/2 + (k+1)

S(k+1) = [k(k+1)+2(k+1)] / 2 = [(k+1)(k+2)] / 2 = [(k + 1)(k + 1 + 1)] / 2
*/
