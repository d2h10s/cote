fn main() {
    let y = (1..=100).fold(0, |x,y| x+y);
    print!("{}", y*y - (1..=100).map(|x| x*x).fold(0, |x,y| x+y));
}