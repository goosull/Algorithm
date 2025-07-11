function solution(park, routes) {
    const pos = [0, 0];
    for (let i = 0; i < park.length; i++) {
      const j = park[i].indexOf('S');
      if (j !== -1) {
        pos[0] = i;
        pos[1] = j;
        break;
      }
    }
    
    for (const r of routes){
        const [op, ns] = r.split(" ");
        const n = Number(ns);
        var able = true
        
        if (op == "N") {
            if (pos[0] - n >= 0) {
                for (var i = 1; i < n+1; i ++) {
                    if (park[pos[0] - i][pos[1]] == 'X') {
                        able = false;
                        break;
                    }
                }
            }
            else able =false;
            if (able) {
                pos[0] = pos[0] - n;
            }
        }
        
        if (op == "S") {
            if (pos[0] + n < park.length) {
                for (var i = 1; i < n+1; i ++) {
                    if (park[pos[0] + i][pos[1]] == 'X') {
                        able = false;
                        break;
                    }
                }
            } 
            else able =false;
            if (able) {
                pos[0] = pos[0] + n;
            }
        }
        
        if (op == "W") {
            if (pos[1] - n >= 0) {
                for (var i = 1; i < n+1; i ++) {
                    if (park[pos[0]][pos[1] - i] == 'X') {
                        able = false;
                        break;
                    }
                }
            }
            else able =false;
            if (able) {
                pos[1] = pos[1] - n;
            }
        }
        
        if (op == "E") {
            if (pos[1] + n < park[0].length) {
                for (var i = 1; i < n+1; i ++) {
                    if (park[pos[0]][pos[1] + i] == 'X') {
                        able = false;
                        break;
                    }
                }
            }
            else able =false;
            if (able) {
                pos[1] = pos[1] + n;
            }
        }
    }
    
    return pos;
}