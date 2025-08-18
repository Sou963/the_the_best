void main() {
  int s = fact(5);
  print("The factriol is= $s");
}

int fact(int n) {
  if (n > 1) {
    return n * fact(n - 1);
  } else {
    return 1;
  }
}
