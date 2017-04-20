/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKBillowNoiseSource : GKCoherentNoiseSource {
    double  _persistence;
}

@property (nonatomic) double persistence;

+ (id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(int)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

- (id)cloneModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(int)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
- (double)persistence;
- (void)setPersistence:(double)arg1;
- (double)valueAt;

@end