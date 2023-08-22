#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Segment;

int compareSegments(const void *a, const void *b) {
    return ((Segment *)a)->end - ((Segment *)b)->end;
}

void findMinPoints(Segment segments[], int n) {
    qsort(segments, n, sizeof(Segment), compareSegments);
    int points[n];
    int pointCount = 0;
    int currentPoint = segments[0].end;
    points[pointCount++] = currentPoint;
    for (int i = 1; i < n; i++) {
        if (currentPoint < segments[i].start) {
            currentPoint = segments[i].end;
            points[pointCount++] = currentPoint;
        }
    }
    printf("%d\n", pointCount);
    for (int i = 0; i < pointCount; i++) {
        printf("%d ", points[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Segment segments[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &segments[i].start, &segments[i].end);
    }
    findMinPoints(segments, n);
    return 0;
}
