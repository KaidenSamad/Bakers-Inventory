#include <stdio.h>
#include <math.h>

int main() {

   int breadLoavesRemaining;
   scanf("%d", &breadLoavesRemaining);
   
   int croissantsRemaining;
   scanf("%d", &croissantsRemaining);
   
   int muffinsRemaining;
   scanf("%d", &muffinsRemaining);
   
   int cookiesRemaining;
   scanf("%d", &cookiesRemaining);
   
   printf("Enter the number of bread, croissants, muffins, and cookies remaining:\n%d %d %d %d\n", breadLoavesRemaining, croissantsRemaining, muffinsRemaining, cookiesRemaining); 
   
   int breadLoavesTotal;
   breadLoavesTotal = 150;
   int breadLoavesNeed;
   breadLoavesNeed = breadLoavesTotal - breadLoavesRemaining;
   
   int croissantsTotal;
   croissantsTotal = 200;
   int croissantsNeed;
   croissantsNeed = croissantsTotal - croissantsRemaining;
   
   int muffinsTotal;
   muffinsTotal = 300;
   int muffinsNeed;
   muffinsNeed = muffinsTotal - muffinsRemaining;
   
   int cookiesTotal;
   cookiesTotal = 500;
   int cookiesNeed;
   cookiesNeed = cookiesTotal - cookiesRemaining;
   
   printf("Need: %d bread loaves, %d croissants, %d muffins, and %d cookies\n", breadLoavesNeed, croissantsNeed, muffinsNeed, cookiesNeed);
  
   double allBreadLoaves;
   int breadLoavesDollars;
   int breadLoavesCents;
  
   allBreadLoaves = 2.50 * breadLoavesNeed;
   breadLoavesDollars = allBreadLoaves;
   breadLoavesCents = round(allBreadLoaves - breadLoavesDollars);
   
  
   double allCroissants;
   int croissantsDollars;
   int croissantsCents;
    
   allCroissants = 1.20 * croissantsNeed;
   croissantsDollars = allCroissants;
   croissantsCents = round(allCroissants - croissantsDollars);
   
   double allMuffins;
   int muffinsDollars;
   int muffinsCents;
    
   allMuffins = 0.80 * muffinsNeed;
   muffinsDollars = allMuffins;
   muffinsCents = round(allMuffins - muffinsDollars);
   
   double allCookies;
   int cookiesDollars;
   int cookiesCents;
     
   allCookies = 0.50 * cookiesNeed;
   cookiesDollars = allCookies;
   cookiesCents = round(allCookies - cookiesDollars);
   
   double total;
   int totalDollars;
   int totalCents;
   
   total = allBreadLoaves + allCroissants + allMuffins + allCookies;
   totalDollars = total;
   totalCents = round(100.000 * (total - totalDollars));
   printf("Cost: %d dollars and %d cents\n", totalDollars, totalCents);
   
   double avgBreadLoaves;
   avgBreadLoaves = breadLoavesNeed / 7.0;
   
   double avgCroissants;

   avgCroissants = croissantsNeed / 7.0;
   
   double avgMuffins;
   avgMuffins = muffinsNeed / 7.0;
   
   double avgCookies;
   avgCookies = cookiesNeed / 7.0;
   
   printf("Average sold: %.2lf bread loaves, %.2lf croissants, %.2lf muffins, and %.2lf cookies per day\n", avgBreadLoaves, avgCroissants, avgMuffins, avgCookies);
   

   return 0;
}
