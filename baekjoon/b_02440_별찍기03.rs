use std::io;

fn main() {
  let mut s = String::new();
  io::stdin().read_line(&mut s).unwrap();
  let num = s.trim().parse::<usize>().unwrap(); 

  let mut sb = String::new();
  for i in 0..num {
    sb.push_str("*".repeat(num - i).as_str());
    sb.push_str("\n");
  }
  print!("{}", sb);
}