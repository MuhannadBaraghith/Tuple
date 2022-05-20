#include <iostream>

class Pair
{
protected:
  int first;
  int second;

public:
  Pair(int t, int u) : first(t), second(u) {}

  bool operator==(const Pair &rhs) const
  {
    return first == rhs.first && second == rhs.second;
  }

  friend std::ostream &operator<<(std::ostream &os, const Pair &rhs)
  {
    os << "(" << rhs.first << ", " << rhs.second << ")";
    return os;
  }
  //TODO: Implement the operator here
  void operator=(const Pair &rhs)
  {
    first = rhs.first;
    second = rhs.second;
  }
};

class Triple : public Pair
{
protected:
  int third;

public:
  Triple(int t, int u, int v) : Pair(t, u), third(v) {}

  friend std::ostream &operator<<(std::ostream &os, const Triple &rhs)
  {
    os << "(" << rhs.first << ", " << rhs.second << ", " << rhs.third << ")";
    return os;
  }

  
  void operator=(const Triple &rhs)
  {
    first = rhs.first;
    second = rhs.second;
    third = rhs.third;
  }
};

int main()
{
  // show a quick demo of class
  Pair p(1, 2);
  Pair p1(1, 2);
  std::cout << p << std::endl;
  std::cout << p1 << std::endl;
  Triple t1(1, 2, 3);
  Triple t2(1, 3, 3);
  std::cout << t1 << std::endl;
  std::cout << t2 << std::endl;
}
