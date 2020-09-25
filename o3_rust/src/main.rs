fn is_prime(n:usize) -> bool{
    for i in 2..((n as f64).sqrt() as usize + 1){
        if n%i==0{return false}
    }
    return true;
}

fn main() {
    let y:usize = 600851475143;
    for i in (1..((y as f64).sqrt() as usize)).rev(){
        if y % i==0 && is_prime(i){
            println!("{}",i);
            return;
        }
    }
}