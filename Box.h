#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface Box : NSObject
@property (nonatomic, assign)float height;
@property (nonatomic, assign)float width;
@property (nonatomic, assign)float length;

// Initializer
- (instancetype)initWithHeight: (float) height andWidth: (float) width andLength:(float) length;
// getVolume
- (float) getVolume;
// ratio to another box
- (float) ratioToAnotherBox: (Box *) box;
@end
NS_ASSUME_NONNULL_END
