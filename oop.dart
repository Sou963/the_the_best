class parents{
  parents(){
    print("This is parents class.");
  }
}
class child extends parents{
  child(){
    print("This is childclass.");
  }
  display(){
    print("Display value");
  }
}
main(){
  child m= new child();
  m.display();
}