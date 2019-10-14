//includes
#include <string>
using namespace std;

class Path {
private:
  string name;
  Path * left = NULL;
  Path * right = NULL;

public:
  Path(string name):name(name){}

  Path * GetLeft();
  Path * GetRight();
  void SetLeft(Path* p1);
  void SetRight(Path* p2);
};
