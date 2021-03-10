// 1

float multInt1 (int n, float m) {
    float res = 0;

    for (int i = 0; i < n; i++)
	res += m;

    return res;
}


// 2

float multInt (int n, float m) {
    float res = 0;

    while (n > 0) {
	if (n % 2)
	    res += m;
	n /= 2;
	m *= 2;
    }
    return res;
}


// 3

int mdc1(int a, int b) {
    a = abs(a);
    b = abs(b);
    int min = (a < b) ? a : b;
    int max = (a < b) ? b : a;

    for (int i = min; i > 0; i--)
	if (!(max % i && min % i))
	    return i;
}


// 4

int mdc2(int a, int b) {
    if (a > b)
	return mdc(a-b, b);
    else if (a < b)
	return mdc(a, b-a);

    return a;
}


// 5
// one liner com lógica equivalente ao de cima mas com a troca do operador de subtração pelo de
// resto
int mdc3(int a, int b) {
    return (a > b) ? mdc(a%b, b) : (a < b) ? mdc(a, b%a) : a;
}


// 6

int fib1(int n) {
    if (n < 2)
	return n
    else
	return fib1(n-1) + fib1(n-2);
}

int fib2(int n) {
    int res = 0;
    int next = 1;

    for (int i = 0; i < n; i++) {
	int temp = res;
	res = next;
	next += temp;
    }

    return res;
}
