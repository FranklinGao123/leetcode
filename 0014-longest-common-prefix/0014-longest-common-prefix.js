/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    //Loop through each strs
    var pre = strs[0];
    strs.shift();
    strs.forEach(i =>{
        var preLen = -1;
        for(var j = 0; j<((i.length<pre.length)?i.length:pre.length); j++){
            if(pre[j] == i[j]){
                preLen = j;
            } else{
                break;
            }
        }
        if(preLen == -1){
            pre = "";
            return;
        }
        pre = pre.substring(0,preLen+1);
        
    });
    return pre;
};