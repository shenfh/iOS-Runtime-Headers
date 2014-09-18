/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSBundle, NSMutableDictionary, NSString;

@interface RenderedHandViewFactory : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    NSMutableDictionary *_angleCache;
    NSString *_imagePath;
    } _offset;
    struct CGPDFPage { } *_page;
    unsigned long long _registeredClientsCount;
    NSBundle *_resourcesBundle;
    } _scale;
    } _viewSize;
    bool_allowCaching;
}

@property(readonly) bool allowCaching;
@property(readonly) NSString * key;
@property unsigned long long registeredClientsCount;

+ (void)flushAllCaches;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4 allowCaching:(bool)arg5;
+ (void)unregisterForFactory:(id)arg1;

- (bool)allowCaching;
- (void)dealloc;
- (void)flushCache;
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4 allowCaching:(bool)arg5;
- (id)key;
- (unsigned long long)registeredClientsCount;
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setRegisteredClientsCount:(unsigned long long)arg1;

@end