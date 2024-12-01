#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int timeRequired(int N, int M, vector<int>& workerTimes, vector<int>& laptopComplexities) {
    vector<int> finishTime(N, 0);  // Array to store the finish time of each worker
    int totalTime = 0;

    for (int i = 0; i < M; i++) {  // For each laptop
        int complexity = laptopComplexities[i];
        
        // Calculate the time for each worker to complete this laptop
        for (int j = 0; j < N; j++) {
            int timeForWorker = workerTimes[j] * complexity;
            if (j == 0) {
                // First worker starts immediately on the laptop
                finishTime[j] += timeForWorker;
            } else {
                // Next worker can only start after the previous one finishes
                finishTime[j] = max(finishTime[j], finishTime[j - 1]) + timeForWorker;
            }
        }

        // Update the total time as the finish time of the last worker on the current laptop
        totalTime = finishTime[N - 1];
    }

    return totalTime;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> workerTimes(N);
    vector<int> laptopComplexities(M);
    
    for (int i = 0; i < N; i++) {
        cin >> workerTimes[i];
    }
    
    for (int i = 0; i < M; i++) {
        cin >> laptopComplexities[i];
    }
    
    int result = timeRequired(N, M, workerTimes, laptopComplexities);
    cout << result << endl;

    return 0;
}
