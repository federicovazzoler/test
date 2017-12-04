#include <map>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::map;

int main()
{
  string s;
  map<string, int> counters; // store each word and an associated counter

  // read the input, keep track of each word and how often we see it
  while (cin >> s)
    ++counters[s]; // counters[s] cerca in counters l'elemento con chiave s (e poi lo aumento con il ++ davanti)

  // write the words and associated counts
  for (map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it) {
    cout << it->first << "\t" << it->second << endl;
  }
  return 0;
} 
