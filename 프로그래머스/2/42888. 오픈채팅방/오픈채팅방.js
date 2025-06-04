function solution(record) {
    n = record.length
    var id = new Object()
    var list = new Array()
    for(var i = 0; i < n; i ++){
        parsed = record[i].split(" ")
        if (parsed[0] == "Enter" || parsed[0] == "Change") {
            id[parsed[1]] = parsed[2];
        }
        if (parsed[0] == "Enter" || parsed[0] == "Leave") {
            list.push([parsed[0], parsed[1]])
        }
    }
    var answer = [];
    for(var i = 0; i < list.length; i ++){
        if (list[i][0] == "Enter") {
            answer.push(id[list[i][1]] + "님이 들어왔습니다.")
        }
        else {
            answer.push(id[list[i][1]] + "님이 나갔습니다.")
        }
    }
    return answer;
}