//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject
{
    _Bool _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool expectResponse; // @synthesize expectResponse=_expectResponse;
@property(retain, nonatomic) HDHealthServiceCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

