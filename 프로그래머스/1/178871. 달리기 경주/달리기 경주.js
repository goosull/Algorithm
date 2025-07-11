function solution(players, callings) {
    const pos = {};
    for (let i = 0; i < players.length; i++) {
      pos[players[i]] = i;
    }
    
    for (const calling of callings) {
        const idx = pos[calling];
        const prev = players[idx - 1];

        players[idx - 1] = calling;
        players[idx]     = prev;

        pos[calling]     = idx - 1;
        pos[prev] = idx;
    }
    
    return players;
}