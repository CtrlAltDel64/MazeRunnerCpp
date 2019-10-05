//includes

class Path {
private:
  int type;
  int count = 0;
  Path * default;
  Path * right;

public:
  int GetType();
  int GetCount();
  Path * GetDefault();
  Path * GetRight();
  void CountIncrement();

  void SetType(int x);
  void SetDefault(Path *p1);
  void SetRight(Path *p2);
};
