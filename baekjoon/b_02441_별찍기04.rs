use std::io;
fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n:usize = s.trim().parse().unwrap();
    s.clear();
    for i in 0..n {
        s.push_str(" ".repeat(i).as_str());
        s.push_str("*".repeat(n - i).as_str());
        s.push('\n');
    }
    print!("{}", s);
}