void sumstore(long x, long y, long *dest);

int main() {
    long x=42, y=11;
    long z;
    sumstore(x, y, &z);
    return 0;
}
