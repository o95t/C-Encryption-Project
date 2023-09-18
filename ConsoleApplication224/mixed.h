
string mixed(string ot, string k1)
{

	for (int i = 0; i < (ot.length()); i++)
	{
		ot[i] = tolower(ot[i]);

	}
	for (int i = 0; i < (k1.length()); i++)
	{
		k1[i] = tolower(k1[i]);

	}
	ot.erase(remove(ot.begin(), ot.end(), ' '), ot.end());
	k1.erase(remove(k1.begin(), k1.end(), ' '), k1.end());
	string ch = ""; for (char a = 'a'; a <= 'z'; a++) { ch += a; }
	string cr = "";
	int isf[26] = { 0 }; for (int i = 0; i < k1.size(); i++) {
		if (isf[k1.at(i) - 'a'] == 0)cr += k1.at(i);
		isf[k1.at(i) - 'a']++;
	}
	for (int u = 'a'; u <= 'z'; u++) {
		if (isf[u - 'a'] == 0)cr += u;
	}
	string out = "";
	for (int i = 0; i < ot.size(); i++) {
		out += cr[ot[i] - 'a'];
	}
	return out;
}
