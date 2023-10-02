#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

//Задание 1
/*int main()
{
    setlocale(0,"RU");
    srand(time(0));

    int size;
    cout << "Введите длину динамического массива:";
    cin >> size;

    int* arr = new int[size];
    int elements = 5;

    int N_size = elements + size;
    int* N_arr = new int[N_size];

    for(int i = 0;i < size;i++)
      arr[i] = i + 1;

    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";

    for (int i = 0; i < size; i++)
      N_arr[i] = arr[i];

    for (int i = size; i < N_size; i++)
      N_arr[i] = rand() % 100;
    arr = N_arr;
    size = N_size;

    cout << "\n";
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
}*/





//Задание 2
/*void Func(int*& arr, int& S, int els)
{
    int newSize = S + els;
    int* newArray = new int[newSize];

    for (int i = 0; i < S; i++)
      newArray[i] = arr[i];


    for (int i = S; i < newSize; i++)
      newArray[i] = rand() % 100;

    arr = newArray;
    S = newSize;
}

int main()
{
    setlocale(0, "RU");
    srand(time(0));

    int size;
    cout << "Введите длину динамического массива:";
    cin >> size;

    int* list = new int[size];
    int elements = 5;

    for (int i = 0; i < size; i++)
      list[i] = i + 1;

    for (int i = 0; i < size; i++)
      cout << list[i] << " ";
    cout << "\n";

    Func(list, size, elements);

    for (int i = 0; i < size; i++)
      cout << list[i] << " ";
}*/



//Задание 3
/*int main()
{
    setlocale(0, "RU");
    srand(time(0));

    int F_size;
    int S_size;
    int T_size = 0;
    bool Duplicate = false;
    
    cout << "Введите длину первого массива:";
    cin >> F_size;
    
    cout << "\n";
    
    cout << "Введите длину второго массива:";
    cin >> S_size;

    int F_list[F_size];
    int S_list[S_size];
    int* T_list = new int[T_size];

    for (int i = 0; i < F_size; i++)
      F_list[i] = rand() % 30;
    for (int i = 0; i <  F_size; i++)
      cout << F_list[i] << " ";
    
    cout << "\n";
    
    for (int i = 0; i < S_size; i++)
      S_list[i] = rand() % 30;
    for (int i = 0; i <  S_size; i++)
      cout << S_list[i] << " ";
  
    cout << "\n";
    
    for (int i = 0; i < F_size; i++) 
    {
     for (int j = 0; j < S_size; j++) 
     {
      
       if (F_list[i] == S_list[j]) 
       {
        for (int l = 0; l < T_size; l++) 
        {
          if (T_list[l] == F_list[i]) 
          {
            Duplicate = true;
            break;
          }
         }
       if (!Duplicate) 
        {
         T_list[T_size] = F_list[i];
         T_size++;
        }
       }
      }
     }
     for (int i = 0; i < T_size; i++) 
       cout << T_list[i] << " ";
}*/












