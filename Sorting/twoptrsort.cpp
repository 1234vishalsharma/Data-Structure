#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second) {
        return p1.first > p2.first; // sort in descending order if same frequency
    }
    return p1.second < p2.second; // sort in ascending order otherwise
}

vector<int> sortArray(vector<int>& arr) {
    // Step 1: Create a map to store frequency of each element in the array
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    // Step 2: Create a vector of pairs to store (value, frequency) pairs
    vector<pair<int, int>> v;
    for (auto f : freq) {
        v.push_back({f.first, f.second});
    }

    // Step 3 and 4: Sort the pairs by frequency and value
    sort(v.begin(), v.end(), cmp);

    // Step 5: Construct the sorted array from the sorted pairs
    vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].second; j++) {
            result.push_back(v[i].first);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {4, 3, 5, 6, 5, 4, 3, 4, 5, 7, 5};
    vector<int> sortedArr = sortArray(arr);
    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    return 0;
}
