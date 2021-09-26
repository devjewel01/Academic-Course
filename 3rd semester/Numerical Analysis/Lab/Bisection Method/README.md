Given a function f(x) on floating number x and two numbers ‘a’ and ‘b’ such that f(a)*f(b) < 0 and f(x) is continuous in [a, b]. Here f(x) represents algebraic or transcendental equation. Find root of function in interval [a, b] (Or find a value of x such that f(x) is 0).


Example: 
 

Input: A function of x, for example x3 - x2 + 2.     
       And two values: a = -200 and b = 300 such that
       f(a)*f(b) < 0, i.e., f(a) and f(b) have
       opposite signs.
Output: The value of root is : -1.0025
        OR any other value with allowed
        deviation from root.

The method is based on The Intermediate Value Theorem which states that if f(x) is a continuous function and there are two real numbers a and b such that f(a)*f(b) 0 and f(b) < 0), then it is guaranteed that it has at least one root between them.

Assumptions: 
 

f(x) is a continuous function in interval [a, b]
f(a) * f(b) < 0
Steps: 
 

Find middle point c= (a + b)/2 .
If f(c) == 0, then c is the root of the solution.
Else f(c) != 0
If value f(a)*f(c) < 0 then root lies between a and c. So we recur for a and c
Else If f(b)*f(c) < 0 then root lies between b and c. So we recur b and c.
Else given function doesn’t follow one of assumptions.
