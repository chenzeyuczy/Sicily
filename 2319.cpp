#include <vector>

using namespace std;

template <typename T>
bool binSearch(vector<T> table, int low, int high, const T &target) {
    while (high > low) {
        int mid = (high + low) / 2;
        if (table[mid] >= target) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return table[low] == target;
}
