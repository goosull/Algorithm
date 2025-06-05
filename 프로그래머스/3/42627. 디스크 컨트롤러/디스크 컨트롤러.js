function solution(jobs) {
    var answer = 0;
    const list = new Array()
    let time = 0
    let i =0;
    
    jobs.sort((a, b) => a[0] - b[0]);
    
    while (i < jobs.length || list.length > 0) {
        while (i < jobs.length && time >= jobs[i][0]) {
            list.push(jobs[i])
            i += 1
        }
        if (list.length > 0){
            list.sort((a, b) => a[1] - b[1]);
            job = list.shift()
            console.log(job,job[1] + time - job[0])
            answer += job[1] + time - job[0]
            time += job[1]
        }
        else if (i < jobs.length) {
            time = jobs[i][0]
        }
    }
    
    return Math.floor(answer/jobs.length);
}