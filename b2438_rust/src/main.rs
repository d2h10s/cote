use std::io::{self, Write};
fn main() {
    let mut res = Vec::new();
    let mut n = String::new();
    io::stdin().read_line(&mut n).unwrap();
    let n = n.trim().parse::<isize>().unwrap();
    let mut s = String::from("*");
    for _i in 1..=n{
        writeln!(res, "{}", s[..]);
        s += "*";
    }
}