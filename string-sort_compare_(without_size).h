bool cpr(string& a, string& b)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < b[i])
			return 1;
		if (a[i] > b[i])
			return 0;
	}
	return 0;
}