// chp4ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 중간값 결과 점수를 계산하기.

// include 선언할때 알파벳 순서를 맞추면 좋음
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "grade.h"
#include "Student_info.h"
#include "median.h"

// 함수명, 변수명 사용하겠다는 의미
using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    //학생이름과 모든 점수를 읽어 저장하고 가장 
    // 가장 긴 이름을 찾음.
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        //Aaron max(0, 5) = 5
        students.push_back(record);
    }
    //학생 정보를 알파벳 순으로 정렬
    sort(students.begin(), students.end(), compare);
    //종합점수를 계산해 생성
    for (vector<Student_info>::size_type i = 0;
        i != students.size(); ++i) {
        //이름과 오른쪽 공백을 포함하여 maxlen +1개의 
        //문자를 출력
        cout << students[i].name
            << string(maxlen + 1 - students[i].name.size(), ' ');

        try
        {
            double final_grade = grade(students[i]);
            // 결과를 출력
            streamsize prec = cout.precision(); // 지금 cout precision
            cout << "Final grade: " << setprecision(3)
                << final_grade << setprecision(prec) << endl;
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }//for 끝


    return 0;
} // main 끝
