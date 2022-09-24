// https://school.programmers.co.kr/learn/courses/30/lessons/12977
#include <vector>
using namespace std;

bool judge(int n) {
    int a=0;
    for(int i=1; i<=n; i++) {
        if(n%i == 0)
            a++;
    }
    if(a == 2)
        return true;
    else
        return false;
}

int solution(vector<int> nums) {
    int answer = 0, n;
    bool a;
    for(int i = 0; i<nums.size()-2; i++) {
        for(int j = i+1; j<nums.size()-1; j++){
            for(int k = j+1; k<nums.size(); k++){
                n = nums[i] + nums[j] + nums[k];
                a = judge(n);
                if(a == true)
                    answer++;
            }
        }
    }

    return answer;
}
