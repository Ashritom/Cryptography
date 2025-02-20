// THE RSA ALGORITHM

#include <stdio.h>
#include <math.h>

// Function to compute greatest common divisor
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int p, q, n, z, d = 0, e, i;
    double msg, c;
    
    // Input the message to be encrypted and decrypted
    printf("Enter the message: ");
    scanf("%lf", &msg);

    // 1st prime number p
    printf("Enter p value: ");
    scanf("%d", &p);

    // 2nd prime number q
    printf("Enter q value: ");
    scanf("%d", &q);

    // Compute n = p * q
    n = p * q;
    printf("The value of n = %d\n", n);

    // Compute z = (p - 1) * (q - 1)
    z = (p - 1) * (q - 1);
    printf("The value of z = %d\n", z);

    // Find e such that 1 < e < z and gcd(e, z) = 1
    for (e = 2; e < z; e++) {
        if (gcd(e, z) == 1) {
            break;
        }
    }
    printf("The value of e = %d\n", e);

    // Find d such that d * e = 1 (mod z)
    for (i = 0; i <= 9; i++) {
        int x = 1 + (i * z);
        if (x % e == 0) {
            d = x / e;
            break;
        }
    }
    printf("The value of d = %d\n", d);

    // Encrypt the message
    c = fmod(pow(msg, e), n);
    printf("Cipher text is: %lf\n", c);

    // Decrypt the message
    double decrypted_msg = fmod(pow(c, d), n);
    printf("Message: %lf\n", decrypted_msg);

    return 0;
}
