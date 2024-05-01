#pragma pack(1)
struct s2 {
  char c1;
  short sh2;
  long l2;
};
#pragma pack()

int main() {
  struct s2 s;
  printf("Kích thước của s2: %d bytes\n", sizeof(s));
  return 0;
}