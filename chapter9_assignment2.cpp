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
        cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
        cout << getSourceString() << "�� �Է��ϼ���>> ";
        cin >> src;
        cout << "���� ��� : " << convert(src) << getDestString() << endl;
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