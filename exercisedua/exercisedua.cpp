#include <iostream>
using namespace std;

class BidangDatar {
private:
	int x;	
public:
	BidangDatar() {
		x = 0;
	}
	virtual void input() = 0;
	virtual float Luas(int a) = 0;
	virtual float Keliling(int a) = 0;
	void setX(int a) {
		this->x = a;
	}
	int getx() {
		return x;
	}
};
class Lingkaran : public BidangDatar {
public:
	void input() {
		cout << "Masukkan jari-jari lingkaran : ";
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar : public BidangDatar {
public:
	void input() {
		cout << "Masukkan sisi Bujursangkar : ";
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s) {
		return s * s;
	}
	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	BidangDatar* obyek;

	cout << "Lingkaran dibuat" << endl;
	obyek = new Lingkaran();
	obyek->input();
	int r = obyek->getx();
	cout << "Luas Lingkaran = " << obyek->Luas(r) << endl;
	cout << "Keliling Lingkaran = " << obyek->Keliling(r) << endl;

	cout << "\nBujursangkar dibuat" << endl;
	obyek = new Bujursangkar();
	obyek->input();
	int s = obyek->getx();
	cout << "Luas Bujursangkar = " << obyek->Luas(s) << endl;
	cout << "Keliling Bujursangkar = " << obyek->Keliling(s) << endl;


	delete obyek;
	return 0;
}
