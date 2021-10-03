import java.util.*;

class LRUCache {

  class Node {

    int key;
    int val;
    Node next;
    Node prev;

    Node(int key, int val) {
      this.key = key;
      this.val = val;
    }
  }

  private Map<Integer, Node> map;

  private int capacity;

  private Node head;

  private Node last;

  public LRUCache(int capacity) {
    map = new HashMap<>();
    this.capacity = capacity;
    this.head = new Node(0, 0);
    this.last = new Node(0, 0);
    head.next = last;
    last.prev = head;
  }

  public int get(int key) {
    Node node = map.get(key);
    if (node == null) {
      return -1;
    }
    remove(node);
    insert(node);
    return node.val;
  }

  public void put(int key, int value) {
    if (map.containsKey(key)) {
      remove(map.get(key));
    }

    if (map.size() == capacity) {
      remove(last.prev);
    }

    insert(new Node(key, value));
  }

  private void remove(Node node) {
    map.remove(node.key);
    node.prev.next = node.next;
    node.next.prev = node.prev;
  }

  private void insert(Node node) {
    map.put(node.key, node);
    node.next = head.next;
    node.prev = head;
    head.next.prev = node;
    head.next = node;
  }
}
