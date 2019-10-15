#include <stack>
#include "pathfinder.hpp"
#include <iostream>
using namespace std;

void PathFinder::Reset() {
  while (!sol.empty()) {
        sol.pop();
    }
}

bool PathFinder::Continue(Path * c) {
  bool b;
  sol.push(c);
  if (c->GetName() == "49x") { //when finished reached >> stack completed
    return true;
  }
  if (c->GetLeft() == NULL && c->GetRight() == NULL) {
    sol.pop();
    return false;
  }
  if (c->GetLeft() != NULL && c->GetRight() != NULL) { //when intersection reached (both pointers not null)
    b = Continue(c->GetLeft()) || Continue(c->GetRight());
    if(!b) sol.pop();
    return b;
  }
  else {
    if (c->GetLeft() == NULL) {
      b = Continue(c->GetRight());
      if(!b) sol.pop();
      return b;
    }
    b = Continue(c->GetLeft());
    if(!b) sol.pop();
    return b;
  }
}

stack <Path *> PathFinder::GetSolution(Path * head) {
  Reset();
  Continue(head);
  return sol;
}
