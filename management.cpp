#include "management.hpp"

string Path::GetName() {
  return name;
}
Path * Path::GetLeft() {
  return left;
}
Path * Path::GetRight() {
  return right;
}
void Path::SetLeft(Path* p){
    this-> left = p;
}
void Path::SetRight(Path* p){
    this->right = p;
}
