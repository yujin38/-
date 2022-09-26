// https://school.programmers.co.kr/learn/courses/30/lessons/12945

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    v.push_back(0); v.push_back(1);
    if(n==0 || n==1)
        answer = v[n];
    else {
        for(int i=2; i<=n; i++)
            v.push_back(v[i-2] % 1234567 + v[i-1] % 1234567);
        answer = v[n] % 1234567;
    }
    return answer;
}
