#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	int x[100][100], m = 4, n = 4;
	generareMatriceSol1(x, m, n);
	afisareMatrice(x, m, n);
}
void sol2() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol2(x, m, n);
	afisareChar(x, m, n);
}
void sol3() {
	int x[100][100], m = 4, n = 4;
	generareMatriceSol3(x, m, n);
	afisareMatrice(x, m, n);
}
void sol4() {
	int x[100][100], m = 4, n = 4;
	generareMatriceSol4(x, m, n);
	afisareMatrice(x, m, n);
}
void sol5() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol5(x, m, n);
	afisareMatrice(x, m, n);
}
void sol6() {

	int x[100][100], m = 5, n = 4;
	generareMatriceSol6(x, m, n);
	afisareChar(x, m, n);
}
void sol7() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol7(x, m, n);
	afisareMatrice(x, m, n);
}
void sol8() {
	int x[100][100], m = 7, n = 7;
	generareMatriceSol8(x, m, n);
	afisareChar(x, m, n);
}
void sol9() {
	int x[100][100], m = 6, n = 6;
	generareMatriceSol9(x, m, n);
	afisareMatrice(x, m, n);
}
void sol10() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol10(x, m, n);
	afisareChar(x, m, n);
}
void sol11() {
	int x[100][100], m = 6, n = 6;
	generareMatriceSol11(x, m, n);
	afisareMatrice(x, m, n);
}
void sol12() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol12(x, m, n);
	afisareMatrice(x, m, n);
}
void sol13() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol13(x, m, n);
	afisareMatrice(x, m, n); (x, m, n);
}
void sol14() {
	int a[100], d1;
	int b[100], d2;
	citireVector(a, d1);
	citireVector2(b, d2);
	int nr = nrValoriStrictMaiMici(a, d1, b, d2);
	cout << nr << endl;
}
void sol15() {
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = nrElementeInItervalCu3Div(a, b);
	cout << nr << endl;
}
void sol16() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	numarInVectorImpar(n, v, d);
	bubbleSort(v, d);
	int num = vectorInNumar(v, d);
	cout << num << endl;

}
void sol17() {
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = numarMaximDeCifeInInterval(a, b);
	cout << nr << endl;
}
void sol18() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int s = sumaDivizoriPrimi(n);
	cout << s << endl;
}
void sol19() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	vectorDinDivizoriPPfAleLuiN(n, v, d);
	int max = elementMax(v, d);
	cout << max << endl;
}
void sol20() {
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	perechiDeElementeCuCMMCegalCuM(n, m);
}
void sol21() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol22() {
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiOglindi(v, d);
}
void sol23() {
	int v[100], d = 0;
	citireVector(v, d);
	int prod = produsMax(v, d);
	cout << prod << endl;
}
void sol28() {
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrPerechiPrimeIntreEle(v, d);
	cout << nr << endl;
}
void sol29() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	eliminareCifrePareSiCreeareNrNou(n);
}
void sol30() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	celMaiMareElementParDePeLinieCuPrimulNumarImpar(x, m, n);
}
void sol31() {
	int v[100], d = 0;
	citireVector(v, d);
	elementeCuNumarDeAparitii(v, d);
}
void sol32() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol33() {
	int d = 0;
	int mat[200];
	int rom[200];
	int inf[200];
	citireVector(mat, d);
	citireVector2(rom, d);
	citireVector3(inf, d);
	auCelPutinNota5SiMedia7(mat, rom, inf, d);
}
void sol34() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	vectorPrimCuNMaiMicCaN(n, v, d);
	afisareVector(v, d);
}
void sol35() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicateConsecutive(v, d);
	afisareVector(v, d);
}
void sol36() {
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	inserareCelMaiMicDivPrimAlLuiNInvectorDacaNuExista(n, v, d);
	afisareVector(v, d);
}
void sol37() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	stergereMijloc(x, m, n);
	afisareMatrice(x, m, n);
}
void sol38() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	schimbareLiniiCuNumarulDeUnuPeColoane(x, m, n);
	afisareMatrice(x, m, n);
}
void sol39() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	bool aff = existaOColoanaDoarCuX(x, m, n);
	aff == true
		?
		cout << "Exista cel putin o coloana doar cu caracterul X" << endl
		:
		cout << "Nu exista cel putin o coloana doar cu caracterul X" << endl;

}
void sol40() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	double ma = mediaAritmeticaAValorilorMinimeDePeColoaneOrdonateStrictCrescator(x, m, n);
	cout << ma << endl;
}
void sol41() {
	int x[100][100], m = 0, n = 0;
	citireMatrice(x, m, n);
	schimbareElementeParePanaIn3CifreCuMaxDiagPrincipala(x, m, n);
	afisareMatrice(x, m, n);
}
void sol42() {
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	cout << "Introduceti nr de cifre: " << endl;
	int k;
	cin >> k;
	afisareNrDivCuNSiM(n, m, k);
}
void sol43() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareNrCuNrMaxDeAparitii(v, d);
}
void sol44() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoare(v, d);
}
void sol45() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareNrCuNrMinDeAparitii(v, d);
}
void sol46() {
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti pozitia: " << endl;
	int k;
	cin >> k;
	int nr = nrPePozitaKDesc(v, d, k);
	cout << nr << endl;
}
void sol47() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareInOrdineCrescatoarePalindroameCu6CifreImpare(v, d);
}
void sol48() {
	int v[100], d = 0;
	citireVector(v, d);
	vectorCuNumereInterioareAleNumerelorCuPcUcEgale(v, d);
}
void sol49() {
	int v[100], d = 0;
	citireVector(v, d);
	int lmax = lungimeMaxSecventeCuPcEgala(v, d);
	cout << lmax << endl;
}
void sol50() {
	int v[100], d = 0;
	citireVector(v, d);
	int min = nrCuAparitiiMinime(v, d);
	cout << min << endl;
}