template <class T> void turn_vector(vector<T>& object, int step)
{
	if (step < 0)
	{
		for (int i = 0; i < (-1) * step; ++i)
		{
			T temp = object[0];
			object.erase(object.begin());
			object.push_back(temp);
		}
	}
	else if (step > 0)
	{
		for (int i = 0; i < step; ++i)
		{
			T temp = object[object.size() - 1];
			object.pop_back();
			object.insert(object.begin(), temp);
		}
	}
}