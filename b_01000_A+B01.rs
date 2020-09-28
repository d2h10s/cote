use std::io::stdin;
fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).unwrap();
    let n = s
        .split_whitespace()
        .map(str::trim)
        .map(|x| x.parse::<i32>().unwrap())
        .fold(0, |x,y| x+y);
    println!("{}", n);
}
