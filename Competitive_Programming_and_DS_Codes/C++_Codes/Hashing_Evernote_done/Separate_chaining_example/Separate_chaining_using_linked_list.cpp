// https://www.geeksforgeeks.org/c-program-hashing-chaining/

#include <iostream>
#include <list>

using namespace std;

class Hash
{
  int Bucket;

  //pointer to an array containing buckets
  list<int> *table;

public:
  Hash(int V);

  //for inserting a key into the hash table
  void insertItem(int x);

  //for deleting a key from the hash table
  void deleteItem(int key);

  int hashFunction(int x)
  {
    return (x % Bucket);
  }

  void displayHash();
};

Hash::Hash(int b)
{
  this->Bucket = b;
  table = new list <int>[Bucket];
}

void Hash::insertItem(int key)
{
  int index = hashFunction(key);
  table[index].push_back(key);
}

void Hash::deleteItem(int key)
{
  int index = hashFunction(key);

  list <int>::iterator i;

  for(i=table[index].begin(); i!=table[index].end();i++)
  {
    if(*i==key)
    {
      break;
    }
  }

  // if the key is found in the hash table, remove it
  if(i!=table[index].end())
  {
    table[index].erase(i);
  }

}

void Hash::displayHash()
{
  for(int i=0;i<Bucket; i++)
  {
    cout<<i;
    for(auto x : table[i])
    {
      cout<<"-->"<<x;
    }

    cout<<endl;
  }
}

int main()
{
  int a[] = {15,11,27,8,12};

  int n = sizeof(a)/sizeof(a[0]);

  Hash h(7);

  for(int i=0;i<n;i++)
  {
    h.insertItem(a[i]);
  }

  h.displayHash();

  h.deleteItem(12);

  cout<<endl;

  h.displayHash();

  return 0;
}