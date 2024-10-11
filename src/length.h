size_t length(string s) 
{
	size_t len;
	for (len=0; *s != '\0'; s++, len++);
	return len;
}
