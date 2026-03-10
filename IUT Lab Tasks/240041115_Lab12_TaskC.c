#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Contact
{
    char name[100];
    char email[100];
    char phone[30];
};

void normalizeContact(struct Contact *c)
{
    if ((*c).name[0])
        (*c).name[0] = toupper((*c).name[0]);
    for (int i = 1; (*c).name[i]; i++)
        (*c).name[i] = tolower((*c).name[i]);
    for (int j = 0; (*c).email[j]; j++)
        (*c).email[j] = tolower((*c).email[j]);
}

void displayContact(struct Contact c)
{
    printf("Name: %s, Email: %s, Phone: %s\n", c.name, c.email, c.phone);
}

char *getPhoneByName(struct Contact contacts[], int n, char name[])
{
    for (int i = 0; i<n; i++)
    {
        if (!strcmp(contacts[i].name, name))
            return contacts[i].phone;
    }
    return NULL;
}

int main(int argc, char* argv[])
{
    int count = atoi(argv[1]);
    int req_args = 3 + count * 3;
    if (argc != req_args)
    {
        printf("Invalid command\n");
        return 0;
    }

    struct Contact contacts[count];

    int i = 2;
    for (int j = 0; j < count; j++)
    {
        strcpy(contacts[j].name, argv[i]);
        strcpy(contacts[j].email, argv[i+1]);
        strcpy(contacts[j].phone, argv[i+2]);
        normalizeContact(&contacts[j]);

        i+=3;
    }
    for (int k = 0; k < count; k++)
        displayContact(contacts[k]);

    char searchName[100];
    strcpy(searchName, argv[argc-1]);
    if (searchName[0])
        searchName[0] = toupper(searchName[0]);
    for (int m = 1; searchName[m]; m++)
        searchName[m] = tolower(searchName[m]);

    char *phone = getPhoneByName(contacts, count, searchName);
    if (phone)
        printf("Phone: %s\n", phone);
    else
        printf("Phone: Not found\n");

    return 0;
}
