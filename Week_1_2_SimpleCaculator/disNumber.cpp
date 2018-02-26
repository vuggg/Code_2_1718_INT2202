#include<iostream>



using namespace std;





void readArray(int input[], int numbers);

int displayDistinctNumbers(int input[], int check[], int numNums);





int main()
{


  int input[10000],i=0,count=0;

  int check[10000] = { 0 }; // set all to 0

  do
	{
		cin >> input[i];
		count++;
	}while(input[i]>0);
    
   int numbers = count;

  int nUnique = displayDistinctNumbers(input, check, numbers);

  cout << endl;

  if( nUnique == 1 )

      cout << nUnique;

  else

      cout << nUnique;

  return 0;

}

int displayDistinctNumbers(int input[], int check[], int numNums)
{



  for(int i=0; i<numNums; i++)

      for(int j=i+1; j<numNums; j++)

          if( (check[i] == 0) && (input[i] == input[j]) )

              check[j] = 1;

           

  int  nUnique = 0;

  for(int i=0; i<numNums; i++)

  {

      if(check[i] == 0)

      {

          ++nUnique;

          cout<<"Unique number(" << nUnique <<") = "<<input[i] << endl;

      }

  }

  return nUnique;

}

