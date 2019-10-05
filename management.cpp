//includes

int Path::GetType() {
  return type;
}
int Path::GetCount() {
  return count;
}
Path * Path::GetDefault() {
  return default;
}
Path * Path::GetRight() {
  return right;
}
void Path::CountIncrement() {
  count++;
}

/*
  Maze data functions
 */
void Path::SetType(int x) {
  type = x;
}
void Path::SetDefault(Path *p1) {
  default = p1;
}
void Path::SetRight(Path *p2) {
  right = p2;
}
