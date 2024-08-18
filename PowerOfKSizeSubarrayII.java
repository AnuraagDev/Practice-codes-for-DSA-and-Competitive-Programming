class Solution {
    public int[] resultsArray(int[] inputArray, int windowSize) {
        int length = inputArray.length;
        int[] resultArray = new int[length - windowSize + 1];
        int resultIndex = 0;
        int startIndex = 0;
        boolean consecutiveCheck = true;

        for (int endIndex = 0; endIndex < length; endIndex++) {
            if (endIndex > startIndex) {
                if (inputArray[endIndex] != inputArray[endIndex - 1] + 1) {
                    consecutiveCheck = false;
                }
            }
            if (endIndex - startIndex + 1 == windowSize) {
                if (consecutiveCheck) {
                    resultArray[resultIndex] = inputArray[endIndex];
                } else {
                    resultArray[resultIndex] = -1;
                }
                resultIndex++;

                if (endIndex - startIndex + 1 == windowSize) {
                    if (startIndex + 1 < length && inputArray[startIndex] + 1 != inputArray[startIndex + 1]) {
                        consecutiveCheck = true; 
                        for (int i = startIndex + 1; i < endIndex; i++) {
                            if (inputArray[i] + 1 != inputArray[i + 1]) {
                                consecutiveCheck = false;
                                break;
                            }
                        }
                    }
                    startIndex++;
                }
            }
        }
        return resultArray;
    }
}
