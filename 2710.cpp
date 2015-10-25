class numCal {
  public:
    numCal(int a[], int n):size(n) {
      arr = new int[size];
      for (int i = 0; i < size; i++)arr[i] = a[i];
    }
    numCal(const numCal& other):size(other.size) {
      arr = new int[size];
      for (int i = 0; i < size; i++)arr[i] = other.arr[i];
    }
    ~numCal() {delete[] arr;}
    int sum() {
      int s = 0, i;
      for (i = 0; i < size; i++)s += arr[i];
      return s;
    }
    numCal& operator=(const numCal& other) {
      if (!arr)delete[] arr;
      size = other.size;
      arr = new int [size];
      for (int i = 0; i < size; i++)arr[i] = other.arr[i];
      return *this;
    }
    numCal& operator++() {
      for (int i = 0; i < size; i++)arr[i]++;
      return *this;
    }
    numCal operator++(int) {
      numCal tem(*this);
      for (int i = 0; i < size; i++)arr[i]++;
      return tem;
    }
  private:
    int size;
    int *arr;
};
