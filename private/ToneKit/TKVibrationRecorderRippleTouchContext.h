//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TKVibrationRecorderRippleTouchContext : NSObject
{
    double _creationTimestamp;
    struct CGPoint _location;
}

@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint)arg2;
- (double)timeIntervalSinceCreation;
- (id)init;

@end

