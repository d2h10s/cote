use std::io;
fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n:usize = s.trim().parse().unwrap();
    let mut v:Vec<String> = Vec::new();
    for i in (1..=n).rev() {
        s = "*".repeat(i) + " ".repeat((n - i) *2).as_str() + "*".repeat(i).as_str() + "\n";
        v.push(s.clone());
        if i != n{v.insert(0,s.clone())};
    }
    print!("{}", v.join(""));
}