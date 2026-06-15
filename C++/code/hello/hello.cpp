/*#include <iostream>

class Score{
  public:
    int math;
    int english;

    Score(int m=4, int e=5): math(m), english(e)
    {
      std::cout << "1" << '\n';
    }

    ~Score()
    {
      std::cout << "6" << '\n';
    }
};

int main()
{
  Score S1(2,3);
  std::cout << S1.math << "\n"
  << S1.english << "\n";


  if(1)
  {
    Score S2;
    std::cout << S2.math << "\n"
              << S2.english << "\n";
  }
  std::cout << "7" << '\n';
  return 0;
}


#include <iostream>

using std::cout;

class Node {
  public:
    int data;
    Node* next;

  public:
    Node(int data=0, Node* next=nullptr): data(data), next(next)
    {
      cout << "Node init Finish" << '\n';
    }
};

class List{
  private:
    Node *head;

  public:
    List(Node* head=nullptr): head(head)
    {
      cout << "List init Finish" << '\n';
    }
    ~List()
    {
      Node *cur = head;
      while(cur)
      {
        Node *tmp = cur;
        cur = cur->next;
        delete tmp;
      }
      cout << "List delete Finish" << '\n';
    }

    void push_head(int val){
      Node *new_node = new Node(val);
      new_node->next = head;
      head = new_node;
    }

    void print() const {
      Node *cur = head;
      while(cur)
      {
        if(cur->next)
        {
          cout << "node ptr: " << cur << '\n'
               << "node val: " << cur->data << '\n'
               << "node next ptr: " << cur->next << '\n';
          cur = cur->next;
        }
        else if(cur->next == nullptr)
        {
          cout << "node ptr: " << cur << '\n'
               << "node val: " << cur->data << '\n'
               << "is List end" << '\n';
          break;
        }
      }
    }
    void input_val(){
      int val;
      cout << "pliace enter the num: " << '\n';
      while(std::cin >> val)
      {
        push_head(val);
      }
      std::cin.clear();
    }
};

int main()
{
  List l1;
  l1.push_head(10);
  List l2 = l1;
  l1.print();
  l2.print();
  return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
public:
  char *data;
  int length;

  Mystring(const char *str)
  {
    length = strlen(str);
    data = new char[length + 1];
    strcpy(data, str);
    cout << "YiGouJian" << '\n';
  }

  ~Mystring()
  {
    delete[] data;
    cout << "YiShanChu" << '\n';
  }
};

int main()
{
  Mystring a("hello");
  Mystring b = a;
  cout << a.data << endl;
  cout << b.data << endl;
  return 0;
}

#include<iostream>

class Fac{
  public:
    Fac(int n) : number(n) {
      std::cout << "GouJian ChengGong" << n << '\n';
    }

    long long compute() const {
      return fac(number);
    }

    int get_Num() const {
      return number;
    }

  private:
    long long fac(int n) const {
      if(n<=1)
      {
        return 1;
      }
      return n * fac(n - 1);
    }

    int number;
};

int main()
{
  Fac fact(5);
  long long result = fact.compute();
  std::cout << fact.get_Num() << "! = " << result << std::endl;
  return 0;
}
*/


