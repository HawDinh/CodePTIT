package TH2.b3;

class WordSet {

    public TreeSet<String> set;

    public WordSet(String s) {
        String[] words = s.toLowerCase().split("\\s+");
        set = new TreeSet<>(Arrays.asList(words));
    }

    public String union(WordSet other) {
        TreeSet<String> uniSet = (TreeSet<String>) set.clone();
        uniSet.addAll(other.set);
        return String.join(" ", uniSet);
    }

    public String intersection(WordSet other) {
        TreeSet<String> interSet = (TreeSet<String>) set.clone();
        interSet.retainAll(other.set);
        return String.join(" ", interSet);
    }
}
