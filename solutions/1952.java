class Solution {

    public boolean isThree(int n) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                count++;
            if (count == 2)
                return false;
        }
        if (count == 1)
            return true;
        return false;
    }
}

  public boolean isThree(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
      if (n % i == 0) count++;
      if (count == 2) return false;
    }
    if (count == 1) return true;
    return false;
  }
}

