#include <stack>
using namespace std;

PathFinder::PathFinder() {
  sol = new stack <Path *>;
}

void PathFinder::Reset() {
  while (!sol.empty()) {
        sol.pop();
    }
}

bool PathFinder::Continue(Path * c) {
  sol.push(c);
  if (c->name == "49x") { //when finished reached >> stack completed
    return true;
  }
  if (c->GetLeft() != NULL && c->GetRight() != NULL) { //when intersection reached (both pointers not null)
    return Continue(c->GetLeft()) || Continue(c->GetRight());
  }
  if (c->GetLeft() != NULL && c->GetRight() == NULL) { //when continue object reached
    return Continue(c->GetLeft());
  }
  if { //when end object is reached
    while (c->GetLeft() != NULL || c->GetRight() != NULL) { //at least one of the pointers is not null
      sol.pop();
    }
    return false;
  }
}

stack <Path *> PathFinder::GetSolution(Path * head) {
  Reset();
  Continue(head);
  return sol;
}
