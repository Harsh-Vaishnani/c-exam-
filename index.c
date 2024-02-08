// QUE--1

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the Alphabet:- ");
//     scanf("%c", &ch);
//     switch (ch)
//     {
//     case 'a':
//     case 'A':
//     case 'e':
//     case 'E':
//     case 'i':
//     case 'I':
//     case 'o':
//     case 'O':
//     case 'u':
//     case 'U':
//     printf("%c this is vowel.",ch);
//     break;
//     default :{
//         printf("This is Consonat.");
//     }
//     return 0;
//     }
// }

// QUE--2

// #include <stdio.h>

// int main() {
//     int array[5]={5,10,15,20,25};
//     int size=sizeof(array)/sizeof(array[0]);
//     int large=array[0];
//     for (int i=1; i<size; i++) {
//         if (array[i]>large) {
//             large=array[i];
//         }
//     }
//     printf("Largest Number is: %d\n",large);
//     return 0;
// }

// QUE-3

#include <stdio.h>
void reverseString(char*str) {
    int length = 0;
    while (str[length]!='\0') {
        length++;
    }
    for (int i=0; i<length/2; i++) {
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reverse string is: %s",str);
    return 0;
}



// QUE-7

// #include <stdio.h>

// int main() {
//     int rows=5;
//     int i,j;

//     for (i=1; i<=rows; i++) {
//         for (j=1; j<=i; j++) {
//             if (i%2==0) {
//                 printf("%d",i*i);
//             } else {
//                 printf("%d",i);
//             }

//             if (j<i) {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


                                        // QUE-5

// #include <stdio.h>
// struct Car
// {
//     char model[50];
//     int year;
//     float price;
// };

// int main()
// {
//     int N;
//     printf("Enter the number of cars: ");
//     scanf("%d", &N);

//     struct Car cars[N];
//     for (int i = 0; i < N; i++)
//     {
//         printf("\nEnter details for Car %d:\n", i + 1);
//         printf("Model: ");
//         scanf("%s", cars[i].model);
//         printf("Year: ");
//         scanf("%d", &cars[i].year);
//         printf("Price: ");
//         scanf("%f", &cars[i].price);
//     }
//     printf("\nDetails of all cars:\n");
//     for (int i = 0; i < N; i++)
//     {
//         printf("\nCar %d:\n", i + 1);
//         printf("Model: %s\n", cars[i].model);
//         printf("Year: %d\n", cars[i].year);
//         printf("Price: %.2f\n", cars[i].price);
//     }

//     return 0;
// }