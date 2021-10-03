import java.util.*;

class Trie {

  private static class TrieNode {
    boolean isWord;
    char val;
    Map<Character, TrieNode> children = new HashMap<>(26);

    TrieNode(char val) {
      this.val = val;
    }
  }

  private final TrieNode root;

  public Trie() {
    root = new TrieNode('#');
  }

  public void insert(String word) {
    var node = root;

    for (var i = 0; i < word.length(); i++) {
      var key = word.charAt(i);
      node = node.children.computeIfAbsent(word.charAt(i), k -> new TrieNode(key));
    }

    node.isWord = true;
  }

  public boolean search(String word) {
    return search(word, false);
  }

  public boolean startsWith(String prefix) {
    return search(prefix, true);
  }

  private boolean search(String word, boolean isPrefix) {
    var node = root;

    for (var i = 0; i < word.length(); i++) {
      var key = word.charAt(i);
      if (!node.children.containsKey(key)) return false;
      node = node.children.get(key);
    }
    return isPrefix || node.isWord;
  }
}
