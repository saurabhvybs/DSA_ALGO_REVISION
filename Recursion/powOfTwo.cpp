// leetcode problem 231: Power of Two
// there are four methods through which it has been done
// 1. Logarithmic method/ mathematical method. (Solution_1)
// 2. Recursive method (Solution_2)
// 3. Bit manipulation method (Solution_3)
// 4. Iterative method (Solution_4)


    #include <cmath>
    bool Solution_1(int n){
        if(n <= 0) return false;

        // formula => (log n base 2) = x
        double result = log2(n);

        // when n is too big then often floating point gives a bit of error 
        // like instead of 29 it return 28.9999999999 so we take a bit tolerance i.e 1e-10
        return fabs(round(result)-result) < 1e-10;

    }

    bool Solution_2(int n){
        // base case
        if(n == 0) return true;
        // fail case
        if(n <= 0 || (n % 2 != 0)) return false; 
        // half of n to reduce recursive steps.
        return Solution_2(n/2);
    }

    bool Solution_3(int n){
        
        // logic here is any no that is pow of 2 has only 1 set bit ex 8 in bin = 1000 
        // so if we do & operation with n-1 it gives 0. i.e (1000 & 0111) so if zero then true else false.
        // ex 9 in bin = 1001 now 1001 & 1000 gives 1110 not zero.
        return n > 0 && (n & (n-1) == 0);
    }

