use std::io;

fn is_perfect_sudoku(sudoku: Vec<Vec<usize>>) -> bool {
    for i in 0..9 {
        let mut row = [0; 9];
        let mut column = [0; 9];
        let mut square = [0; 9];

        for j in 0..9 {
            row[sudoku[i][j]-1] += 1;
            column[sudoku[j][i]-1] += 1;
            let (r0, c0) = (i/3*3, i%3*3);
            let (r1,c1) = (j/3, j % 3);
            square[sudoku[r0+r1][c0+c1]-1] += 1;
        }
        for j in 0..9 {
            if row[j] != 1 || column[j] != 1 || square[j] != 1{
                return false
            }
        }
    }
    true
}

#[allow(non_snake_case)]
fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let T = s.trim().parse::<i32>().expect("Not integer");
    for t in 0..T {
        if t != 0 {
            io::stdin().read_line(&mut s).unwrap();
        }
        let mut sudoku: Vec<Vec<usize>> = Vec::new();
        for _ in 0..9 {
            s.clear();
            io::stdin().read_line(&mut s).unwrap();
            let line:Vec<usize> = s.
                            trim().
                            split_whitespace().
                            map(|x| x.parse::<usize>().unwrap()).
                            collect();
            sudoku.push(line);
        }
        println!("Case {}: {}", t+1, match is_perfect_sudoku(sudoku){
            true => "CORRECT",
            false => "INCORRECT"
        });
    }
}
