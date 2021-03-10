#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int main() {
    priority_queue<int> pq; // (max number -> highest priority)

    for (int i = 5; i >= 1; i--) {
        printf("pq.push(%d)\n", i);
        pq.push(i);
    }
        
    while (!pq.empty()) {
        printf("%d\n", pq.top());
        pq.pop();
    }

    printf("\n");

    priority_queue<int, vector<int>, greater<int> > pq_min; // reversed priority (min number -> highest priority)

    for (int i = 5; i >= 1; i--) {
        printf("pq_min.push(%d)\n", i);
        pq_min.push(i);
    }
        
    while (!pq_min.empty()) {
        printf("%d\n", pq_min.top());
        pq_min.pop();
    }

    return 0;
}