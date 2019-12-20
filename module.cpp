#include"module.h"
#include"pch.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int GetMaxAllowed()
{
	int n; 
	cout << "Please, enter max allowed size for words :";
	cin >> n;
	return n;
}
void CoutAllowedWord(string* words, int n , int counter)
{
	cout << "Words that have more letters than your number"<<endl; 

	string CurrentWord;
	for (int  i = 0; i < counter; i++)
	{
		CurrentWord = words[i];
		if (CurrentWord.length() >= n)
		{
			cout << CurrentWord<< endl;
		}
	}
}

void SplitOnWords(string str) 
{
	
	int counter = 1;
	int len = str.length();
	char split = ' ';
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] == split)counter++;
	}
	string* words = new string[counter];
	int IndexOfNextWord ;
	int n = 0;
	for (int i = 0; i < counter; i++)
	{
		IndexOfNextWord = str.find(split, n);
		words[i] = str.substr(n, (IndexOfNextWord - n));
		n = IndexOfNextWord + 1;
		cout << words[i]<< endl;
	}
	
	CoutAllowedWord(words,GetMaxAllowed(),counter);
	
}
