#define _POSIX_C_SOURCE 200809L
#include <math.h>
// reusable doubles for the midian larune project
// add single precision versions later
double scalar_mul(double a, double b) {
    return a * b;
}

double dot_prod_array(double *a, double *b, int size) {
    double result = 0.0;
    for (int i = 0; i < size; i++) {
        result += a[i] * b[i];
    }
    return result;
}

double dot_prod_geometry(double a1, double a2, double b1, double b2) {
    double a_sq = a1 * a1 + a2 * a2;
    double b_sq = b1 * b1 + b2 * b2;
    double dot_prod_sq = a1 * b1 + a2 * b2;
    double result = a_sq*b_sq - dot_prod_sq* dot_prod_sq;
    return result;
}

void hada_prod(double *a, double *b, double *result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = a[i] * b[i];
    }
}

void cross_prod(double *a, double *b, double *result) {
    result[0] = a[1] * b[2] - a[2] * b[1];
    result[1] = a[2] * b[0] - a[0] * b[2];
    result[2] = a[0] * b[1] - a[1] * b[0];
}

double scalar_nod(double n, double d) {
    if (d == 0.0) {
        return 0.0; // return zero if denominator is zero
    }
    return n / d; // or perform operation
}

// Division by 0 is undefined in mathematics as a rule.
double reciprocal(double x) {
    if (x == 0.0) {
        // for a nonzero number x, the reciprocal of x is (1/x)
        // or equivalently, x^(-1)
        // any number x is the same as writing x/1
        // Handle division by zero error
        return nan("DIV_BY_ZERO"); // Not-A-Number
        // the value or payload denotes extra information
        // you can choose any string/macro that suits your needs
    }
    return (x > 0.0) ? (1.0 / x) : (-1.0 / x);
}

double reciprocal_mul(double x, double y) {
    if (y == 0.0) {
        // see `reciprocal()` for info
        // Handle division by zero error
        return nan("DIV_BY_ZERO");
    }
    // Calculate the reciprocal of y
    // When you have the expression x/y it can be rewritten as
    // x * y^(-1), which is is equivalent to x * y^(1/-1)...
    // If you consider the denominator as x^(1/n), then n = -1
    double reciprocal_y = (y > 0.0) ? (1.0 / y) : (-1.0 / y);

    // Multiply x by the reciprocal of y
    double result = x * reciprocal_y;

    return result;
}

// Formula for powerof's is base=x, exponent=n, root=d
float ratio_pow_mathf(float x, float n, float d) {
    // Function effectively computes  sqrt{x^n}
    // Calculate the numerator power
    float numerator_pow = powf(x, n); // Use powf for float exponentiation
    float result = powf(numerator_pow, 1.0f / d);
    // if denominator is equal to "2", then x^(1/2) (square root operation)
    return result;
}

double ratio_pow_math(double x, double n, double d) {
    // Function effectively computes  sqrt{x^n}
    // Calculate the numerator power
    double numerator_pow = pow(x, n);
    double result = pow(numerator_pow, 1.0 / d);
    // if denominator is equal to "2", than x^(1/2) (square root operation)
    return result;
}

double ratio_pow(double x, double n, double d) {
    // Function effectively computes  sqrt{x^n}
    // Calculate the numerator power
    double numerator_pow = 1.0;
    for (int i = 0; i < n; i++) {
        numerator_pow *= x;
    }
    double result = 1.0;
    for (int i = 0; i < d; i++) {
        result *= numerator_pow;
    }
    // if denominator is equal to "2", than x^(1/2) (square root operation)
    return result;
}

int lamod(int x, int d) {
    if (d == 0) {
        // Any number modulo 0 is undefined
        // Handle division by zero error
        return -1; // Return a flag value to indicate error
    } else if (d == 1) {
        // Any number modulo 1 is always 0
        return 0;
    } else if (d == 2) {
        // Any even number modulo 2 is 0 because evens divide evenly
        // Any odd number modulo 2 is 1 since dividing an odd by 2,
        // you get a quotient of 0 w/ a remainder of "1"
        return x % 2;
    } else {
        // For other divisors, use the standard modulo operation
        return x % d;
    }
}

// Extension into complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

Complex complex_i() {
    Complex i = {0.0, 1.0};
    return i;
}

typedef struct {
    double s; // Scalar part
    double v[3]; // Vector part (bi + cj + dk)
} Quaternion;

Quaternion init_quaternion(double a, double b, double c, double d) {
    Quaternion q;
    q.s = a;
    q.v[0] = b;
    q.v[1] = c;
    q.v[2] = d;
    return q;
}
