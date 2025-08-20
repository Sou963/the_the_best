class noname{
  int n=0;
}

class name extends noname{
  int n =10;
  display(){
  print(super.n);
  }
}

main(){
  name s=new name();
  s.display();
}