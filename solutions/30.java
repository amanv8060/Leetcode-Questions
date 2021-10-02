public class SubstringWithConcatenationOfAllWords {

    public List<Integer> findSubstring(String s, String[] words) {
        // Resultant list
        List<Integer> indices = new ArrayList<>();
        // Base conditions
        if (s == null || s.isEmpty() || words == null || words.length == 0) {
            return indices;
        }
        // Store the words and their counts in a hash map
        Map<String, Integer> wordCount = new HashMap<>();
        for (String word : words) {
            wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
        }
        // Length of each word in the words array`
        int wordLength = words[0].length();
        // Length of all the words combined in the array
        int wordArrayLength = wordLength * words.length;
        // Loop for the entire string
        for (int i = 0; i <= s.length() - wordArrayLength; i++) {
            // Get the substring of length equal to wordArrayLength
            String current = s.substring(i, i + wordArrayLength);
            // Map to store each word of the substring
            Map<String, Integer> wordMap = new HashMap<>();
            // Index to loop through the words array
            int index = 0;
            // Index to get each word in the current
            int j = 0;
            // Loop through each word of the words array
            while (index < words.length) {
                // Divide the current string into strings of length of
                // each word in the array
                String part = current.substring(j, j + wordLength);
                // Put this string into the wordMap
                wordMap.put(part, wordMap.getOrDefault(part, 0) + 1);
                // Update j and index
                j += wordLength;
                index++;
            }
            // At this point compare the maps
            if (wordCount.equals(wordMap)) {
                indices.add(i);
            }
        }
        return indices;
    }
}
