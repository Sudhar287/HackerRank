static Scanner get = new Scanner(System.in);
static int B = get.nextInt();
static int H = get.nextInt();
static boolean flag = true;

static{
    if (B < 1 || H < 1){
        flag = false;
        System.out.print("java.lang.Exception: Breadth and height must be positive");
    }
}