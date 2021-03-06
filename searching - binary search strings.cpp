// T - address of array, n - size of array, str - search string, p - start point
// binary string search
// function return position search string
// array should be sorted!
size_t BinSearchString(std::string* T, size_t n, std::string str, size_t p = 0)
{
	auto sr = n;
	while (p <= n)
	{
		sr = (p + n) / 2;
		if (T[sr] == str)
			return sr;

		if (T[sr] > str)
			n = sr - 1;
		else
			p = sr + 1;
	}

	return -1; //return -1, when the funtion cannot find to element
}
