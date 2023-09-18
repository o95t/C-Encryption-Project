void vigenere_encrypt(std::string& s, std::string key)
{
	std::transform(s.begin(), s.end(), s.begin(), ::toupper);
	std::transform(key.begin(), key.end(), key.begin(), ::toupper);
	unsigned int j = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			s[i] += key[j] - 'A';
			if (s[i] > 'Z') s[i] += -'Z' + 'A' - 1;
		}
		j = j + 1 == key.length() ? 0 : j + 1;
	}
}