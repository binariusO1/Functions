// search with sentinel
// T - array, n - size of array, k - key, p - start point
int SearchWithSentinel(int *T, int n, int k, int p=0)
{
	int i;

	T[n] = k;
	for (i = p; T[i] != k; i++);
	if (i == n) return -1; else return i;
}