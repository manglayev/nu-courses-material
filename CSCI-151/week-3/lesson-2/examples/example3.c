/*The while Statement
Task 2.1: Euclid's Branchless GCD & LCMConcept: A while loop repetitively executes as long as its condition evaluates to true.
Euclid's Greatest Common Divisor (GCD) algorithm runs until the remainder variable hits 0.
Challenge: Calculate both the GCD and the Least Common Multiple (LCM) of two integers, u = 150 and v = 35, using a while loop.
You must not use any conditional statements. 
Task 2.2: Pure Mathematical Decimal-to-Octal ConverterConcept: Digits of a number can be isolated and extracted using mathematical
division and modulus operators inside a while loop.
Challenge: Convert a decimal integer (e.g., 83) into its octal representation and store the result as a decimal-formatted integer (e.g., 123)
using a while loop. You cannot use arrays, strings, or printf base formatters to do the conversion.    

    // =========================================================================
    // SUBTOPIC 2: THE WHILE STATEMENT
    // =========================================================================
    printf("\n=== SUBTOPIC 2: THE WHILE STATEMENT ===\n");

    // Task 2.1: Euclid's Branchless GCD & LCM 
    int u = 150, v = 35;
    int orig_u = u, orig_v = v;
    while (v != 0) { 
        int temp = u % v;
        u = v;
        v = temp;
    }
    int gcd = u;
    int lcm = (orig_u * orig_v) / gcd;
    printf("Task 2.1 (GCD of 150 and 35): %i\n", gcd);
    printf("Task 2.1 (LCM of 150 and 35): %i\n", lcm);

    // Task 2.2: Pure Mathematical Decimal-to-Octal Converter
    int decimal = 83;
    int octal = 0;
    int place = 1;
    while (decimal > 0) { // [12-14]
        octal += (decimal % 8) * place;
        place *= 10;
        decimal /= 8;
    }
    printf("Task 2.2 (Decimal 83 converted to Octal Integer): %i\n", octal);
