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
    float gioBatDau, gioKetThuc;
    float tongTien;

    do
    {
        printf("Nhap so gio bat dau (12-23): ");
        scanf("%f", &gioBatDau);
        printf("Nhap so gio ket thuc (12-23): ");
        scanf("%f", &gioKetThuc);
        if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc)
        {
            printf("Gio khong hop le! Quan chi hoat dong tu 12h den 23h\n");
            printf("Gio ket thuc phai lon hon gio bat dau. Vui long nhap lai\n");
        }
    } while (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc);

    float soGioHat = gioKetThuc - gioBatDau;
    float giaTien = 150000;

    if (soGioHat <= 3)
    {
        tongTien = soGioHat * giaTien;
    }
    else
    {
        tongTien = 3 * giaTien + (soGioHat - 3) * giaTien * 0.7;

    }
    if (gioBatDau >= 14 && gioBatDau <= 17)
    {
        tongTien = tongTien * 0.9;
        printf("Ban duoc giam 10%% do bat dau trong khung gio vang (14h-17h)\n");
    }
    printf("So gio hat: %.1f gio\n", soGioHat);
    printf("Tong tien can thanh toan: %.0f VND\n", tongTien);
}

void tinhTienDien()
{
    float soKWh, tienDien;
    do
    {
        printf("Nhap vao so kWh dien tieu thu: ");
        scanf("%f", &soKWh);
        if (soKWh < 0)
        {
            printf("So kWh khong duoc am. Vui long nhap lai!\n");
        }
    } while (soKWh < 0);
    if (soKWh <= 50)
    {
        tienDien = soKWh * 1678;
    }
    else if (soKWh <= 100)
    {
        // 50 so dau gia 1678 + phan du nhan gia bac 2
        tienDien = 50 * 1678 + (soKWh - 50) * 1734;
    }
    else if (soKWh <= 200)
    {
        // 50 so dau + 50 so tiep theo + phan du bac 3
        tienDien = 50 * 1678 + 50 * 1734 + (soKWh - 100) * 2014;
    }
    else if (soKWh <= 300)
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soKWh - 200) * 2536;
    }
    else if (soKWh <= 400)
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soKWh - 300) * 2834;
    }
    else
    {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soKWh - 400) * 2927;
    }
    printf("So dien tieu thu: %.1f kWh\n", soKWh);
    printf("So tien can thanh toan: %.0f VND\n", tienDien);
}

void doiTien()
{
    int soTien;
    int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int soLuongMenhGia = 9;
    do
    {
        printf("Nhap so tien can doi (so nguyen duong): ");
        scanf("%d", &soTien);
        if (soTien <= 0)
        {
            printf("So tien phai lon hon 0. Vui long thu lai!\n");
        }
    } while (soTien <= 0);
    printf("Ket qua doi tien:\n");

    for (int i = 0; i < soLuongMenhGia; i++)
    {
        // tinh so to cua menh gia hien tai
        int soTo = soTien / menhGia[i];
        if (soTo > 0)
        {
            printf("%d to %d\n", soTo, menhGia[i]);
        }
        
        soTien = soTien % menhGia[i];
    }
}

void tinhLaiSuatVayNganHangVayTraGop()
{
    float soTienVay;
    do
    {
        printf("Nhap so tien can vay: ");
        scanf("%f", &soTienVay);
        if (soTienVay <= 0)
        {
            printf("So tien vay can phai lon hon 0. Vui long nhap lai!\n");
        }
    } while (soTienVay <= 0);
    float laiSuat = 0.05; // 5%
    int kyHan = 12; // 12 thang
    
    // Tien goc phai tra hang thang (Co dinh)
    float gocPhaiTra = soTienVay / kyHan;

    // Bien luu so tien con no (Ban dau bang tong tien vay)
    float duNoConLai = soTienVay;
    printf("Ky han \t Lai \t Goc \t Tong Tra  Con Lai\n");

    for (int i = 0; i < kyHan; i++)
    {
        // tinh lai dua tren du no hien tai 
        float laiPhaiTra = duNoConLai * laiSuat;
        // tong tien phai tra thang nay = goc + lai
        float tongPhaiTra = gocPhaiTra + laiPhaiTra;
        // tru bot tien goc da tra de ra du ra no moi
        duNoConLai = duNoConLai - gocPhaiTra;
       
        printf("%d \t %.0f \t %.0f \t %.0f \t   %.0f\n",i + 1, laiPhaiTra, gocPhaiTra, tongPhaiTra, duNoConLai);
    }
}

void chuongTrinhVayTienMuaXe()
{
    float phanTramVay;
    float giaXe = 500000000; // 500 trieu co dinh
    do
    {
        printf("Nhap phan tram vay (0 - 100): ");
        scanf("%f", &phanTramVay);
        if (phanTramVay < 0 || phanTramVay > 100)
        {
            printf("Phan tram khong hop le. Vui long nhap tu 0 den 100!\n");
        }
    } while (phanTramVay < 0 || phanTramVay > 100);
    // Lai suat co 7.2% / nam => chia 12 thang de ra lai thang
    float laiSuatThang = 0.072 / 12;
    // Thoi han 24 nam => doi ra thang
    int thoiHan = 24 * 12;
    float tienVay = giaXe * (phanTramVay / 100);
    float tienTraTruoc = giaXe - tienVay;
    // Goc phai tra hang thang ( co dinh suot 24 nam)
    float gocHangThang = tienVay / thoiHan;
    // Bien luu du no de tinh lai giam dan
    float duNo = tienVay;
    printf("Gia tri xe: %.0f VND\n", giaXe);
    printf("So tien tra truoc (Lan dau): %.0f VND\n", tienTraTruoc);
    printf("So tien vay: %.0f VND\n", tienVay);
    printf("Thoi han vay: %d nam (%d thang)\n", 24, thoiHan);
    printf("Lai suat: 7.2%%/nam\n");
    printf("Thang \t\t Lai \t\t Goc \t\t Tong Tra \t Con Lai\n");
    for (int i = 0; i < 12; i++) 
    {
        float tienLai = duNo * laiSuatThang;
        float tongTra = gocHangThang + tienLai;
        duNo = duNo - gocHangThang;

   
        printf("%d \t     %.0f \t     %.0f \t      %.0f \t      %.0f\n", i + 1, tienLai, gocHangThang, tongTra, duNo);
    }
    printf("... (Con tiep %d thang nua) ...\n", thoiHan - 12);
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