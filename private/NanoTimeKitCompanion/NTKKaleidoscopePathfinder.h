//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NTKKaleidoscopePathfinder : NSObject
{
    float _sampleRadius;
    int _cellGridWidth;
    int _cellGridHeight;
    int _dominanceGridWidth;
    int _dominanceGridHeight;
    // Error parsing type: ^, name: _dominanceGrid
    NSArray *_path;
}

- (void).cxx_destruct;
- (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end

