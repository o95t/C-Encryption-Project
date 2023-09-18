string Encrypt(string Source, int Key)
{
	char alpha[28] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '@', '#' };

	for (int i = 0; i < (Source.length()); i++)
	{
		Source[i] = tolower(Source[i]);

	}
	for (int i = 0; i < Source.length(); i++){
		for (int j = 0; j < 28; j++)
		{
			if (Source[i] == alpha[j])
			{
				Source[i] = alpha[((j + Key) % 28)];
				break;
			}
		}
	}
	return Source;
}
