#include<iostream>
#include<time.h>

using namespace std;

void najpogostejseStevilo(int nums[], int size)
{
    int max_count = 0;
    for (int i=0; i<size; i++){
        int count=1;
        for (int j=i+1;j<size;j++) {
            if (nums[i] == nums[j]){
                count++;
            }
        }
        if (count>max_count){
            max_count = count;
        }
    }

    for (int i=0;i<size;i++)
    {
        int count=1;
        for (int j=i+1;j<size;j++){
            if (nums[i]==nums[j]){
                count++;
            }
        }
        if (count==max_count){
            cout << "Najpogostejse stevilo: " << nums[i]<< endl;
            break;
        }
    }
}

int main()
{
    int nums[10];

    srand(time(NULL));

    for (int i = 0; i < 10; ++i) {
        nums[i] = rand()%10+1;
        cout << nums[i] <<" ";
    }
    cout << " " << endl;
    int n = sizeof(nums)/sizeof(nums[0]);

    najpogostejseStevilo(nums, n);
}