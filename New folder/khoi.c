int main() {
   int chieuDai, chieuRong, dienTich, chuVi;
    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%d", &chieuDai);
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%d", &chieuRong);
    dienTich = chieuDai * chieuRong;
    chuVi = 2 * (chieuDai + chieuRong);
    printf("Dien tich cua hinh chu nhat: %d\n", dienTich);
    printf("Chu vi cua hinh chu nhat: %d\n", chuVi);

    return 0;
}