#include "Hash.h"
#include <iostream>
#include <list>

using namespace std;

Hash::Hash()
{
    this->BUCKET = 7;
    table = new list<string>[BUCKET];
}

Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new list<string>[BUCKET];
}

Hash::~Hash()
{
    delete[] table;
}

void Hash::insertItem(string key)
{
    int index = hashFunction(key);
    table[index].push_back(key);
}

void Hash::deleteItem(string key)
{
  // get the hash index of key
  int index = hashFunction(key);

  // find the key in (index)th list
  list<string> :: iterator i;
  for (i = table[index].begin();
           i != table[index].end(); i++) {
    if (*i == key)
      break;
  }

  // if key is found in hash table, remove it
  if (i != table[index].end())
    table[index].erase(i);
}

// function to display hash table

void Hash::displayHash() {
  for (int i = 0; i < BUCKET; i++) {
    cout << i;
    for (auto x : table[i])
      cout << " --> " << x;
    cout << endl;
  }
}
