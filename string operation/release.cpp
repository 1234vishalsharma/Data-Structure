#include <iostream>
#include <vector>

using namespace std;

int releasePrisoners(vector<int>& cells) {
    int n = cells.size();
    vector<int> newCells(n, 0); 
    int prisons_released = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n-1) {
            
            newCells[i] = 0;
        } else if (cells[i-1] == cells[i+1]) {
            
            newCells[i] = 1;
        } else {
            
            newCells[i] = 0;
        }
    }

    // Count the number of prisoners released
    for (int i = 0; i < n; i++) {
        if (cells[i] == 1 && newCells[i] == 0) {
            prisons_released++;
        }
    }

    cells = newCells; 
    return prisons_released+1;
}

int main() {
    vector<int> cells = {0,0,1,1,1,0,1};  // initial configuration
    int ans=releasePrisoners(cells);
    cout<<ans+1;
    return 0;
}

