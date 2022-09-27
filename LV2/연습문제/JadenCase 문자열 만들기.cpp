// https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;
    while(getline(ss, tmp, delimiter)) result.push_back(tmp);
    return result;
}

string solution(string s) {
    string answer = "";
    vector<string> v;
    v = split(s, ' ');
    for(int i=0; i<v.size(); i++) {
        v[i][0] = toupper(v[i][0]);

        for(int j=1; j<v[i].size(); j++)
            v[i][j] = tolower(v[i][j]);

        cout<<v[i]<<endl;
        answer += (v[i] + ' ');
    }
    answer.pop_back();

    if(s.size() != answer.size())
        answer.push_back(' ');

    return answer;
}
