#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int RollNo;
        int sh;       // Skills In HTML
        int sp;       // Skills In Python
        int sd;       // Skills In DSA
        int sj;       // Skills In Java
        int ss;       // Skills In SQL

        void AssignRollNo(int rn){
            RollNo = rn;
        }

        void InputSkills(int* arrofskills){
            sh = arrofskills[0];
            sp = arrofskills[1];
            sd = arrofskills[2];
            sj = arrofskills[3];
            ss = arrofskills[4];
        }

};

class Project{
    public:
        string name;
        int rsh;      // Skills in HTML
        int rsp;       // Skills In Python
        int rsd;       // Skills In DSA
        int rsj;       // Skills In Java
        int rss;       // Skills In SQL

};

void InputArray(int* a, int n){
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
}

int main(){
    int n; cin >> n;
    int arrayofskills[5];
    Student Student[n];

    for(int i = 0;i<n;i++){
        int x; cin >> x;
        InputArray(arrayofskills,5);
        Student[i].AssignRollNo(x);
        Student[i].InputSkills(arrayofskills);
    }

}