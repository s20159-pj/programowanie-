#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int numer = 0;
void Sorting(string word[], int numer);

int main()
{
  cout << "Podaj liczbe slow" << endl;
  cin >> numer;
  string *word = new string[numer];
  for (int i = 0; i < numer; i++)
  {
    cout << "podaj slowo:" << endl;
    cin >> word[i];
  }
  Sorting(word, numer);
  for (int i = 0; i < numer; i++)
  {
    cout << word[i] << endl;
  }
  system("pause");
  return 0;
}

void Sorting(string word[], int numer)
{
  string slowo;
  int i;
  int j;
  for (i = 1; i < numer; ++i)
  {
    slowo = word[i];
    for (j = i – 1; j >= 0 && word[j] > slowo; –j)
    {
      word[j + 1] = word[j];
    }
    word[j + 1] = slowo;
  }
}
