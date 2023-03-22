#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int n, int m);
void print_to_98(int n);
void print_times_table(int n);
long fibonacci(int n);
/**
 *fibonacci - print L
 *
 *@n: The value
 *
 *Return: L (Success)
 */
long fibonacci(int n)
{
        long h, k, L;
        int i;

        h = 1;
        k = 0;
        L = n;
        for (i = 2; i <= n; i++)
        {
                L = h + k;
                k = h;
                h = L;
        }
        return (L);
}

#endif
