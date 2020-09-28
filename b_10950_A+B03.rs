use std::io::{stdin, BufRead};
fn main() {
    let stdin = stdin();
    let mut iter = stdin.lock().lines();
    let n = iter.next().unwrap().unwrap().trim().parse::<i32>().unwrap();
    for _i in 0..n{
        let a = iter.next().unwrap().unwrap()
            .trim()
            .split_whitespace()
            .map(|x| x.parse::<i32>().unwrap()).sum::<i32>();
        println!("{}", a);
    }
}
