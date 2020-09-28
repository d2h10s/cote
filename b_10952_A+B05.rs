use std::io::stdin;
fn main() {
    let mut s = String::new();
    loop {
        stdin().read_line(&mut s).unwrap();
        let n = s.trim().split_whitespace().map(|x| x.parse::<i32>().unwrap()).sum::<i32>();
        if n == 0 {break}
        println!("{}", n);
        s.clear();
    }
}
