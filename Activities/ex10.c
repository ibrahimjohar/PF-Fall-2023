/*Parking management system*/

//car types: large, medium, small
//large parking space for: (small, medium & large)cars
//medium parking space for: (small & medium)cars
//small parking space for; (small)cars only.

#include <stdio.h>

int main()
{
    int nCars, l_ps, m_ps, s_ps; 
    char carType; 

    printf("Enter number of total cars: ");
    scanf("%d", &nCars);

    printf("Enter number of large parking space: ");
    scanf("%d", &l_ps);
    printf("Enter number of medium parking space: ");
    scanf("%d", &m_ps);
    printf("Enter number of small parking space: ");
    scanf("%d", &s_ps);

    int feedbackScore = 0, occ_Lsp = 0, occ_Msp = 0, occ_Ssp = 0;

    for (int i = 0; i<nCars; i++)
    {

        for (int j = 0; j<=1; j++)
        {
            printf("Please enter your car type, press [l] for large OR [m] for medium OR [s] for small : \n");
            scanf("%c", &carType);
            
            switch (carType)
            {
            case 'l':
                if (l_ps>0)
                {
                    printf("You can park your car in the large parking space!\n");
                    feedbackScore = feedbackScore + 5;
                    occ_Lsp++;
                    l_ps--;
                    j++;
                } 
                else 
                {
                    printf("We are sorry, you cannot park your car in this car park.\n");
                    feedbackScore = feedbackScore - 50;
                    j++;
                }
                break;
            case 'm':
                if (m_ps>0)
                {
                    printf("You can park your car in the medium parking space!\n");
                    feedbackScore = feedbackScore + 5;
                    occ_Msp++;
                    m_ps--;
                    j++;
                }
                else if(l_ps>0)
                {
                    printf("You can park your car in the large parking space!\n");
                    feedbackScore = feedbackScore + 10;
                    occ_Lsp++;
                    l_ps--;
                    j++;
                }
                else
                {
                    printf("We are sorry, you cannot park your car in this car park.\n");
                    feedbackScore = feedbackScore - 50;
                    j++;
                }
                break;
            case 's':
                if (s_ps>0)
                {
                    printf("You can park your car in the small parking space!\n");
                    feedbackScore = feedbackScore + 5;
                    occ_Ssp++;
                    s_ps--;
                    j++;
                }
                else if (m_ps>0)
                {
                    printf("You can park your car in the medium parking space!\n");
                    feedbackScore = feedbackScore + 10;
                    occ_Msp++;
                    m_ps--;     
                    j++;       
                }
                else if(l_ps>0)
                {
                    printf("You can park your car in the large parking space!\n");
                    feedbackScore = feedbackScore + 10;
                    occ_Lsp++;
                    l_ps--;
                    j++;
                }
                else
                {
                    printf("We are sorry, you cannot park your car in this car park.\n");
                    feedbackScore = feedbackScore - 50;
                    j++;
                }
                break;
            default:
                break;
        
            }
        }    
    }

    printf("The final feedback score is: %d\n", feedbackScore);
    printf("Total occupied large parking spaces: %d\n", occ_Lsp);
    printf("Total occupied medium parking spaces: %d\n", occ_Msp);
    printf("Total occupied small parking spaces: %d\n", occ_Ssp);

}