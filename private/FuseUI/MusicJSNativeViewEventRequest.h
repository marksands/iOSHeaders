//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MusicJSNativeViewEventRequest : NSObject
{
    NSDictionary *_extraInfo;
    long long _nativeViewEventType;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long nativeViewEventType; // @synthesize nativeViewEventType=_nativeViewEventType;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void).cxx_destruct;

@end

