use std::io;
fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n:usize = s.trim().parse().unwrap();
    let mut v:Vec<String> = Vec::new();
    for i in (0..n).rev() {
        s = " ".repeat(n - i - 1) + "*".repeat(i*2+1).as_str() + "\n";
        v.push(s.clone());
        if i != n-1{v.insert(0,s.clone())};
    }
    print!("{}", v.join(""));
}