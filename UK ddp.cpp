#include <iostream> 
using namespace std; 

char nomor_urut[10] = {'o','1','2','3','4','5','6','7','8','9'}; 	
int cetak_hasil();			
void papan_permainan();		 

int main()
{
	int pemain = 1,i,pilih;
	char lambang;
	do
	{
		papan_permainan();
		pemain=(pemain%2)?1:2;
		cout << "Pemain " << pemain << ", Masukan angka:  ";
		cin >> pilih;
		lambang=(pemain == 1) ? 'X' : 'O';			
		if (pilih == 1 && nomor_urut[1] == '1')			 
			nomor_urut[1] = lambang;
		else if (pilih == 2 && nomor_urut[2] == '2')
			nomor_urut[2] = lambang;
		else if (pilih == 3 && nomor_urut[3] == '3')
			nomor_urut[3] = lambang;
		else if (pilih == 4 && nomor_urut[4] == '4')
			nomor_urut[4] = lambang;
		else if (pilih == 5 && nomor_urut[5] == '5')
			nomor_urut[5] = lambang;
		else if (pilih == 6 && nomor_urut[6] == '6')
			nomor_urut[6] = lambang;
		else if (pilih == 7 && nomor_urut[7] == '7')
			nomor_urut[7] = lambang;
		else if (pilih == 8 && nomor_urut[8] == '8')
			nomor_urut[8] = lambang;
		else if (pilih == 9 && nomor_urut[9] == '9')
			nomor_urut[9] = lambang;
		else
		{
			cout<<"Jawaban tidak valid ";
			pemain--;     	
			cin.ignore();	 
			cin.get();     
		}
		i=cetak_hasil();
		pemain++;
	}while(i==-1);  
	papan_permainan();
	if(i==1)       
		cout<<"==>\aPemain "<<--pemain<<" adalah pemenang ";
	else
		cout<<"==>\aGame seri"; 
	cin.ignore();    
	cin.get();		 
	return 0;
}

int cetak_hasil()
{
	if (nomor_urut[1] == nomor_urut[2] && nomor_urut[2] == nomor_urut[3])			
		return 1;												
	else if (nomor_urut[4] == nomor_urut[5] && nomor_urut[5] == nomor_urut[6])
		return 1;
	else if (nomor_urut[7] == nomor_urut[8] && nomor_urut[8] == nomor_urut[9])
		return 1;
	else if (nomor_urut[1] == nomor_urut[4] && nomor_urut[4] == nomor_urut[7])
		return 1;
	else if (nomor_urut[2] == nomor_urut[5] && nomor_urut[5] == nomor_urut[8])
		return 1;
	else if (nomor_urut[3] == nomor_urut[6] && nomor_urut[6] == nomor_urut[9])
		return 1;
	else if (nomor_urut[1] == nomor_urut[5] && nomor_urut[5] == nomor_urut[9])
		return 1;
	else if (nomor_urut[3] == nomor_urut[5] && nomor_urut[5] == nomor_urut[7])
		return 1;
	else if (nomor_urut[1] != '1' && nomor_urut[2] != '2' && nomor_urut[3] != '3' && nomor_urut[4] != '4' && nomor_urut[5] != '5' && nomor_urut[6] != '6' && nomor_urut[7] != '7' && nomor_urut[8] != '8' && nomor_urut[9] != '9')
		return 0;					
	else
		return -1;
}

void papan_permainan()
{
	system("cls");
	cout << "\n\tSelamat Datang Di Game Tic Tac Toe\n";
	
	cout << "\n\nPemain 1 (X)  -  Pemain 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << nomor_urut[1] << "  |  " << nomor_urut[2] << "  |  " << nomor_urut[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << nomor_urut[4] << "  |  " << nomor_urut[5] << "  |  " << nomor_urut[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << nomor_urut[7] << "  |  " << nomor_urut[8] << "  |  " << nomor_urut[9] << endl;
	cout << "     |     |     " << endl << endl;
}
