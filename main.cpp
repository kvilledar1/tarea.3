#include <iostream>
using namespace std;

/*int main() {
    int array_num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int suma = 0;

    for(int i=0; i<10; i++) {
        suma += array_num[i];
    }


    cout << "La suma de los  del array es: " << suma;

    return 0;
}
/*
int main(){
    int nums[6],n,mayor=0;
    cout<<"digite el numero de elementos: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". ingrese un numero: "<<endl;
        cin>>nums[i];

        if(nums[i]>mayor){
            mayor=nums[i];
        }
    }
    cout<<"el num mayor es:"<<mayor<<endl;
    return 0;
}
int main(){
    int n, i, VA,nums[8];
    cout<<"ingrese numero de elementos: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<". Digite un numero: "<<endl;
        cin>>nums[i];
    }
    cout<< "ASCENDENTE"<<endl;
    for( i=0;i<n;i++){
        cout<<"elementos "<<i+1<<" : "<<nums[i]<< endl;
    }
    for( i=0;i<n/2;i++){
        VA =  nums[i];
        nums[i]=nums[n-1-i];
        nums[n-1-i]=VA;
    }
    cout<< "DESCENDENTE"<<endl;
    for( i=0;i<n;i++){
        cout<<"elementos "<<i+1<<" : "<<nums[i]<< endl;
    }
    return 0;
}
int main(){
    int num [10] = { 6, 8, 7, 4, 1, 4, 4, 7,5,3};

    int i,suma = 0;
    for( i=0;i<10;i++){
        cout<<"numero "<<i+1<<" es: "<<num[i]<< endl;
    }
    for (int i=0;i<10;i++)
        suma += num[i];
    cout<<"las suma es: " << sum <<endl;

    return 0;
}
