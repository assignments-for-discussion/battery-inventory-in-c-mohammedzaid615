#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  int a=0, b=0, c=0;
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  for(int i=0;i<numberOfBatteries;i++){
    if(chargeCycleCounts[i]>0 && chargeCycleCounts[i]<=400){
       a++;
    }
    else if(chargeCycleCounts[i]>400 && chargeCycleCounts[i]<600){
       b++;
    }
    else 
      c++;
  }
  printf("Low battery count = %d", a);
  printf("Medium battery count = %d", b);
  printf("High battery count = %d", c);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
