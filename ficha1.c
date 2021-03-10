/*
// 1

1. "12 16\n"

2. undefined behaviour

3. "A 65\n", "B 66 2 50\n", "b 98\n"

4. "100 200\n"


// 2

1.
a) "3 5\n"

b) "11 55"

c) "_#_#_#_#_#_#_#_#_#_#"

d) "\n1\n01\n11\n001\n101\n011\n111\n0001\n1001\n0101\n1101\n0011\n1011\n0111\n1111"
contagem binária com os números invertidos
*/

// 3

void exUm(int n) {
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++)
	    putchar('#');
	putchar('\n');
    }
}

void exDois(int n) {
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
	    if ((i+j) % 2 == 0)
		putchar('#');
	    else
		putchar('_');
	}
	putchar('\n');
    }
}

void exTresVertical(int n) {
    for (int i = 1; i <= n; i++)
	for(int j = 0; j < i; j++)
	    putchar('#');
	putchar('\n');

    while (--n) {
	for(int i = 0; i < n; i++)
	    putchar('#');
	putchar('\n');
    }
}

void exTresHorizontal(int n) {
    for (int i = 1; i <= n; i++) {
	for (int j = 0; j < n-i; j++)
	    putchar(' ');
	
	for (int j = 0; j < (i*2 - 1); j++)
	    putchar('#');

	putchar('\n');
    }
}

void exQuatro(int n) {
    for(int i = 0; i < (n*2 + 1); i++) {
        for(int j = 0; j < (n*2 + 1); j++) {
	    float y = n - i;
            float x = n - j;
            float dist = sqrt(x*x + y*y);
 
            if (dist <= n)
                putchar('#');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}

