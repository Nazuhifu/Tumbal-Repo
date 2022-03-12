#include <cstdio>
#include <string>
#include <iostream>

int main() {
	std::string s = "Pak Dengklek berternak";
	std::string t1 = "Dengklek";
	std::string t2 = "Pak";
	std::string t3 = "klek";
	std::string t = "dan Bu";
	
	printf("%d\n", s.find(t1)); 
	printf("%d\n", s.find(t2)); 
	printf("%d\n", s.find(t3)); 
	
	/*Mengambil substring dari indeks i sebanyak n karakter dari string s
	gunakan s.substr(i, n)*/
	printf("%s\n", s.substr(0, 6).c_str()); 
	printf("%s\n", s.substr(2, 1).c_str()); 
	
	/*Menghapus substring dari indeks i sebanyak n karakter dari string s
	gunakan s.erase(i, n)*/
	std::cout << "\n--Menghapus substring dari indeks i sebanyak n karakter dari string s";
	std::cout << "\n--gunakan s.erase(i, n)--\n";
	s.erase(1, 3);
	printf("%s\n\n", s.c_str());
	
	std::cout << "--Menyisipkan string t ke string s bermula di indeks i, gunakan s.insert(i, t)--";
	s.insert(4, t);
	printf("%s\n\n", s.c_str());
	
	std::cout << "--Menambahkan string--\n";
	s = "Pak Dengklek";
	t = " dan Bu Dengklek";
	std::string gabung = s + t;
	printf("%s\n", gabung.c_str());
	
	std::cout << "\n--Mengubah huruf besar ke kecil--\n";
	s = "toki";
	for (int i = 0; i < s.size(); i++) {
		s[i] -= 'a' - 'A';
	}
	printf("Dari toki menjadi %s\n", s.c_str());
}

