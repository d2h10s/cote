use std::io::stdin;
fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).unwrap();
    let n = s.trim().parse::<i32>().unwrap();
    for i in 1..=n {
        s.clear();
        stdin().read_line(&mut s).unwrap();
        let m = s.trim().split_whitespace().map(|x| x.parse::<i32>().unwrap()).sum::<i32>();
        println!("Case #{}: {}", i, m);
    }
}
