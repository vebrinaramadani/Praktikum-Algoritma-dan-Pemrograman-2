#include <iostream>

using namespace std;
void straigth_inst_sort(int larik[], int ukuran)

{
	int pilih;
	menu:
	cout << "==================================\n";
	cout << "               PROGRAM             \n";
	cout << "==================================\n";
	cout << "1.> Insertion Sort\n";
	cout << "2.> Selection Sort\n";
	cout << "3.> Buble Sort\n";
	cout << "Pilih = ";
	cin >> pilih;
	
	switch (pilih)
	{
		case 1 :
			void straigth_inst_sort(int larik[], int ukuran)
			{
			int i,j;
			int temp;
	
				for(int i=1;i<ukuran;i++)
				{
					temp=larik[i];
					j=i-1;
					while((temp<larik[j])&&(j>=0))
					{
						larik[j+1]=larik[j];
						j=j-1;
						larik[j+1]=temp;
					}
				}
			}
			int k;
			int values[5];
			
			for(k=0;k<5;k++)
			{
				cout << "values [" << k << "] : ";
				cin >> values[k];
			}
			cout << endl;
			cout << "data yang belum diurutkan : ";
			for(k=0;k<5;k++)
			{
				cout <<values[k] << " ";
			}
			cout << endl;
			
			straigth_inst_sort(values,5);
			cout << "data yang sudah diurutkan : ";
			for(k=0;k<5;k++)
			{
				cout << values[k] << " ";
			}
		}
		break;
		case 2:
			cout << "yeyeye\n";
			break;
		case 3:
			cout << "lalala\n";
			break;
				default:
			cout << "\nKode yang Anda masukkan salah!\n\n";
	}
	goto menu;
	return 0;
}

