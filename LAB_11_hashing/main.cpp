#include <iostream>
#include <Hash.h>


using namespace std;

int main()
{
      // array that contains keys to be mapped
      string a[] = {"Ali", "Hammad", "Aqsa", "Noor", "Ahsan"};
      int n = sizeof(a)/sizeof(a[0]);

      // insert the keys into the hash table
      Hash h(7);   // 7 is count of buckets in
                   // hash table
      for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

      // delete 12 from hash table
      h.deleteItem("Ali");

      // display the Hash table
      h.displayHash();

    return 0;
}
