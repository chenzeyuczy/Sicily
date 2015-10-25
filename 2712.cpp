#include <iostream>

using namespace std;

class sortAlgorithm {
public:
    virtual void sort(int p[], int sz) = 0 ;
    ~sortAlgorithm() {}
};

class simpleSelection: public sortAlgorithm {
    void sort(int p[], int sz) {
        int tem, min;
        for (int i = 0; i < sz; i++) {
            min = i;
            for (int j = i + 1; j < sz; j++) {
                if (p[j] < p[min])
                    min = j;
            }
            tem = p[i];
            p[i] = p[min];
            p[min] = tem;
        }
    }
};

class bubleSort: public sortAlgorithm {
    void sort(int p[], int sz) {
        int tem, min;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz - i - 1; j++) {
                if (p[j] > p[j + 1]) {
                    tem = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = tem;
                }
            }
        }
    }
};

class sortArray {
    int *p;
    int size;
    sortAlgorithm *sa;
    friend ostream& operator<<(ostream& out, sortArray& sA) {
        for (int i = 0; i < sA.size; i++) {
            if (i)
                out << " ";
            out << sA.p[i];
        }
        out << std::endl;
    }
public:
    sortArray(int* array, int Size) {
        size = Size;
        p = new int[size];
        for (int i = 0; i < size; i++)
            p[i] = array[i];
    }
    ~sortArray() {
        delete[] p;
    }
    void setParam(int array[], int Size) {
        delete[] p;
        size = Size;
        p = new int[size];
        for (int i = 0; i < size; i++)
            p[i] = array[i];
    }
    void setAlgorithm(sortAlgorithm *Sa) {
        sa = Sa;
    }
    void sortIt() {
        sa->sort(p, size);
    }
};
 
int main() {
    int A[] = {12, 2, 33,12, 64, 9, 90, 1, 23, 11};
    sortArray sarray(A, 10);
    sortAlgorithm *pa;
 
    pa = new simpleSelection;
    sarray.setAlgorithm(pa);
    cout << sarray;
    sarray.sortIt();
    cout << sarray;
    delete pa;
 
    int B[] = {98, 999, 121, 32, 893, 112, 64, 99, 190, 11, 123, 111};
    sarray.setParam(B, 12);
 
    pa = new bubleSort;
    sarray.setAlgorithm(pa);
    cout << sarray;
    sarray.sortIt();
    cout << sarray;
    delete pa;
 
    return 0;
}
