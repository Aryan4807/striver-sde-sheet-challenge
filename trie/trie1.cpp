class Trie {
  public:
    struct Node{
      Node* links[26]={nullptr};
      bool flag;
      bool containskey(char ch){
          return links[ch-'a']!=nullptr;
      }
      void put(char ch,Node* word){
          links[ch-'a']=word;
      }
      Node* get(char ch){
          return links[ch-'a'];
      }
      void setend(){
          flag=true;
      }
      bool isend(){
          return flag;
      }
    };
    Node* root;
    Trie() {
        // implement Trie
        
        root=new Node();
    }

    void insert(string &word) {
        // insert word into Trie
        Node* roo=root;
        for(int i=0;i<word.length();i++){
            if(!roo->containskey(word[i])){
            roo->put(word[i],new Node());
            }
            roo=roo->get(word[i]);
        }
        roo->setend();
    }

    bool search(string &word) {
        // search word in the Trie
        int i;
        Node* roo=root;
        for(i=0;i<word.length();i++){
            if(!roo->containskey(word[i])){
                return false;
            }
            roo=roo->get(word[i]);
        }
        return roo->isend();
    }

    bool isPrefix(string &word) {
        // search prefix word in the Trie
        Node* roo=root;
         for(int i=0;i<word.length();i++){
            if(!roo->containskey(word[i])){
                return false;
            }
            roo=roo->get(word[i]);
        }
        return true;
    }
};
