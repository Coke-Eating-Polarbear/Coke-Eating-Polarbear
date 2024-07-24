#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int count=0;
    int max=-20;
    for(int i =0;i<array_len;i++)
    {
        for(int j=i;j<array_len;j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
            
        }
        if(max == count)
            answer = -1;
        else if(max<count)
        {
            max = count;
            answer = array[i];
        }
        count = 0;
        
    }
    return answer;
}