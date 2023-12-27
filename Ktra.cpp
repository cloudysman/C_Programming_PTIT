#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class monhoc {
protected:
    string mamon;
    string ten;
    int soTinChi;

public:
    void nhapbp() {
        cout << "Nhap ma mon hoc: ";
        cin >> mamon;
        cout << "Nhap ten mon hoc: ";
        cin >> ten;
        cout << "Nhap so tin chi: ";
        cin >> soTinChi;
    }

    void xemmh() {
        cout << "Ma mon hoc: " << mamon << endl;
        cout << "Ten mon hoc: " << ten << endl;
        cout << "So tin chi: " << soTinChi << endl;
    }

    string getMamon() {
        return mamon;
    }

    string getTen() {
        return ten;
    }

    int getSoTinChi() {
        return soTinChi;
    }
};

class monhocdk : public monhoc {
private:
    string nhom;
    int sotiet;

public:
    void nhapbp() {
        monhoc::nhapbp(); 
        cout << "Nhap nhom: ";
        cin >> nhom;
        sotiet = soTinChi * 15;
    }

    void xemmh() {
        monhoc::xemmh();
        cout << "Nhom: " << nhom << endl;
        cout << "So tiet: " << sotiet << endl;
    }

    string getNhom() {
        return nhom;
    }

    int getSotiet() {
        return sotiet;
    }
};

class danhsach {
private:
    vector<monhoc> dsmh;

public:
    void nhapbp() {
        int n;
        cout << "Nhap so luong mon hoc: ";
        cin >> n;
        dsmh.resize(n);
        for (int i = 0; i < n; i++) {
            cout << "Nhap thong tin mon hoc thu " << i + 1 << ":" << endl;
            dsmh[i].nhapbp();
        }
    }

    void xemmh() {
        for (int i = 0; i < dsmh.size(); i++) {
            cout << "Thong tin mon hoc thu " << i + 1 << ":" << endl;
            dsmh[i].xemmh();
        }
    }

    monhoc timmonhoc(string mamon) {
        for (int i = 0; i < dsmh.size(); i++) {
            if (dsmh[i].getMamon() == mamon) {
                return dsmh[i];
            }
        }
        return monhoc();
    }
};

class sinhviendk {
private:
    string masv;
    string hoten;
    vector<monhocdk> dsmdk;
    int tongtinchi;

public:
    void nhapbp(danhsach& ds) {
        cout << "Nhap ma sinh vien: ";
        cin >> masv;
        cout << "Nhap ho ten sinh vien: ";
        cin >> hoten;

        int tongsomondk;
        cout << "Nhap so mon hoc da dang ky: ";
        cin >> tongsomondk;

        dsmdk.resize(tongsomondk);
        tongtinchi = 0;
        for (int i = 0; i < tongsomondk; i++) {
            string mamon;
            cout << "Nhap ma mon hoc thu " << i + 1 << ": ";
            cin >> mamon;
            monhoc foundMonHoc = ds.timmonhoc(mamon);
            if (foundMonHoc.getMamon() != "") {
                // Using getter methods for accessing protected members
                dsmdk[i].mamon = foundMonHoc.getMamon();
                dsmdk[i].ten = foundMonHoc.getTen();
                dsmdk[i].soTinChi = foundMonHoc.getSoTinChi();
                dsmdk[i].nhapbp();
                tongtinchi += foundMonHoc.getSoTinChi();
            } else {
                cout << "Khong tim thay mon hoc co ma " << mamon << endl;
            }
        }
    }

    void xemmh() {
        cout << "Ma sinh vien: " << masv << endl;
        cout << "Ho ten sinh vien: " << hoten << endl;
        cout << "Tong so tin chi da dang ky: " << tongtinchi << endl;
        cout << "Danh sach mon hoc da dang ky:" << endl;
        for (int i = 0; i < dsmdk.size(); i++) {
            dsmdk[i].xemmh();
        }
    }

    void ghitep() {
        ofstream file;
        file.open(masv + ".txt");
        file << "Ma sinh vien: " << masv << endl;
        file << "Ho ten sinh vien: " << hoten << endl;
        file << "Tong so tin chi da dang ky: " << tongtinchi << endl;
        file << "Danh sach mon hoc da dang ky:" << endl;
        for (int i = 0; i < dsmdk.size(); i++) {
            file << "Mon hoc thu " << i + 1 << ":" << endl;
            file << "Ma mon hoc: " << dsmdk[i].getMamon() << endl;
            file << "Ten mon hoc: " << dsmdk[i].getTen() << endl;
            file << "Nhom: " << dsmdk[i].getNhom() << endl;
            file << "So tiet: " << dsmdk[i].getSotiet() << endl;
            file << "------------------------" << endl;
        }
        file.close();
    }

    void doctep() {
        ifstream file;
        file.open(masv + ".txt");
        if (!file) {
            cout << "Khong tim thay file cho sinh vien " << masv << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
};

int main() {
    danhsach a;
    a.nhapbp();
    a.xemmh();

    sinhviendk b;
    b.nhapbp(a);
    b.ghitep();

    sinhviendk c;
    c.doctep();
    c.xemmh();

    return 0;
}

