use std::env;
use rand::Rng;

fn main() {
    let mut args = env::args();
    
    //skip first arg (program path)
    args.next();
    
    let n_arg = args.next().unwrap(); 
    let n = n_arg.parse::<usize>().unwrap();
    
    let mut v = vec![0; n];
    let mut rng = rand::thread_rng();
    
    for i in 0..n {
        v[i] = rng.gen_range(0..n);
    }

    v.sort();
}