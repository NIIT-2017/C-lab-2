int turn(int value, int secret)
{
	if (secret == value)
	{
		return 0;
	}
	else if (value > secret)
		{
			return 1;
		}
			else if (value < secret)
			{
				return -1;
			}
}