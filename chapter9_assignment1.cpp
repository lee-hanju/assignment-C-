#include <iostream>
#include <string>
using namespace std;
class Converter {
protected:
    double ratio;
    virtual double convert(double srt) = 0; 
    virtual string getSourceString() = 0; 
    virtual string getDestString() = 0; 
public:
    Converter(double ratio) { this->ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
        cout << getSourceString() << "을 입력하세요>> ";
        cin >> src;
        cout << "변한 결과 : " << convert(src) << getDestString() << endl;
    }
};
class WonToDollar : public Converter {
    string src, dest;
protected:
    string getSourceString() { return src; }
    string getDestString() { return dest; }
    double convert(double srt) { return  srt / Converter::ratio; }
public:
    WonToDollar(double ratio) : Converter(ratio) {
        src = "원"; dest = "달러";
    }

};
int main() {
    WonToDollar wd(1010); 
    wd.run();
}
