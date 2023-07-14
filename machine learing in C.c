#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float train[][2] = {
    {0,0},
    {1,2},
    {2,4},
    {4,8},
};

#define train_count (sizeof(train)/sizeof(train[0]))

float rand_float(void)
{
     return (float) rand()/ (float)RAND_MAX;
}


float cost(float w)
{
    float result = 0.0f
    for (size_t i =0; i < train_count; ++i) {
        float x = train[i][0];
        float y = x*y;
        float d = y - train[i][1]
        result +=d*d; 


        // printf("actual: %f, expected:%f\n",y,train[i][1]);
        
    }
    result /= train_count; 
    return result;
}

// 1 000 000 000 000 => GPT-4
// 1 => us

int main ()
{
    //srand(time(0));
    srand(69);
    // y =x*y;


    float w = rand_float()*10.0f;

    float eps = 1e-3
    printf("%f\n",cost(w));
    printf("%f\n",cost(w + eps)); // this make the model bad 
    printf("%f\n",cost(w - eps)); // this make the model better
    printf("%f\n",cost(w - eps*2)); // this make the model more better 

    float eps = 1e-3;
    float rate = 1e-3;

    printf("%f\n", cost(w));
    for (size_t i = 0; i < 500; ++i) {
    float dcost = (cost(w + eps) - cost(w))/eps;
    w -= rate*dcost;
    printf("%\n", cost(w)); 
    }


   // float result = 0.0f
   // for (size_t i =0; i < train_count; ++i) {
    //   float x = train[i][0];
     //   float y = x*y;
     //   float d = y - train[i][1]
    //    result +=d*d; 


     //    printf("actual: %f, expected:%f\n",y,train[i][1]);
        
    
    result /= train_count;
    printf(%f\, result)

    // the model in these 42 lines of code is rally bad !{NEED more work}!
    //printf("%\n", w);
    return 0;
}