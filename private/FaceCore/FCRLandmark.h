//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FCRLandmark : NSObject
{
    NSString *type;
    unsigned long long pointCount;
    struct CGPoint *points;
}

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;
@property(readonly) struct CGPoint *points; // @synthesize points;
@property(readonly) unsigned long long pointCount; // @synthesize pointCount;
@property(readonly) NSString *type; // @synthesize type;
- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;

@end
