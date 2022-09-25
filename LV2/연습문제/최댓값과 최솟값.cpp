// https://school.programmers.co.kr/learn/courses/30/lessons/12939
// split 함수 사용

#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;
    while (getline(ss, tmp, delimiter)) result.push_back(tmp);
    return result;
}

string solution(string s) {
    string answer = "";
    vector<string> t = split(s, ' ');
    vector<int> v;
    for(int i=0; i<t.size(); i++)
        v.push_back(stoi(t[i]));
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    answer = to_string(min) + " " + to_string(max);
    return answer;
}
