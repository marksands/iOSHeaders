//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCNBufferBinding : NSObject
{
    NSString *_name;
    long long _frequency;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

