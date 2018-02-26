#include <iostream>
#include <string>
#include <new>

using namespace std;
void distinctNumbers(int input[], int check[], int numNums);

int main()
{
	int input[10000];
	int numbers=0,i=0;
	do
	{
		cin >> input[i];
		numbers++;
		i++;
		
	}while(input[i-1]>0);
	
	int *check = new int[numbers];
	
	for(int k=0;k<numbers;k++)
	{
		check[k] = 0;
	}

	distinctNumbers(input,check,numbers);
	
	
}

void distinctNumbers(int input[], int check[], int numNums)

{

  for(int i=0; i<numNums; i++)
  {
          if((input[i] == input[i+1]) )

              check[i+1] = 1;

  }


  for(int i=0; i<numNums; i++)

    {

      if(check[i] == 0)

      {
          cout<< input[i] << " ";

      }

  }


}

