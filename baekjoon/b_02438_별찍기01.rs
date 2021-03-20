use std::io::stdin;
fn main() {
    let mut n = String::new();
    stdin().read_line(&mut n).unwrap();
    let n = n.trim().parse::<isize>().unwrap();
    let mut s = String::from("*");
    for _i in 1..=n{
        println!("{}", s);
        s += "*";
    }
}