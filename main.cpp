#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

void questao1();
void questao2();
void questao5();
void fibonacci(int n, vector<int> *fib_result, int a, int b);
int confere_Fib();

int main()
{

   questao1();
   questao2();
   questao5();

   return 0;
}
void questao1()
{
   // Questão 1
   int indice = 13, soma = 0, k = 0;
   while (k < indice)
   {
      k++;
      soma += k;
   }

   cout << "Soma sera: " << soma << endl
        << endl;
}

void questao2()
{
   // Questão 2
   auto fib_result = new vector<int>();
   fib_result->push_back(0);
   fib_result->push_back(1);

   int n = confere_Fib();

   if (n == 0 || n == 1)
   {
      cout << "O valor de n esta na sequencia de Fibonacci" << endl << endl;
   }

   fibonacci(n, fib_result, fib_result->at(0), fib_result->at(1));
}

void questao5()
{

   string str = "vou inverter essa string";
   string str_invertida = "";

   for (int i = str.size() - 1; i >= 0; i--)
   {
      str_invertida += str[i];
   }

   cout << "String original: " << str << endl;

   cout << "String invertida: " << str_invertida << endl;
}

void fibonacci(int n, vector<int> *fib_result, int a, int b)
{
   if (fib_result->at(fib_result->size() - 1) == n)
   {
      cout << "O valor: " << n << " esta na sequencia de Fibonacci" << endl << endl;
      return;
   }
   else if (fib_result->at(fib_result->size() - 1) > n)
   {
      cout << "O valor: " << n << " nao esta na sequencia de Fibonacci" << endl << endl;
      return;
   }
   else
   {
      fib_result->empty();
      fib_result->push_back(a);
      fib_result->push_back(a + b);
      fibonacci(n, fib_result, b, fib_result->at(fib_result->size() - 1));
   }
}

int confere_Fib()
{
   int n;
   cout << "Digite o valor de n: " << endl;
   cin >> n;
   if (n < 0)
   {
      cout << "O valor deve ser positivo" << endl << endl;
      return confere_Fib();
   }

   return n;
}