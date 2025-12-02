// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

void kiemTraSoNguyen()
{
    float x;
    printf("Nhap vao so x: ");                              
    scanf("%f", &x);

    if (x == (int)x)
    {
        printf("%.0f la so nguyen\n", x);
        int n = (int)x;
        
        int soNguyenTo = 1;
        if (n < 2)
        {
            soNguyenTo = 0;
        }
        else
        {
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    soNguyenTo = 0;
                    break;
                }
            }
        }
        if (soNguyenTo == 1)
        {
            printf("%d la so nguyen to\n", n);
        }
        else
        {
            printf("%d khong phai la so nguyen to\n", n);
        }

        int canBac2 = sqrt(n);
        if (canBac2 * canBac2 == n)
        {
            printf("%d la so chinh phuong\n", n);
        }
        else
        {
            printf("%d khong phai la so chinh phuong\n", n);
        }
    }
    else
    {
        printf("%.2f khong phai la so nguyen\n", x);
        printf("Vi x khong phai so nguyen nen khong xet so nguyen to va so chinh phuong\n");
    }
}

void timUocSoVaBoiSoChung2So()
{
    int x, y;
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap vao so nguyen y: ");
    scanf("%d", &y);

    int xBanDau = x;
    int yBanDau = y;

    if (x == 0 || y == 0)
    {
        printf("Uoc chung lon nhat la: %d\n", x + y);
        printf("Khong co Boi chung nho nhat vi co so 0\n");
    }
    else
    {
        if (x < 0)
        {
            x = -x;
        }
        if (y < 0)
        {
            y = -y;
        }
        while (x != y)
        {
            if (x > y)
            {
                x = x - y;
            }
            else
            {
                y = y - x;
            }
        }
        int uocChungLonNhat = x;
        printf("Uoc chung lon nhat cua 2 so la: %d\n", uocChungLonNhat);

        int boiChungNhoNhat =(xBanDau * yBanDau) / uocChungLonNhat;
        if (boiChungNhoNhat < 0)
        {
            boiChungNhoNhat = -boiChungNhoNhat;
        }
        printf("Boi chung nho nhat cua 2 so la: %d\n", boiChungNhoNhat);
    }
}

void chuongTrinhTinhTienKaraoke()
{

}

void tinhTienDien()
{

}

void doiTien()
{

}

void tinhLaiSuatVayNganHangVayTraGop()
{

}

void chuongTrinhVayTienMuaXe()
{

}

void sapXepThongTinSinhVien()
{

}

void xayDungGameFPOLY()
{

}

void tinhToanPhanSo()
{

}

void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            timUocSoVaBoiSoChung2So();
            break;
        case 3:
            chuongTrinhTinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            doiTien();
            break;
        case 6:
            tinhLaiSuatVayNganHangVayTraGop();
            break;
        case 7:
            chuongTrinhVayTienMuaXe();
            break;
        case 8:
            sapXepThongTinSinhVien();
            break;
        case 9:
            xayDungGameFPOLY();
            break;
        case 10:
            tinhToanPhanSo();
            break;
        case 0:
            printf("Thoat\n");
            break;
        default:
            printf("Chon sai. Chuc nang hop le [0-10]");
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
        printf("Menu\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang tren Menu: ");
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