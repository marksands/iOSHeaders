//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDAnimationRandomGenerator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator>
{
    struct TSCERandGenerator *_randGenerator;
    unsigned long long _seed;
}

+ (unsigned int)generateNewSeed;
+ (id)randomGeneratorFromPluginContext:(id)arg1;
@property(nonatomic) unsigned long long seed; // @synthesize seed=_seed;
- (CDStruct_818bb265)GLPoint4DRandomPoint;
- (CDStruct_03942939)GLPoint3DRandomPoint;
- (CDStruct_6e3f967a)GLPoint2DRandomPoint;
- (CDStruct_03942939)GLPoint3DRandomDirection;
- (double)doubleBetween:(double)arg1:(double)arg2;
- (long long)intBetween:(long long)arg1:(long long)arg2;
@property(readonly, nonatomic) double randomDouble;
- (void)dealloc;
- (id)initWithSeed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

