int bin(const char* tab, int r)
{
	int dec_value = 0;
	int base = 1;

	int len = r;
	for (int i = len - 1; i >= 0; i--) {
		if (tab[i] == 49)
			dec_value += base;
		base = base * 2;
	}
	return dec_value;
}