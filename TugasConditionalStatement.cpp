#include <iostream>
using namespace std;

float BMI(float a,float b){
    return a/(b*b);
}

string status_BeratBadan (float bmi){
    if (bmi < 18.5){
        return "Berat Badan Kurang";
    }
    else if (bmi <25){
        return "Berat Badan Normal";
    }
    else if (bmi < 30){
            return "Berat Badan Kelebihan";
    }
    else{
        return "Obesitas";
    }
}

int main(){
    float berat,tinggi,bmi;
    string status;

    cout <<"--- Selamat Datang Mahasiswa Kelas A 2025 ---" <<endl;

    cout << "Masukkan Berat Badan (KG) = ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (M) = ";
    cin >> tinggi;

    bmi = BMI(berat,tinggi);
    status = status_BeratBadan(bmi);

    cout << "\nnilai bmi anda = " << bmi << endl;
    cout <<"status bmi anda " << status << endl;
   
}