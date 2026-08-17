#include <stdio.h>

#define WIDTH 1440
#define HEIGHT 1080
#define ROW_BYTES (WIDTH * 3)

int main(void)
{
    FILE *in = fopen("fly-me-to-the-moon.tiff", "rb");
    FILE *out = fopen("flipped.tiff", "wb");

    unsigned char header[8];
    fread(header, 1, 8, in);
    fwrite(header, 1, 8, out);

    unsigned char row[ROW_BYTES];

    for (int y = 0; y < HEIGHT; y++)
    {
        fread(row, 1, ROW_BYTES, in);

        for (int x = 0; x < WIDTH / 2; x++)
        {
            int left = x * 3;
            int right = (WIDTH - 1 - x) * 3;

            unsigned char temp;

            temp = row[left];
            row[left] = row[right];
            row[right] = temp;

            temp = row[left + 1];
            row[left + 1] = row[right + 1];
            row[right + 1] = temp;

            temp = row[left + 2];
            row[left + 2] = row[right + 2];
            row[right + 2] = temp;
        }

        fwrite(row, 1, ROW_BYTES, out);
    }

    unsigned char byte;
    while (fread(&byte, 1, 1, in) == 1)
    {
        fwrite(&byte, 1, 1, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
