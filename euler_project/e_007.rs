fn main() {
    const N:usize = 1000000;
    let mut is_prime = [true; N];
    let mut prime_size = 0;
    for i in 2..N {
        if is_prime[i] == false {continue;}
        for j in (i*2..N).step_by(i){
            is_prime[j] = false;
        }
        prime_size += 1;
        if prime_size >= 10001 {
            println!("{}", i);
            return;
        }
    }
}
