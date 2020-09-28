use std::io::stdin;
fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).unwrap();
    let n = s.trim().parse::<i32>().unwrap();
    for i in 1..=n {
        s.clear();
        stdin().read_line(&mut s).unwrap();
        let m:Vec<_> = s.trim()
            .split_whitespace()
            .map(|x| x.parse::<i32>().unwrap())
            .collect();
        println!("Case #{}: {} + {} = {}", i, m[0], m[1], m[0] + m[1]);
    }
}
