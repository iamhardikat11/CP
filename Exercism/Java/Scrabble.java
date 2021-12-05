class Scrabble {
   String word = "";
    Scrabble(String word) {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        this.word = word;
    }

    int getScore() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        int count = 0;
        int arr[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
        word = word.toUpperCase();
        for(int i=0;i<word.length();i++)
            count+=arr[(int)(word.charAt(i)-'A')];
        return count;
    }

}
