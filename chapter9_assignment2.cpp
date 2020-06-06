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
class KmToMile : public Converter {
    string src, dest;
protected:
    double convert(double srt) { return srt / Converter::ratio; }
    string getSourceString() { return src; }
    string getDestString() { return dest; }
public:
    KmToMile(double ratio) : Converter(ratio) {
        src = "km"; dest = "Mile";
    }
};
int main() {
    KmToMile toMile(1.609344); 
    toMile.run();
}