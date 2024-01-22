#ifndef HASH_H
#define HASH_H
#include <list>
#include <string>

using namespace std;

class Hash
{
    public:
         Hash();
         Hash(int V);  // Constructor
         ~Hash();
        // inserts a key into hash table
        void insertItem(string x);

        // deletes a key from hash table
        void deleteItem(string key);

        // hash function to map values to key
        int hashFunction(string x) {
            return (x[0] + 27*x[1] +729*x[2]) % BUCKET;
        }

        void displayHash();

    private:
        int BUCKET;    // No. of buckets

        // Pointer to an array containing buckets
        list<string> *table;
};

#endif // HASH_H
