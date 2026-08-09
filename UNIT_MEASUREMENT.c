#include<stdio.h>
int main(){
    char input;
    float Km_to_inches = 39370.1;
    float km_to_feet = 3280.84;
    float km_to_meters = 1000;
    float pounds_to_kgs = 0.453592;
    float inches_to_foot = 0.0833333;
    float inches_to_meters = 0.0254;
    int first,second;

    printf("=======UNIT MEASUREMENT CONVERTER=======\n");

    while(1){
        printf("Enter the input charactor :   q. to quit\n  1. Km to inches\n  2. Km to feet\n  3. Km to meters\n  4. Pounds to kgs\n  5. Inches to foot\n  6. Inches to meters\n");
        scanf("%c", &input);

        printf("Enter the quantity as your first unit :  ");
        scanf("%d", &first);

        switch(input)
        {
            case 'q':
            printf("Quitting this programme.....\n");
            goto end;
            break;

            case'1':
            second = first * Km_to_inches;
            printf("%d KILOMETERS = %d INCHES\n", first, second);
            break;

            case'2':
            second = first * km_to_feet;
            printf("%d KILOMETERS = %d FEET\n", first, second);
            break;

            case'3':
            second = first * km_to_meters;
            printf("%d KILOMETERS = %d METERS\n", first, second);
            break;

            case'4':
            second = first * pounds_to_kgs;
            printf("%d POUNDS = %d KGS\n", first, second);
            break;

            case'5':
            second = first * inches_to_foot;
            printf("%d INCHES = %d FEET\n", first, second);
            break;

            case'6':
            second = first * inches_to_meters;
            printf("%d INCHES = %d METERS\n", first, second);
            break;

            default:
            printf("Invalid input\n");
            break;

            
        }
      
        
    }
    end:
    

    return 0;
}
