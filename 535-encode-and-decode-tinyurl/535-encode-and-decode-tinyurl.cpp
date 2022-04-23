class Solution {
public:
    
    map<string,string> mp;
    int s=0;
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string en="http://tinyurl.com/"+to_string(s);
        s++;
        mp[en]=longUrl;
        return en;
        // return longUrl;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
        // return shortUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));