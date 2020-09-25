use std::io::stdin;
fn dfs(mut visited:Vec<bool>, num:&mut Vec<usize>, len:usize, n:usize, m:usize){
    if len == m {
        for a in num.iter() {
            print!("{} ", a);
        }
        println!("");
        num.pop();
        return;
    };
    for i in 1..=n {
        if visited[i] { continue }
        visited[i] = true;
        num.push(i);
        dfs(visited.clone(), num, len+1, n, m);
        //visited[i] = false;
    }
    num.pop();
}
fn main(){
    let (n, m):(usize, usize) = {
        let mut line:String = String::new();
        stdin().read_line(&mut line).unwrap();
        let mut iter = line.split_whitespace().map(str::trim).map(str::parse);
        (iter.next().unwrap().unwrap(), iter.next().unwrap().unwrap())
    };
    dfs(vec![false; n + 1], &mut Vec::new(), 0, n, m);

}