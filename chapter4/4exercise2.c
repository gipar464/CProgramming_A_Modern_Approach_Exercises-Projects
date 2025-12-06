//Gian Paraguya
//12-05-2025

/*

If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? 
Justify your answer.

No, they do not always have the same value because when you use the uniary operator on 
the variable i, then i is already negative, so you're dividing negative i by j, which 
the c compiler will return a truncated version such that the answer is closest to 0.
On the other hand, evaluating positive i divided by positive j will return a truncated 
answer, with the negative applied only afterwards. 

*/