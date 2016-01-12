#include <iostream>

using namespace std;

template <class T>
void print(const T& ard)
{
   cout << arg << ' ';
}

template <class T, class ... Args>
void print(const T& arg, Args ... args)
{
   print(arg);
   print(args...);
}

template <class T>
void print_size( T&& arg)
{
   cout << sizeof(arg) << ' ';
}

template <class T, class ... Args>
void print_size( T&& arg, Args &&... args)
{
   print_size(std::forward<T>(arg));
   print_size(std::forward<Args>(args )... );
}

int main()
{
   print_size( 3, 3.14159, "J'aime mon prof");
}