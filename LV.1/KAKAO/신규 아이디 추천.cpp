// https://school.programmers.co.kr/learn/courses/30/lessons/72410
// 정규식 사용

#include <vector>
#include <string>
#include <regex>

using namespace std;

string solution(string new_id) {
    string answer = new_id;
    //1
    for(int i = 0; i<answer.size(); i++) 
        answer[i] = tolower(answer[i]);
    //2
    answer = regex_replace(answer, regex("[^a-z0-9-_.]"), "");
    //3
    for(int i = 0; i<answer.size(); i++) {
        if(answer[i] == '.' && answer[i+1] == '.') {
                answer.erase(i, 1);
                i--;
            }
    }
    //4
    if(answer[0] == '.')
        answer.erase(0, 1);
    if(answer[answer.size()-1] == '.')
        answer.erase(answer.size()-1, 1);
    //5
    if(answer.size() == 0)
        answer = "a";
    //6
    if(answer.size() >= 16) 
        answer.erase(15, answer.size()-1);
    if(answer[answer.size()-1] == '.')
        answer.erase(answer.size()-1, 1);
    //7
    if(answer.size() <= 2) {
        for(int i = answer.size(); i<3; i++) {
            answer.push_back(answer[answer.size()-1]);
        }
    }
    
    return answer;
}
