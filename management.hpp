//includes
#include <string>
using namespace std;

class Path {
private:
  string name;
  int count = 0;
  Path * left;
  Path * right;

public:
  Path(string name):name(name){}

  int GetCount();
  Path * GetLeft();
  Path * GetRight();
  void CountIncrement();
  void SetLeft(Path* p1);
  void SetRight(Path* p2);
};
