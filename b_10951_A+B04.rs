use std::io::{self, stdin};
fn main() -> io::Result<()> {
    let mut s = String::new();
    loop {
        let len = stdin().read_line(&mut s)?;
        if len == 1 { break; }
        println!("{}", s.trim().split_whitespace().map(|x| x.parse::<i32>().unwrap()).sum::<i32>());
        s.clear();
    }
    Ok(())
}
