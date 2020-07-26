#include <iostream>
#include <string.h>

using namespace std;

/** Question "a"
 *
 * Insert 5 elements into a 1-dimensional array, print the elements and
   find the largest and smallest element in the array.
 *
 */


int insertAndPrintSmallestAndLargestValuesInArray(){

    int Arr[100],n,i,small,large;



	cout<<"Enter number of elements you want to insert ";

	cin>>n;



	for(i=0;i<n;i++){

		cout<<"Enter element "<<i+1<<":";

		cin>>Arr[i];

	}



	small=Arr[0];

	large=Arr[0];



	for(i=1;i<n;i++){

		if(Arr[i]<small)

			small=Arr[i];

		if(Arr[i]>large)

			large=Arr[i];

	}



	cout<<"\nLargest element is :"<<large;

	cout<<"\nSmallest element is :"<<small;



	return 0;

}



/** Question "b"
 *
 * Insert elements into a 1-dimensional array and reverse the elements
 *
 */





int reverseElementsInsertedInArray(){

    int Arr[100],n,temp,i,j;

	cout<<"Enter number of elements you want to insert ";

	cin>>n;



	for(i=0;i<n;i++){

		cout<<"Enter element "<<i+1<<":";

		cin>>Arr[i];

	}



	for(i=0,j=n-1;i<n/2;i++,j--){

		temp=Arr[i];


		Arr[i]=Arr[j];

		Arr[j]=temp;

	}



	cout<<"\nReverse array"<<endl;



	for(i=0;i<n;i++)

		cout<<Arr[i]<<" ";



	return 0;

}


/** Question "c"
 *
 * Access an element in a 2-dimensional array.
 */



int accessingElementsIn2dimesionalArray(){

    // an array with 3 rows and 2 columns is a 2 dimensional Array
    int x[3][2] = {{0,1}, {2,3}, {4,5}};

    // output each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++){
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

    return 0;

}

/** Question "d"
 *
 * Perform addition and multiplication of two 3 X 3 matrices
 *
 */


int multiplying3x3matrice(){

    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int results[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            for (int u = 0; u < 3; u++)
            results[i][j] += matrix1[i][u] * matrix2[u][j];
        }

        cout << endl << "Output Matrix: " << endl;

        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << results[i][j] << ".";
        }
        cout << endl;
        }


}



int additionOf3x3Matrices(){
    int row = 3, col =3, m1[10][10], m2[10][10], sum[10][10];


   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of second matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"Output: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }

   return 0;



}



int isPalindromeString(){


    char text[100];
	char temp;
	int isPalindrome = 1;

	cout << "Enter a word: ";
	cin >> text;

	int length = strlen(text); //length of the text

	for(int i=0; i<length; i++){

		if(text[0+i] == text[(length-1)-i]){
			//swap characters
			temp = text[0+i];
			text[0+i] = text[(length-1)-i];
			text[(length-1)-i] = temp;
		}
		else{
			isPalindrome = 0; //string is not a palindrome
			break;
		}
	}

	if(isPalindrome == 0)
		cout << text << " is not a Palindrome String" << endl;
	if(isPalindrome == 1)
		cout << text << " is a Palindrome String." << endl;

	return 0;

}












