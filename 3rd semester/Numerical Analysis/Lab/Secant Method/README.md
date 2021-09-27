The secant method is used to find the root of an equation f(x) = 0. It is started from two distinct estimates x1 and x2 for the root. It is an iterative procedure involving linear interpolation to a root. The iteration stops if the difference between two intermediate values is less than convergence factor.
Examples : 
 

Input : equation = x3 + x - 1 
        x1 = 0, x2 = 1, E = 0.0001
Output : Root of the given equation = 0.682326
         No. of iteration=5

Algorithm 
 

Initialize: x1, x2, E, n         // E = convergence indicator
calculate f(x1),f(x2)

if(f(x1) * f(x2) = E); //repeat the loop until the convergence
    print 'x0' //value of the root
    print 'n' //number of iteration
}
else
    print "can not found a root in the given interval"