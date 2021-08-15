int main()
{
    float length, width, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    // Calculate perimeter of rectangle //
    perimeter = 2 * (length + width);
    printf("Perimeter of rectangle = %f", perimeter);

    return 0;
}
