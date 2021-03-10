// Scheduling the tasks in order to obtain the maximum possible number of tasks 
// without conflicting their time margins (greedy approach)

#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> ii;

bool cmp(ii a, ii b) {
    if(a.second <= b.second) 
        return true;
    return false;
}

int main(void) {
    int N;
    cin >> N;
    
    ii tasks[N];
    for(int i = 0; i < N; i++)
        cin >> tasks[i].first >> tasks[i].second;

    sort(tasks, tasks+N, cmp);

    int prev = 0, ans = 0;
    for(int i = 0; i < N; i++) {
        if(tasks[i].first >= prev) {
            prev = tasks[i].second;
            ans++;
        }
    }
    cout << "Maximum possible events: " << ans << endl;    

    return 0;
}