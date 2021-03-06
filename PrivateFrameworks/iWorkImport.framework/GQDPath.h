/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDPath : NSObject {
    char *mPathString;
}

+ (char *)createPathString:(struct CGPath { }*)arg1;
+ (struct __CFString { }*)createString:(struct CGPath { }*)arg1;

- (struct CGPath { }*)createBezierPath;
- (void)dealloc;
- (BOOL)hasHorizontalFlip;
- (BOOL)hasVerticalFlip;
- (BOOL)horizontalFlip;
- (BOOL)isRect;
- (BOOL)isRectangular;
- (char *)pathStr;
- (BOOL)verticalFlip;

@end
