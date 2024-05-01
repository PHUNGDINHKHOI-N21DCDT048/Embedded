#include <stdio.h>

// Hàm để kiểm tra xem một năm có phải là năm nhuận không
int laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm để tính số ngày trong một tháng của một năm
int soNgayTrongThang(int thang, int nam) {
    if (thang == 2) {
        return laNamNhuan(nam) ? 29 : 28;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Hàm để tính số ngày kể từ ngày tham chiếu (1/1/1)
int soNgayTuNgayThamChieu(int ngay, int thang, int nam) {
    int soNgay = 0;
    for (int y = 1; y < nam; y++) {
        soNgay += laNamNhuan(y) ? 366 : 365;
    }
    for (int m = 1; m < thang; m++) {
        soNgay += soNgayTrongThang(m, nam);
    }
    soNgay += ngay - 1;
    return soNgay;
}

// Hàm để tính sự khác biệt trong số ngày giữa hai ngày
int suKhacBietGiuaHaiNgay(int ngay1, int thang1, int nam1, int ngay2, int thang2, int nam2) {
    int soNgay1 = soNgayTuNgayThamChieu(ngay1, thang1, nam1);
    int soNgay2 = soNgayTuNgayThamChieu(ngay2, thang2, nam2);
    return soNgay2 - soNgay1;
}

int main() {
    int ngay1 = 1, thang1 = 1, nam1 = 2023;
    int ngay2 = 12, thang2 = 5, nam2 = 2025;

    int suKhacBiet = suKhacBietGiuaHaiNgay(ngay1, thang1, nam1, ngay2, thang2, nam2);
    printf("Sự khác biệt là: %d ngày.\n", suKhacBiet);

    return 0;
}