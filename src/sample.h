#include <stdio.h>

typedef struct {
    unsigned long long retiredInstructions;
    unsigned long long cycles;
    unsigned long long retiredMemoryInstructions;
    unsigned long long dataCacheMisses;
    unsigned long long dataCacheBusyEvents;
    unsigned long long time;
} Sample;

void configureEvents();
void beginSample(Sample *sample);
void endSample(Sample *sample);
void printSamples(FILE *fd, unsigned int sampleCount, Sample *samples);
