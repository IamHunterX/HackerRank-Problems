int countingValleys(int steps, string path) {
    int start = 0,valleys = 0;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            start++;
            if (start == 0) {
                valleys++;
            }
        }
        else if (path[i] == 'D') {
            start--;
        }
    }
    return valleys;
}
