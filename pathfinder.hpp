#include <stack>
#include "management.hpp"
using namespace std;

class PathFinder {
  private:
    stack <Path *> sol;

    //clear stack of objects
    void Reset();

    //Maze navigation and solution stack creation
    bool Continue(Path * c);

  public:
    //returns stack {{when Finish() is completed}}
    stack <Path *> GetSolution(Path * head);

};
