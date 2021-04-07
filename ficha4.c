// 1

int contaVogais(char *s) {
	int count = 0;
	char vogais[] = {'a', 'e', 'i', 'o', 'u'};

	for (int i = 0; s[i] != NULL; i++)
		for (int j = 0; vogais[j] != NULL; j++)
			count += s[i] == vogais[j] || [i] == vogais[j] - ' ';

	return count;
}


// 2

int isVogal(char c) {
	char vogais[] = {'a', 'e', 'i', 'o', 'u'};

	for (int i = 0; vogais[i] != NULL; i++)
		if (c == vogais[i] || c == vogais[i] - ' ')
			return 1;

	return 0;
}

int retiraVogaisRep (char *s) {
	int probe = 1;

	for (int i = 0; s[i+1] != NULL; i++) {
		if (isVogal(s[i]))
			while (s[i] == s[probe] || s[i] == s[probe] + ' ' || s[i] == s[probe] - ' ')
				probe++;
		s[i+1] = s[probe++];
	}

	return probe - (i+1);
}


// 3

int duplicaVogais(char *s) {

	for (int i = 0; s[i] != NULL; i++) {
		if (isVogal(s[i])) {
			char aux = s[i+1], next;
			for (int j = i+2; aux != NULL; j++) {
				next = s[j];
				s[j] = aux;
				aux = next;
			}
			i++;
		}
	}

	return 0;
}
