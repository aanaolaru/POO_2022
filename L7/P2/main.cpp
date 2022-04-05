#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template <class T>
class Vector
{
	T v[100];
	int count;
	int index, i{}, j{};
public:
	Vector() : count(0) {}
	void Push(T value) { v[count++] = value; }
	T Pop() { return v[--count]; }
	void Remove(T value)
	{
		for (index = value; index < count - 1; index++)
			v[index] = v[index + 1];
		count--;
	}
	void Insert(T value, int x)
	{
		for (index = count - 1; index >= value; index--)
			v[index + 1] = v[index];
		v[value] = x;
		count++;
	}
	
	//bool operator<(T const& l, T const& r) { return l.i < r.j }
};
void main(void)
{
	Vector<int> v;
	v.Push(23); v.Push(23); v.Push(16); v.Push(29);
	v.Remove(29);
	v.Insert(3, 56);
	
	//sort(v.begin(), v.end());
	cout << v.Pop();
}