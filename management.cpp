
#include "management.hpp"

int Path::GetCount() {
  return count;
}
Path * Path::GetLeft() {
  return left;
}
Path * Path::GetRight() {
  return right;
}
void Path::CountIncrement() {
  count++;
}
void Path::SetLeft(Path* p){
    this-> left = p;
}
void Path::SetRight(Path* p){
    this->right = p;
}
