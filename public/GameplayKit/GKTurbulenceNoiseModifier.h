//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

@interface GKTurbulenceNoiseModifier : GKNoiseModifier
{
    double _power;
    double _frequency;
    double _roughness;
    int _seed;
    GKPerlinNoiseSource *_perlin[3];
}

- (void).cxx_destruct;
- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (void)dealloc;
- (id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

