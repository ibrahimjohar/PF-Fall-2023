/*
*   Programmer: Ibrahim Johar Farooqi
*   Date: 22 November 2023
*   Description: You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height.
                The height of the tunnel is 41 feet, and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height.
                Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
*/

#include <stdio.h>

// Define the structure for a box
struct Box {
    int length;
    int width;
    int height;
};

// Function to calculate the volume of a box
int calculateVolume(struct Box b) {
    return b.length * b.width * b.height;
}

int main() {
    int n; // Number of boxes
    scanf("%d", &n);

    struct Box boxes[n]; // Array to store the boxes

    // Input the details of each box
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    // Height of the tunnel
    int tunnelHeight = 41;

    // Check each box and print the volume if it can be transported
    for (i = 0; i < n; i++) {
        if (boxes[i].height < tunnelHeight) {
            int volume = calculateVolume(boxes[i]);
            printf("%d\n", volume);
        }
    }

    return 0;
}
