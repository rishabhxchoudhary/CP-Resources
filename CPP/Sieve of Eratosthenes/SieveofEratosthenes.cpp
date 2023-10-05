#include <iostream>
#include <vector>

using namespace std;

void sieveOfEratosthenes(int n)
{
    // Create a boolean vector to track prime numbers.
    vector<bool> isPrime(n + 1, true);

    // Mark 0 and 1 as non-prime numbers.
    isPrime[0] = isPrime[1] = false;

    // Start with the first prime number, 2.
    for (int p = 2; p * p <= n; p++)
    {
        // If isPrime[p] is still true, it's a prime number.
        if (isPrime[p])
        {
            // Mark all multiples of p as non-prime.
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    // Print the prime numbers.
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "There are no prime numbers up to " << n << endl;
    }
    else
    {
        sieveOfEratosthenes(n);
    }

    return 0;
}
