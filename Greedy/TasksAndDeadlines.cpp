//Tasks and deadlines greedy approach
//Maximizing the total score when for each task are gained d-x points,
//where d is the task's deadline and x is the time the task is finished.  
#include<iostream>
#include<algorithm>
using namespace std;
typedef pair<int, int> ii;

int main(void){
    int N;
    cin>>N;
    ii tasks[N];

    for(int i=0; i<N; i++)
        cin>>tasks[i].first>>tasks[i].second;
    
    sort(tasks, tasks+N);

    int d=0, points=0;
    for(int i=0; i<N; i++){
        d+=tasks[i].first;
        points+=tasks[i].second-d;
    }
    cout<<"Maximum possible total points: "<<points<<endl;    
}