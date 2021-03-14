/*
// 1
a) "1 1 4\n2 2 6\n3 3 8\n4 4 10\n5 5 12\n"

b) "13\n"
*/

// 2

void swapM(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


// 3

void swap(int v[], int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}


// 4

int soma(int v[], int N) {
    int acc = 0;
    for (int i = 0; i < N; i++)
	acc += v[i];
    return acc;
}
// forma mais críptica mas ainda assim interessante que os professores vão fazer questão de
// mencionar
int soma (int v[], int N){
    int acc = 0;
    while (N--) acc += *v++;
    return acc;
}


// 5

void inverteArray(int v[], int N) {
    int i, f;
    for (i = 0, f = N-1; i < N/2; i++, f--)
	swap(v, i, f);
}

void inverteArray(int v[], int N) {
    int i, f;
    for (i = 0, f = N-1; i < N/2; i++, f--)
	swapM(v+i, v+f);
}


// 6

int maximum(int v[], int N, int *m) {
    if (N <= 0) return -1;
    *m = v[0];
    for (int i = 1; i < N; i++)
	if (v[i] > *m)
	    *m = v[i];
    return 0;
}


// 7

void quadrados(int q[], int N) {
    int next = 0;
    for (int i = 0; i < N; i++) {
	q[i] = next;
	next += 2*i + 1;
    }
}






