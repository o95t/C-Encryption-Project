#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include<qmgr.h>
#include<string>
#include<map>
#include<sac.h>
#include<OAIdl.h>
#include<algorithm>
#include<cmath>
#include"vigi.h"
#include"tran.h"
#include"play.h"
#include"mixed.h"
#include"cesar.h"

using namespace std;

int main() {
	string  ot, k1;
	string k2, txt;
	string key;
	string s;
	//////////////////////////////////////////////////////


	freopen("read.txt", "r",stdin);

	//////////////////////////////////////////////////////////////////mixed
	cout << "enter plain text" << endl;
	getline(cin, ot);
	cout << endl << endl;
	cout << "enter mixed key";
	getline(cin, k1);
	cout << endl << endl;
	ot= mixed(ot, k1);
	cout << "Encrypted: " << ot << endl;
	cout << endl << endl;
	/////////////////////////////////////////////////////////////////////////////trans

	cout << "enter key trans minimum 5 number" << endl;
	getline(cin, k2);
	cout << endl << endl;
	txt=trans(k2, ot);
	cout << endl << endl;
	//////////////////////////////////////////////////////////////playfair

	cout << "Enter play key: "; getline(cin, key);
	cout << endl << endl;
	playfair pf; pf.doIt(key, txt);
	cout << "Encrypted: " << outplay << endl;
	cout << endl << endl;
	ot = outplay;

	//////////////////////////////////////////////////////////////vigenere

	s = ot;
	cout << "Enter vigenere key: "; getline(cin, key);
	cout << endl << endl;
	vigenere_encrypt(s, key);
	cout << "Encrypted: " << s << endl;
	cout << endl << endl;
	////////////////////////////////////////////////////////////cesar
	ot = s;
	int Key;

	cout << "Key cesar: ";
	cin >> Key;
	cout << endl << endl;

	cout << "Encrypted: " << Encrypt(ot, Key) << endl;

	return 0;
}