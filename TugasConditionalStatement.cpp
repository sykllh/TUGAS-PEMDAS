#include <iostream>
using namespace std;

float BMI(float a,float b){
    return a/(b*b);
}

string status_BeratBadan (float BMI){
    if (bmi < 18,5)
        return "Berat Badan Kurang";
    if (bmi <25)
        return "Berat Badan Normal";
    if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main(){
    float berat,tinggi,bmi;
    string status;

    cout << "Masukkan Berat Badan (KG) = ";
    cin >> berat
    cout << "Masukkan Tinggi Badan (CM) = ";
    cin >> tinggi

    bmi = BMI(berat,tinggi);
    status = Status(bmi);
}