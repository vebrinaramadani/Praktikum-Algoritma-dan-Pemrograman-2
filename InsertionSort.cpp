#include <iostream>

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
}
