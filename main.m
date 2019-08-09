#import <Foundation/Foundation.h>
#import "Box.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        Box *box = [[Box alloc] initWithHeight: 5.4 andWidth: 3.3 andLength: 2.1];
        Box *box2 = [[Box alloc] initWithHeight: 15 andWidth: 10 andLength: 10];
        
        NSLog(@"%.0f", [box ratioToAnotherBox:box2]);
    }
    return 0;
}
