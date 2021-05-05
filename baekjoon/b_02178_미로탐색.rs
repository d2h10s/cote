use std::io::{self, Read};
use std::collections::VecDeque;

fn parse_line()->([[bool; 100]; 100],i32,i32){
    let mut buffer = String::new();
    let mut map = [[false; 100]; 100];
    io::stdin().read_to_string(&mut buffer).unwrap();
    let (n, m) = {
        let nm:Vec<i32> = buffer.lines().next().unwrap()
            .split(' ').map(|x| x.parse().unwrap()).collect();
        (nm[0], nm[1])
    };
    for (i, line) in buffer.lines().skip(1).enumerate(){
        for (j, ch) in line.chars().enumerate(){
            map[i][j] = ch == '1';
        }
    }
    (map,n,m)
}

fn main() {
    let dir = vec![(1,0),(0,1),(-1,0),(0,-1)];
    let mut is_visited = [[0; 100]; 100];
    let (maze, n, m) = parse_line();
    let mut q = VecDeque::<(i32,i32)>::new();

    q.push_back((0, 0));
    is_visited[0][0] = 1;

    while !q.is_empty(){
        let (x,y) = q.pop_front().unwrap();
        if x<0 || y<0 || x>=n || y>=m {continue}
        if x==n-1 && y==m-1 {break}

        for i in 0..4 {
            let (x_, y_) = (x + dir[i].0, y + dir[i].1);
            if x_ < 0 || y_ < 0 || x_ >= n || y_ >= m { continue }
            if maze[x_ as usize][y_ as usize] && is_visited[x_ as usize][y_ as usize] == 0 {
                q.push_back((x_, y_));
                is_visited[x_ as usize][y_ as usize] = is_visited[x as usize][y as usize] + 1;
            }
        }
    }
    println!("{}", is_visited[(n-1) as usize][(m-1) as usize]);
}
