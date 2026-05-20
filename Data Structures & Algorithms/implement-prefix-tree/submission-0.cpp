struct TrieNode{
   TrieNode* children[26];
   bool endofWord;

   TrieNode(){
    for(int i = 0;i<26;i++){
        children[i] = nullptr;
    }
    endofWord = false;
   }
};


class PrefixTree {
private:
    TrieNode* root;
public:
    PrefixTree() {
        root = new TrieNode();
    }
    
    
    void insert(string word) {
        // word exists / does not exist -> end of word flag
        TrieNode* node = root; 
        for(int i =0;i<word.size();i++){
            int index = word[i]-'a';
            if(!node->children[index]){
                node->children[index] = new TrieNode();
            }
            node = node->children[index]; 
        }
        node->endofWord = true;
        
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(int i = 0;i<word.size();i++){
            int index = word[i] - 'a';
            if(!node->children[index]){
                return false;
            }
            node = node->children[index];
        }
        return node->endofWord;        
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(int i = 0;i<prefix.size();i++){
            int index = prefix[i]-'a';
            if(!node->children[index]){
                return false;
            }
            node = node->children[index];
        }
        return true;
    }
};
