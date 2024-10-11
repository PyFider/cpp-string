string String(const string s) 
{
	string s1;
	size_t len, symi;
	
	if (!s) {
		 s1 = malloc(0);
		*s1 = '\0';
		 return s1;
	}

	/* GETTING LEN */
	for (len = 0; *(s+len) != '\0'; len++)
	s1 = malloc(len);

	/* COPY */
	for (symi = 0; *(s+symi) != '\0'; symi++)
		*(s1+symi) = *(s+symi);

	return s1;
}

string String_set(size_t n, int c) 
{
	string s;

	s = malloc(n+1);
	for (size_t i = 0; i < n; *(s+i++) = c);
	*(s+n) = '\0';

	return s;
}
