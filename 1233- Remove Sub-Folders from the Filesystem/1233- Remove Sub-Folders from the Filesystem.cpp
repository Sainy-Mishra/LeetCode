class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set <string> st(folder.begin(), folder.end());
        vector<string> result;

        for(string currFolder: folder){
            bool found=false;
            string tempFolder=currFolder;

            while(!currFolder.empty()){
                int position=currFolder.find_last_of('/');
                currFolder=currFolder.substr(0,position);

                if(st.find(currFolder)!=st.end()){
                    found=true;
                    break;
                }
            }

            if(!found){
                result.push_back(tempFolder);
            }
        }

        return result;
    }
};