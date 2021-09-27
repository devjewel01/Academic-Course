## Newton Raphson Method
Given a function ```f(x)``` on floating number ```x``` and an initial guess for root, find root of function in interval. Here ```f(x)``` represents algebraic or transcendental equation. 
For simplicity, we have assumed that derivative of function is also provided as input.
_Example_
```
Input: A function of x (for example x3 – x2 + 2),
       derivative function of x (3x2 – 2x for above example)
       and an initial guess x0 = -20
Output: The value of root is : -1.00
        OR any other value close to root.
```

**Algorithm:**

_Input:_ initial x, func(x), derivFunc(x) 

_Output:_ Root of Func() 
 

       1. Compute values of func(x) and derivFunc(x) for given initial x
       2. Compute h: h = func(x) / derivFunc(x)
       3. While h is greater than allowed error ε 
       4. h = func(x) / derivFunc(x)
       5. x = x – h


### xn+1 =  xn - f(xn) / f'(xn)
