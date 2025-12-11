// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>

void thongTinThuCung()
{
	char tenThuCung[50];
	char maThuCung[30];
	int namSinh;
	int year;
	int currentYear = 2025;
	while (getchar() != '\n');
	printf("Nhap ten thu cung: ");
	fgets(tenThuCung, sizeof(tenThuCung), stdin);
	fgets(maThuCung, sizeof(maThuCung), stdin);
	//tinh nam sinh
	printf("Nhap nam sinh thu cung: ");
	scanf("%d", &year);
	//in ket qua
	printf("%sTuoi: %d\n", tenThuCung, currentYear - year);
}

void tinhTong()
{
	int n;
	int tong;
	printf("Nhap so nguyen duong n (n>3): ");
	scanf("%d", &n);
	tong = n * (n + 1) / 2;
	printf("Tong: %d = %d\n", n, tong);
	if (n % 5 == 0)
	{
		printf("%d chia het cho 5\n", n);
	}
	else {
		printf("%d khong chia het cho 5\n", n);
	}


}

void thongTinCuaHang()
{

}

void lapChucNang(chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinThuCung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			thongTinCuaHang();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}


int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Thong tin thu cung");
		printf("\n");
		printf("2. Tinh tong");
		printf("\n");
		printf("3. Thong tin cua hang");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184